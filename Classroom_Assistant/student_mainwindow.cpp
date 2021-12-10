#include "student_mainwindow.h"
#include "ui_student_mainwindow.h"
#include <QDebug>

Student_MainWindow::Student_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student_MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("微助教学生端");
    connect(ui->logoutBtn, &QPushButton::clicked, this, &Student_MainWindow::logout);
    connect(this, &Student_MainWindow::logout, this, &Student_MainWindow::logout_slot);
}

Student_MainWindow::~Student_MainWindow()
{
    delete ui;
}

void Student_MainWindow::setusername(QString a)
{
    username = a;
}

void Student_MainWindow::logout_slot()
{

}
