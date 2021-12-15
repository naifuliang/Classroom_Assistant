#include "teacher_paperlist.h"
#include "ui_teacher_paperlist.h"

#include <qstringlistmodel.h>

teacher_paperlist::teacher_paperlist(QWidget *parent,socket *tcp,int classid) :
    QMainWindow(parent),
    ui(new Ui::teacher_paperlist)
{
    ui->setupUi(this);
    this->tcp=tcp;
    this->classid=classid;
    getlist();
}

teacher_paperlist::~teacher_paperlist()
{
    delete ui;
}

void teacher_paperlist::getlist()
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
        list<<QString("id:")+QString::number(paperid)+" "+"quiz名称:"+papername;

//        qDebug()<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
    }
    QStringListModel *model = new QStringListModel(list);
    ui->paperlist->setModel(model);
}

void teacher_paperlist::on_lookup_clicked()
{
    int paperid = ui->paperid->text().toInt();
    teacher_show *tshow = new teacher_show(this,tcp,paperid);
    tshow->show();
}


void teacher_paperlist::on_newpaper_clicked()
{
    teacher_add *tadd = new teacher_add(this,tcp,classid);
    tadd->show();
}

