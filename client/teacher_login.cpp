#include "teacher_class.h"
#include "teacher_login.h"
#include "ui_teacher_login.h"

teacher_login::teacher_login(QWidget *parent,socket *tcp) :
    QMainWindow(parent),
    ui(new Ui::teacher_login)
{
    ui->setupUi(this);
    this->tcp=tcp;
    setFixedSize(307,288);
}

teacher_login::~teacher_login()
{
    delete ui;
}

void teacher_login::on_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QJsonObject obj;
    obj.insert("act","login");
    obj.insert("username",username);
    obj.insert("password",password);
    obj.insert("type","teacher");
    QJsonDocument doc(obj);
    QByteArray rev = tcp->request(doc.toJson());
    QJsonObject obj_rev;
    QJsonDocument doc_rev = QJsonDocument::fromJson(rev);
    obj_rev=doc_rev.object();
    bool is_succeessful =obj_rev.value("is_successful").toBool();
    if(is_succeessful)
    {
        QMessageBox::information(this,"提示","登陆成功");
        this->close();
        teacher_class *tclass=new teacher_class(this,tcp);
        tclass->show();
    }
    else
    {
        QMessageBox::information(this,"提示","登陆失败，请检查您的用户名和密码。");
    }
}


void teacher_login::on_register_2_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QJsonObject obj;
    obj.insert("act","register");
    obj.insert("username",username);
    obj.insert("password",password);
    obj.insert("type","teacher");
    QJsonDocument doc(obj);
    QByteArray rev = tcp->request(doc.toJson());
    QJsonObject obj_rev;
    QJsonDocument doc_rev = QJsonDocument::fromJson(rev);
    obj_rev=doc_rev.object();
    bool is_succeessful =obj_rev.value("is_successful").toBool();
    if(is_succeessful)
    {
        QMessageBox::information(this,"提示","注册成功");
    }
    else
    {
        QMessageBox::information(this,"提示","注册失败，您的用户名已经被注册了");
    }
}

