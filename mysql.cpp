#include "mysql.h"


mysql::mysql()
{
}

bool mysql::connect()
{
    if(QSqlDatabase::contains(DatabaseName))
    {
        DB=QSqlDatabase::database(DatabaseName);
    }
    else
    {
        DB=QSqlDatabase::addDatabase("QODBC",DatabaseName);
        DB.setHostName("localhost");
        DB.setDatabaseName(DatabaseName);
        DB.setUserName(UserName);
        DB.setPassword(Password);
    }
    return DB.open();
}

int mysql::Login_sql(QString Name, QString Password, int mode)
{
    QString mode_name;
    if(mode==0)mode_name="student";
    else mode_name="teacher";
    if(DB.isOpen()==false)connect();
    QSqlQuery query=DB.exec("select * from "+mode_name+" where name=\""+Name+"\" and password=\""+Password+"\";");
    if(query.next())
    {
        if(mode==0)
            return query.value("sid").toInt();
        else
            return query.value("uid").toInt();
    }
    else return 0;
}

void mysql::setSqlInformation(QString DBname, QString Uname, QString pw)
{
    DatabaseName=DBname;
    UserName=Uname;
    Password=pw;
}

QByteArray mysql::classSignIn_sql(int id)
{
    if(DB.isOpen()==false)connect();
    QSqlQuery query=DB.exec("select * from class where id=\""+QString::number(id)+"\";");
    query.next();
    sign_cnt=query.value("sign_in_total").toInt()+1;
    DB.exec("update class set sign_in_total="+QString::number(sign_cnt)+" where id=\""+QString::number(id)+"\";");
    for(int i=0;i<4;i++)
    {
        int rdm=rand()%62;
        if(rdm<10)sign_in_code[i]=rdm+48;
        else if(rdm<36)sign_in_code[i]=rdm+65-10;
        else sign_in_code[i]=rdm+97-36;
    }
    return sign_in_code;
}

void mysql::sign_in_sql(int uid)
{

}

QJsonArray mysql::classList_sql(int uid, int mode)
{
    QString mode_name;
    if(mode==0)mode_name="student";
    else mode_name="teacher";
    if(DB.isOpen()==false)connect();

    QSqlQuery query=DB.exec("select * from "+mode_name+" where uid="+QString::number(uid)+";");
    query.next();
    return query.value("class").toJsonArray();
}

QJsonArray mysql::studentList_sql(int id)
{
    if(DB.isOpen()==false)connect();
    QSqlQuery query=DB.exec("select * from student where"
                            " json_contains(class,json_object(\'classid\',""\""+QString::number(id)+"\"));");

    QJsonObject stu;
    QJsonArray stuList;
    QString name;
    int sid;
    QJsonArray joinClass;
    QJsonObject joinExam;
    while(query.next())
    {
        name=query.value("name").toString();
        sid=query.value("sid").toInt();
        joinClass=query.value("class").toJsonArray();
        joinExam=query.value("exam").toJsonObject();
        stu.insert("name",name);
        stu.insert("sid",sid);
        stu.insert("class",joinClass);
        stu.insert("exam",joinExam);
        stuList.append(stu);
    }
    return stuList;
}

QJsonArray mysql::studentExamInfo_sql(int sid, int classid)
{
    if(DB.isOpen()==false)connect();
    QSqlQuery query=DB.exec("select * from student where sid="+QString::number(sid)+";");
    query.next();
    QJsonArray examList=query.value("exam").toJsonArray();
    QString title;
    QString publish_time;
    int total_score;
    for(int i=0;i<examList.size();i++)//遍历数组中的每个对象，若不符合条件则删除
    {
        int id=examList[i].toObject().take("id").toInt();
        if(classid==0||id==classid)
        {
            QSqlQuery query2=DB.exec("select * from paper where id="+QString::number(id)+";");
            query2.next();
            title=query2.value("title").toString();
            publish_time=query2.value("publish_time").toString();
            total_score=query2.value("total_score").toInt();
            examList[i].toObject().insert("title",title);
            examList[i].toObject().insert("publish_time",publish_time);
            examList[i].toObject().insert("total_score",total_score);
        }
        else
        {
            examList.removeAt(i);
        }
    }
    return examList;

}

QJsonArray mysql::paperList_sql(int uid, int classid)
{

    if(DB.isOpen()==false)connect();

    QSqlQuery query;
    if(classid==0)query=DB.exec("select * from paper where creator="+QString::number(uid)+";");
    else query=DB.exec("select * from paper where id="+QString::number(classid)+";");
    QJsonArray content,paperList;
    QString title;
    QString publish_time;
    int total_score,lasting_time;
    while(query.next())
    {
        title=query.value("title").toString();
        publish_time=query.value("publish_time").toString();
        total_score=query.value("total_score").toInt();
        lasting_time=query.value("lasting_time").toInt();
        content=query.value("content").toJsonArray();

        QJsonObject paperSingle;
        paperSingle.insert("title",title);
        paperSingle.insert("publish_time",publish_time);
        paperSingle.insert("total_score",total_score);
        paperSingle.insert("lasting_time",lasting_time);
        paperSingle.insert("content",content);

        paperList.append(paperSingle);
    }
    return paperList;
}

QJsonObject mysql::examCheck_sql(int paperid,QJsonArray PaperInfo, int &score)
{
    if(DB.isOpen()==false)connect();

    QSqlQuery query=DB.exec("select * from paper where id="+QString::number(paperid)+";");
    query.next();
    QJsonArray examContent=query.value("content").toJsonArray(),contentChange;
    QJsonObject paperDone;

    QString title=query.value("title").toString();
    QString publish_time=query.value("publish_time").toString();
    int total_score=query.value("total_score").toInt();
    int lasting_time=query.value("lasting_time").toInt();

    paperDone.insert("title",title);
    paperDone.insert("publish_time",publish_time);
    paperDone.insert("total_score",total_score);
    paperDone.insert("lasting_time",lasting_time);

    int cnt=examContent.size();
    int chooseAns,correctAns;
    score=0;
    for(int i=0;i<cnt;i++)
    {
        QJsonObject examSingle=examContent[i].toObject();
        chooseAns=PaperInfo[i].toInt();
        correctAns=examSingle.value("correctAnd").toInt();
        examSingle.insert("choose",chooseAns);
        if(chooseAns==correctAns)score++;
        contentChange.append(examSingle);
    }
    score*=total_score/cnt;
    paperDone.insert("content",contentChange);
    paperDone.insert("get_score",score);

    return paperDone;
}

QJsonArray mysql::paperInquiry_sql(int sid, int paperid)
{

}

QJsonObject mysql::addStudentExam_sql(int sid, int paperid, QJsonArray PaperInfo, int &score)
{
    if(DB.isOpen()==false)connect();
    QJsonObject paperDone=examCheck_sql(paperid,PaperInfo,score);

    QSqlQuery query=DB.exec("select * from student where sid="+QString::number(sid)+";");
    query.next();
    QJsonArray examInfo=query.value("exam").toJsonArray();
    QJsonObject examAdd;
    examAdd.insert("id",paperid);
    examAdd.insert("score",score);
    examAdd.insert("option",PaperInfo);
    examInfo.append(examAdd);
    QJsonDocument doc(examInfo);
    QByteArray json = doc.toJson();
    DB.exec("update student set exam="+json+" where sid="+QString::number(sid)+";");

    return paperDone;
}
