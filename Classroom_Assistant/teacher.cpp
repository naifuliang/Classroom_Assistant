#include "teacher.h"
#include "ui_teacher.h"
#include<qdebug.h>

Teacher::Teacher(const int &Uid,const QString &Password,const QString &Name,const QString &Class,QWidget *parent) :
    QWidget(parent),Uid(Uid),Password(Password),Name(Name),Class(Class),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    setWindowTitle("教师端首页");
    resize(800,600);

    ui->NameLabel->setText(Name);
    ui->UidLabel->setText(QString::number(Uid));

    manageclass = new ManagaClass;
}

Teacher::~Teacher()
{
    delete ui;
    delete manageclass;
}

void Teacher::closeEvent(QCloseEvent *event){
    emit Logout();
    qDebug()<<"Logout信号已发出";
}

void Teacher::on_LogoutButton_clicked()
{
    this->close();
}


void Teacher::on_pushButton_clicked()
{
    manageclass->show();
}

