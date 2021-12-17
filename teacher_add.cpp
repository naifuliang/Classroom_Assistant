#include "teacher_add.h"
#include "ui_teacher_add.h"

teacher_add::teacher_add(QWidget *parent,socket *tcp,int classid) :
    QMainWindow(parent),
    ui(new Ui::teacher_add)
{
    ui->setupUi(this);
    this->tcp=tcp;
    this->classid=classid;
    setFixedSize(552,537);
}

teacher_add::~teacher_add()
{
    delete ui;
}

void teacher_add::on_submit_clicked()
{
    QString questions[5],ans[5];
    questions[0]=ui->q1->text();
    questions[1]=ui->q2->text();
    questions[2]=ui->q3->text();
    questions[3]=ui->q4->text();
    questions[4]=ui->q5->text();
    ans[0]=ui->a1->text();
    ans[1]=ui->a2->text();
    ans[2]=ui->a3->text();
    ans[3]=ui->a4->text();
    ans[4]=ui->a5->text();
    QString papername = ui->papername->text();
    QJsonObject obj;
    QJsonArray arr;
    for(int i=0;i<5;i++)
    {
        QJsonObject q;
        q.insert("question",questions[i]);
        q.insert("answer",ans[i]);
        qDebug()<<questions[i]<<ans[i];
        arr.append(q);
    }
    QJsonDocument content(arr);
    QString content_text=content.toJson();
    obj.insert("act","addpaper");
    obj.insert("classid",classid);
    obj.insert("papername",papername);
    obj.insert("papercontent",content_text);
    QJsonDocument doc(obj);
    tcp->request(doc.toJson());
    submitDone();

    this->close();
}

