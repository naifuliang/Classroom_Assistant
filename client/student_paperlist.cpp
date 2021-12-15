#include "student_paperlist.h"
#include "ui_student_paperlist.h"

student_paperlist::student_paperlist(QWidget *parent,socket *tcp,int classid) :
    QMainWindow(parent),
    ui(new Ui::student_paperlist)
{
    ui->setupUi(this);
    this->tcp=tcp;
    this->classid=classid;
    get_paper_list();
}

student_paperlist::~student_paperlist()
{
    delete ui;
}

void student_paperlist::get_paper_list()
{
    QJsonObject obj_send;
    obj_send.insert("act","showpaperlist");
    obj_send.insert("classid",classid);
    QJsonDocument doc_send(obj_send);
    QByteArray rev = tcp->request(doc_send.toJson());
    QJsonDocument doc = QJsonDocument::fromJson(rev);
    QJsonArray arr = doc.array();
    QStringList list;
    for(int i=0;i<arr.size();i++)
    {
        QJsonObject obj=arr[i].toObject();
        int paperid =obj.value("paperid").toInt();
        QString papername = obj.value("papername").toString();
        QString papercontent = obj.value("papercontent").toString();
        int score = get_score(paperid);
        if(score >=0)
        {
            list<<QString("id:")+QString::number(paperid)+" "+"quiz名称:"+papername+" 得分"+QString::number(score);
        }
        else
        {
            list<<QString("id:")+QString::number(paperid)+" "+"quiz名称:"+papername+" 未作答";
        }

//        qDebug()<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
    }
    QStringListModel *model = new QStringListModel(list);
    ui->paperlist->setModel(model);
}

int student_paperlist::get_score(int classid)
{
    QJsonObject obj;
    obj.insert("act","getscore");
    obj.insert("paperid",classid);
    QJsonDocument doc(obj);
    QByteArray rev = tcp->request(doc.toJson());
    QJsonDocument doc_rev = QJsonDocument::fromJson(rev);
    QJsonObject obj_rev=doc_rev.object();
    return obj_rev.value("score").toInt();
}

void student_paperlist::on_start_clicked()
{
    student_quiz *squiz = new student_quiz(this,tcp,ui->paperid->text().toInt());
    squiz->show();
}

