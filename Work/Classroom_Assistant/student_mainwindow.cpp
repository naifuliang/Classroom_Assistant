#include "student_mainwindow.h"
#include "ui_student_mainwindow.h"
#include <QDebug>

Student_MainWindow::Student_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student_MainWindow)
{
    ui->setupUi(this);
}

Student_MainWindow::~Student_MainWindow()
{
    delete ui;
}

void Student_MainWindow::setusername(QString a)
{
    username = a;
}
