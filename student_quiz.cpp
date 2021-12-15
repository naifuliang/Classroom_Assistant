#include "student_quiz.h"
#include "ui_student_quiz.h"

student_quiz::student_quiz(QWidget *parent,socket *tcp,int paperid) :
    QMainWindow(parent),
    ui(new Ui::student_quiz)
{
    ui->setupUi(this);
    this->tcp=tcp;
    this->paperid=paperid;
    showqestions();
}

student_quiz::~student_quiz()
{
    delete ui;
}

void student_quiz::showqestions()
{
    QJsonObject obj_send;
    obj_send.insert("act","getpaper");
    obj_send.insert("paperid",paperid);
    QJsonDocument doc_send(obj_send);
    QByteArray rev = tcp->request(doc_send.toJson());
    QJsonDocument doc = QJsonDocument::fromJson(rev);
    QJsonObject obj_rev = doc.object();
    QString papername = obj_rev.value("papername").toString();
    QString content = obj_rev.value("papercontent").toString();
    QJsonDocument content_doc= QJsonDocument::fromJson(content.toUtf8());
//    qDebug()<<content;
    QJsonArray arr = content_doc.array();
    QStringList list;
    for(int i=0;i<arr.size();i++)
    {
        QJsonObject obj=arr[i].toObject();
        QString question =obj.value("question").toString();
        QString ans = obj.value("answer").toString();
        list<<"第"+QString::number(i+1)+"题: "+question;
//        qDebug()<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
    }
    QStringListModel *model = new QStringListModel(list);
    ui->questions->setModel(model);
    ui->papername->setText(papername);
}

void student_quiz::submit(int score)
{
    QJsonObject obj;
    obj.insert("act","submit");
    obj.insert("paperid",paperid);
    obj.insert("score",score);
    QJsonDocument doc(obj);
    tcp->request(doc.toJson());
}

void student_quiz::on_submit_clicked()
{
    QJsonObject obj_send;
    obj_send.insert("act","getpaper");
    obj_send.insert("paperid",paperid);
    QJsonDocument doc_send(obj_send);
    QByteArray rev = tcp->request(doc_send.toJson());
    QJsonDocument doc = QJsonDocument::fromJson(rev);
    QJsonObject obj_rev = doc.object();
    QString content = obj_rev.value("papercontent").toString();
    QJsonDocument content_doc= QJsonDocument::fromJson(content.toUtf8());
//    qDebug()<<content;
    QJsonArray arr = content_doc.array();
    QString answer[5];
    for(int i=0;i<arr.size();i++)
    {
        QJsonObject obj=arr[i].toObject();
//        QString question =obj.value("question").toString();
        QString ans = obj.value("answer").toString();
//        qDebug()<<QString("id:")+QString::number(classid)+" "+"课程名称:"+classname+" 授课教师："+teacher;
        answer[i]=ans;
    }
    int score=0;
    if(ui->q1->text()==answer[0]) score+=20;
    if(ui->q2->text()==answer[1]) score+=20;
    if(ui->q3->text()==answer[2]) score+=20;
    if(ui->q4->text()==answer[3]) score+=20;
    if(ui->q5->text()==answer[4]) score+=20;
    QMessageBox::information(this,"成绩提示","您的成绩为"+QString::number(score)+"分");
    submit(score);
    this->close();
}

