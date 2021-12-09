#include "login_teacher.h"
#include "ui_login_teacher.h"
#include <QDebug>
#include <QMessageBox>

Login_teacher::Login_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_teacher)
{
    ui->setupUi(this);
    setWindowTitle("教师端登录");
    connect(ui->loginBtn, &QPushButton::clicked, this, &Login_teacher::log_in);
    connect(this, &Login_teacher::log_in, this, &Login_teacher::log_in_slot);
    connect(ui->closeBtn, &QPushButton::clicked, this, [=](){
        this->done(0);
    });
    connect(this, &Login_teacher::log_in_failed, this, [=](){
        QMessageBox::critical(this, "登录失败", "请检查您输入的姓名和密码");
    });
    connect(ui->registerBtn, &QPushButton::clicked, this, &Login_teacher::Register);
    connect(this, &Login_teacher::Register, this, &Login_teacher::Register_slot);
}

Login_teacher::~Login_teacher()
{
    delete ui;
}

void Login_teacher::log_in_slot()
{
    QString a,b;
    a = ui->usernameLine->text();
    b = ui->passwordLine->text();
    if(1)
    {
        emit Login_teacher::log_in_succeed(a);
        this->done(1);
    }
    else
    {
        emit Login_teacher::log_in_failed();
    }
}

void Login_teacher::Register_slot()
{
    Register_Teacher *rt = new Register_Teacher(this);
    this->hide();
    rt->exec();
    this->show();
}
