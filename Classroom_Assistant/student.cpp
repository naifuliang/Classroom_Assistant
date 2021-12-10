#include "student.h"
#include "ui_student.h"
#include <qdebug.h>

Student::Student(const int &Uid,const QString &Password,const QString& Name,const QString &Class,QWidget *parent) :
    QWidget(parent),Uid(Uid),Password(Password),Name(Name),Class(Class),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    setWindowTitle("学生端首页");
}

Student::~Student()
{
    delete ui;
}

void Student::closeEvent(QCloseEvent *event){
    emit Logout();
    qDebug()<<"Logout信号已发出";
}
