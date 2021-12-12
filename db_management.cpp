#include "db_management.h"


DB_Management::DB_Management(QObject *parent)
    : QObject{parent}
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName(host);
    db.setPort(port);
    db.setDatabaseName(DB_name);
    db.setUserName(DB_username);
    db.setPassword(DB_password);
}

DB_Management::~DB_Management()
{
}

bool DB_Management::reg(QString type, QString username, QString password)
{
    to_connect();
/*
    QStringList tables = db.tables();
        foreach(QString table, tables)
            qDebug()<<table;
//*/
    QSqlQuery query(db);
    query.exec("select * from "+type+" where (username='"+username+"');");
//    query.exec(" insert into student(username,password,class) values('LNF_297', '123456', '[\n]');");
    if(query.next())
    {
//        QString a=query.value("username").toString();
//        qDebug()<<a<<"\n";
        close();
        return false;
    }
    else
    {
//        QString command=;
//        qDebug()<<command<<"\n";
        db.exec("INSERT INTO "+type+" (username, password, class) VALUES ('"+username+"','"+password+"','[\n]');");
//        qDebug()<<w<<"\n";
//        db.exec("INSERT INTO `student` (`username`, `password`, `class`) VALUES ('LNF_297', '123456', '[\r\n]')");
        close();
        return true;
    }
}

bool DB_Management::login(QString type, QString username, QString password)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from "+type+" where (username='"+username+"');");
    if(query.next())
    {
        QString real_password = query.value("password").toString();
        if(real_password==password)
        {
            close();
            return true;
        }
        else
        {
            close();
            return false;
        }
    }
    else
    {
        close();
        return false;
    }
}

QJsonArray DB_Management::get_class(QString type, QString username)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from "+type+" where (username='"+username+"');");
    QString json_string;
    while(query.next())
    {
        json_string = query.value("class").toString();
    }
//    db.close();

    QByteArray json = json_string.toUtf8();
    QJsonDocument doc=QJsonDocument::fromJson(json);
    QJsonArray rezult;
    if(doc.isArray())
    {
        QJsonArray arr=doc.array();
        for(int i=0;i<arr.size();i++)
        {
            int classid =arr[i].toInt();
            query.exec("select * from class where (id="+QString::number(classid)+");");
            QJsonObject obj;
            while(query.next())
            {
                QString classname=query.value("name").toString();
                QString teacher=query.value("teacher").toString();
                obj.insert("classid",classid);
                obj.insert("classname",classname);
                obj.insert("teacher",teacher);
            }
            rezult.append(obj);
        }
    }
    close();
    return rezult;
}

void DB_Management::addclass(QString username, QString classname)
{
    to_connect();
    QSqlQuery query(db);
    db.exec("INSERT INTO class (name,paper,teacher) VALUES ('"+classname+"','[\n]','"+username+"');");
//    qDebug()<<"Inserted\n";
    query.exec("SELECT last_insert_rowid()");
    query.next();
    int classid = query.lastInsertId().toInt();
//    qDebug()<<classid<<"\n";
    //To get the AUTO INCREASING id in class table
    query.exec("select * from teacher where (username= '"+username+"' );");
    QJsonArray arr;
    while(query.next())
    {
//        qDebug()<<"123\n";
        QJsonDocument orgin_class_doc;
        QString orgin_class_string=query.value("class").toString();
        QByteArray orgin_class_bytearr=orgin_class_string.toUtf8();
//        qDebug()<<orgin_class_bytearr<<"\n";
        orgin_class_doc=QJsonDocument::fromJson(orgin_class_bytearr);
        if(orgin_class_doc.isArray())
        {
            arr=orgin_class_doc.array();
            arr.append(classid);
//            qDebug()<<classid<<"\n";
        }
    }
    QJsonDocument new_class_doc(arr);
    QString new_class_string = new_class_doc.toJson();
//    qDebug()<<new_class_string;
    query.exec("update teacher set class = '"+new_class_string+"' where username = '"+username+"';");
    close();
}

bool DB_Management::attentclass(QString username, int classid)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from class where (id= "+QString::number(classid)+" );");
    if(!query.next())
    {
        close();
        return false;
    }
    query.exec("select * from student where (username= '"+username+"' );");
    QJsonArray arr;
    while(query.next())
    {
        QJsonDocument orgin_class_doc;
        QString orgin_class_string=query.value("class").toString();
        QByteArray orgin_class_bytearr=orgin_class_string.toUtf8();
//        qDebug()<<orgin_class_bytearr<<"\n";
        orgin_class_doc=QJsonDocument::fromJson(orgin_class_bytearr);
        if(orgin_class_doc.isArray())
        {
            arr=orgin_class_doc.array();
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i].toInt()==classid)
                {
                    close();
                    return false;
                }
            }
            arr.append(classid);
//            qDebug()<<classid<<"\n";
        }
    }
    QJsonDocument new_class_doc(arr);
    QString new_class_string = new_class_doc.toJson();
//    qDebug()<<new_class_string;
    query.exec("update student set class = '"+new_class_string+"' where username = '"+username+"';");
    close();
    return true;
}

void DB_Management::addpaper(QString papername, QString papercontent, int classid)
{
    to_connect();
    QSqlQuery query(db);
    db.exec("INSERT INTO paper (name,content) VALUES ('"+papername+"','"+papercontent+"');");
//    qDebug()<<"Inserted\n";
    query.exec("SELECT last_insert_rowid()");
    query.next();
    int paperid = query.lastInsertId().toInt();
//    qDebug()<<paperid;
    query.exec("select * from class where (id = "+QString::number(classid)+" );");
    QJsonArray arr;
    while(query.next())
    {
//        qDebug()<<"123\n";
        QJsonDocument orgin_paper_doc;
        QString orgin_paper_string=query.value("paper").toString();
        QByteArray orgin_paper_bytearr=orgin_paper_string.toUtf8();
//        qDebug()<<orgin_class_bytearr<<"\n";
        orgin_paper_doc=QJsonDocument::fromJson(orgin_paper_bytearr);
        if(orgin_paper_doc.isArray())
        {
            arr=orgin_paper_doc.array();
            arr.append(paperid);
//            qDebug()<<classid<<"\n";
        }
    }
    QJsonDocument new_paper_doc(arr);
    QString new_paper_string = new_paper_doc.toJson();
//    qDebug()<<new_class_string;
    query.exec("update class set paper = '"+new_paper_string+"' where id = "+QString::number(classid)+";");
    close();
}

QJsonArray DB_Management::showpaperlist(int classid)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from class where (id="+QString::number(classid)+");");
    QString json_string;
    while(query.next())
    {
        json_string = query.value("paper").toString();
    }
//    db.close();

    QByteArray json = json_string.toUtf8();
    QJsonDocument doc=QJsonDocument::fromJson(json);
    QJsonArray rezult;
    if(doc.isArray())
    {
        QJsonArray arr=doc.array();
        for(int i=0;i<arr.size();i++)
        {
            int paperid =arr[i].toInt();
            query.exec("select * from paper where (id="+QString::number(paperid)+");");
            QJsonObject obj;
            while(query.next())
            {
                QString papername=query.value("name").toString();
                obj.insert("paperid",paperid);
                obj.insert("papername",papername);
            }
            rezult.append(obj);
        }
    }
    close();
    return rezult;
}

QJsonObject DB_Management::getpaper(int paperid)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from paper where (id="+QString::number(paperid)+");");
    QJsonObject obj;
    while(query.next())
    {
        QString papername = query.value("name").toString();
        QString papercontent = query.value("content").toString();
        obj.insert("paperid",paperid);
        obj.insert("papername",papername);
        obj.insert("papercontent",papercontent);
    }
    close();
    return obj;
}

bool DB_Management::submmit(QString username, int paperid, int score)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from submission where (paperid="+QString::number(paperid)+" and student = '"+username+"' );");
    if(query.next())
    {
        close();
        return false;
    }
    db.exec("INSERT INTO submission (paperid,student,score) VALUES ("+QString::number(paperid)+",'"+username+"',"+QString::number(score)+");");
//    qDebug()<<command;
    close();
    return true;
}

int DB_Management::get_score(QString username, int paperid)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from submission where (paperid="+QString::number(paperid)+" and student = '"+username+"' );");
    if(!query.next())
    {
        close();
        return -1;
    }
    int score = query.value("score").toUInt();
    close();
    return score;
}

QJsonArray DB_Management::get_score(int paperid)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from submission where (paperid="+QString::number(paperid)+");");
    QJsonArray arr;
    while(query.next())
    {
        QString student=query.value("student").toString();
        int score=query.value("score").toInt();
        QJsonObject obj;
        obj.insert("student",student);
        obj.insert("score",score);
        arr.append(obj);
    }
    close();
    return arr;
}

inline void DB_Management::to_connect()
{
//*/
    if(!db.open())
    {
        qDebug()<<"DB opened failed. Please check your configuration\n";
    }
    //*/
}

inline void DB_Management::close()
{
    db.close();
//    QSqlDatabase::removeDatabase("QODBC");
}
