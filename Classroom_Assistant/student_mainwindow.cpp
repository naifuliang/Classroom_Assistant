#include "student_mainwindow.h"
#include "ui_student_mainwindow.h"
#include <QDebug>

Student_MainWindow::Student_MainWindow(QWidget *parent,const QString &sid) :
    QMainWindow(parent),
    ui(new Ui::Student_MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("微助教学生端");

    ui->StuName->setText("");
    ui->sid->setText(sid);
}

Student_MainWindow::~Student_MainWindow()
{
    delete ui;
}


void Student_MainWindow::closeEvent(QCloseEvent *event){
    emit StuLogout();
    qDebug()<<"注销信号已发送";
}

void Student_MainWindow::on_LogoutButton_clicked()
{
    this->close();
}

