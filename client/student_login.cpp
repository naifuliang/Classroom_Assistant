#include "student_login.h"
#include "ui_student_login.h"

student_login::student_login(QWidget *parent,socket *tcp) :
    QMainWindow(parent),
    ui(new Ui::student_login)
{
    this->tcp=tcp;
    ui->setupUi(this);
}

student_login::~student_login()
{
    delete ui;
}

void student_login::on_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QJsonObject obj;
    obj.insert("act","login");
    obj.insert("username",username);
    obj.insert("password",password);
    obj.insert("type","student");
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
        student_class *sclass=new student_class(this,tcp);
        sclass->show();
    }
    else
    {
        QMessageBox::information(this,"提示","登陆失败，请检查您的用户名和密码。");
    }
}


void student_login::on_register_2_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    QJsonObject obj;
    obj.insert("act","register");
    obj.insert("username",username);
    obj.insert("password",password);
    obj.insert("type","student");
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

