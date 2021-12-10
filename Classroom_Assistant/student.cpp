#include "student.h"
#include "ui_student.h"
#include<qdebug.h>

Student::Student(const int &Sid,const QString &Password,const QString& Name,const QString &Class,QWidget *parent) :
    QWidget(parent),Sid(Sid),Password(Password),Name(Name),Class(Class),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    setWindowTitle("学生端首页");
    ui->SidLabel->setText(QString::number(Sid));
    ui->NameLabel->setText(Name);
}



Student::~Student()
{
    delete ui;
}

void Student::closeEvent(QCloseEvent *event){
    emit Logout();
    qDebug()<<"Logout信号已发出";
}

void Student::on_LogoutButton_clicked()
{
    this->close();
}

