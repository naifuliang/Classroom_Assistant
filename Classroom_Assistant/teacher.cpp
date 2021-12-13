#include "teacher.h"
#include "ui_teacher.h"
#include<qdebug.h>

Teacher::Teacher(const int &Uid,const QString &Password,const QString &Name,QWidget *parent) :
    QWidget(parent),Uid(Uid),Password(Password),Name(Name),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    resize(600,400);
    setWindowTitle("教师端首页");
    ui->NameLabel->setText(Name);
    ui->UidLabel->setText(QString::number(Uid));
}
Teacher::~Teacher()
{
    delete ui;
    delete manage_class;
    delete manage_paper;
}

void Teacher::closeEvent(QCloseEvent *event){
    emit Logout();
    qDebug()<<"Logout信号已发出";
}

void Teacher::on_LogoutButton_clicked()
{
    this->close();
}

void Teacher::on_classBtn_clicked()
{
    manage_class = new ManagaClass(Name,Uid);
    manage_class->show();
}

void Teacher::on_paperBtn_clicked()
{
    manage_paper = new Manage_paper(Name);
    manage_paper->show();
}
