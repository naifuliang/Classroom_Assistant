#include "teacher_class.h"
#include "ui_teacher_class.h"

#include <qstringlistmodel.h>

teacher_class::teacher_class(QWidget *parent,socket *tcp) :
    QMainWindow(parent),
    ui(new Ui::teacher_class)
{
    ui->setupUi(this);
    this->tcp=tcp;
    get_class();
    setFixedSize(521,412);
}

teacher_class::~teacher_class()
{
    delete ui;
}

void teacher_class::get_class()
{
    QByteArray rev = tcp->request(QString("{\n\"act\":\"getclass\"\n}").toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(rev);
    QJsonArray arr = doc.array();
    QStringList list;
    for(int i=0;i<arr.size();i++)
    {
        QJsonObject obj=arr[i].toObject();
        int classid =obj.value("classid").toInt();
        QString classname = obj.value("classname").toString();
        QString teacher = obj.value("teacher").toString();
        list<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
//        qDebug()<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
    }
    QStringListModel *model = new QStringListModel(list);
    ui->classlist->setModel(model);
    ui->classlist->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void teacher_class::on_create_clicked()
{
    QString classname=ui->classid->text();
    QJsonObject obj;
    obj.insert("act","addclass");
    obj.insert("classname",classname);
    QJsonDocument doc(obj);
    QByteArray rev = tcp->request(doc.toJson());
    QJsonDocument doc_rev = QJsonDocument::fromJson(rev);
    QJsonObject obj_rev = doc_rev.object();
    bool is_successful = obj_rev.value("is_successful").toBool();
    if(is_successful)
    {
         QMessageBox::information(this,"提示","成功创建课程。");
         get_class();
    }
    else
    {
        QMessageBox::information(this,"提示","创建课程失败。");
    }
}


void teacher_class::on_enter_clicked()
{
    int classid = ui->classid_2->text().toInt();
    teacher_paperlist *tpaperlist = new teacher_paperlist(this,tcp,classid);
    tpaperlist->show();
}

