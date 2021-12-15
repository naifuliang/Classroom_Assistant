#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    tcp = new socket(this);
}

Client::~Client()
{
    if(ui)
    {
        delete ui;
    }
}


void Client::on_student_clicked()
{
//    qDebug()<<"clicked";
    this->close();
    student_login* student = new student_login(this,tcp);
    student->show();
}


void Client::on_teacher_clicked()
{
    this->close();
    teacher_login* teacher = new teacher_login(this,tcp);
    teacher->show();
}

