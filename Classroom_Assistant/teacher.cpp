#include "teacher.h"
#include "ui_teacher.h"
#include<qdebug.h>

Teacher::Teacher(const int &Uid,const QString &Password,const QString &Name,const QString &Class,QWidget *parent) :
    QWidget(parent),Uid(Uid),Password(Password),Name(Name),Class(Class),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    setWindowTitle("教师端首页");
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::closeEvent(QCloseEvent *event){
    emit Logout();
    qDebug()<<"Logout信号已发出";
}
