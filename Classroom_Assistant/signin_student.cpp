#include "signin_student.h"
#include "ui_signin_student.h"
#include <QMessageBox>

Signin_student::Signin_student(QString cn,QWidget *parent) :
    QDialog(parent),classname(cn),
    ui(new Ui::Signin_student)
{
    ui->setupUi(this);
    ui->label->setText(classname+"课程发布签到信息");
    connect(ui->yesBtn, &QPushButton::clicked, this, &Signin_student::to_signin);
    connect(ui->noBtn, &QPushButton::clicked, this, &Signin_student::close);
    sis = "";
}

Signin_student::~Signin_student()
{
    delete ui;
}

void Signin_student::quickly_signin(QString sign_in_signal)
{
    sis = sign_in_signal;
}

void Signin_student::to_signin()
{
    QString mys = ui->SigninNumber->text();
    if(mys == sis)
    {
        QMessageBox::information(this, "签到成功", "恭喜你签到成功!");
        emit sign_in_done();
        this->close();
    }
    else QMessageBox::critical(this, "错误", "你的签到码错了 ヽ(。>д<)ｐ");
}
