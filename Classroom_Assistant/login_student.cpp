#include "login_student.h"
#include "ui_login_student.h"
#include <QMessageBox>
#include <QDebug>

Login_student::Login_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_student)
{
    ui->setupUi(this);
    setWindowTitle("学生端登录");
    //登录
    connect(ui->loginBtn, &QPushButton::clicked, this, &Login_student::log_in);
    connect(this, &Login_student::log_in, this, &Login_student::log_in_slot);
    //取消登录注册
    connect(ui->closeBtn, &QPushButton::clicked, this, [=](){
        this->done(0);
    });
    //登录失败
    connect(this, &Login_student::log_in_failed, this, [=](){
        QMessageBox::critical(this, "登录失败", "请检查您输入的学号和密码");
    });
    //登录成功
    connect(this, &Login_student::log_in_succeed, this, [=](){
        QMessageBox::information(this, "登录成功", "恭喜您登录成功！");
    });
    //注册
    connect(ui->registerBtn, &QPushButton::clicked, this, &Login_student::Register);
    connect(this, &Login_student::Register, this, &Login_student::Register_slot);
}

Login_student::~Login_student()
{
    delete ui;
}

void Login_student::log_in_slot()
{
    QString a,b;
    a = "小明";
    b = ui->passwordLine->text();//获取输入的密码
    int id = ui->usernameLine->text().toInt();
    //这里判断是否正确
    if(1)
    {
        emit Login_student::log_in_succeed(id,b,a);
        this->done(1);
    }
    else
    {
        emit Login_student::log_in_failed();
    }
}

void Login_student::Register_slot()
{
    Register_Student *rs = new Register_Student(this);
    this->hide();
    rs->exec();
    this->show();
}
