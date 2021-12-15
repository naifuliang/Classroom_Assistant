#include "teacher_show.h"
#include "ui_teacher_show.h"

#include <qstringlistmodel.h>

teacher_show::teacher_show(QWidget *parent,socket *tcp,int paperid) :
    QMainWindow(parent),
    ui(new Ui::teacher_show)
{
    ui->setupUi(this);
    this->tcp=tcp;
    this->paperid=paperid;
    showscore();
}

teacher_show::~teacher_show()
{
    delete ui;
}

void teacher_show::showscore()
{
    QJsonObject obj_send;
    obj_send.insert("act","getscore");
    obj_send.insert("paperid",paperid);
    QJsonDocument doc_send(obj_send);
    QByteArray rev = tcp->request(doc_send.toJson());
    QJsonDocument doc_rev = QJsonDocument::fromJson(rev);
    QJsonArray arr_rev=doc_rev.array();
    QStringList list;
    for(int i=0;i<arr_rev.size();i++)
    {
        QJsonObject obj = arr_rev[i].toObject();
        QString student= obj.value("student").toString();
        int score = obj.value("score").toInt();
        list<<student+" 得分 "+QString::number(score);
    }
    QStringListModel *model = new QStringListModel(list);
    ui->list_2->setModel(model);
}
