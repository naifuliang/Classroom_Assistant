#include "teacher_mainwindow.h"
#include "ui_teacher_mainwindow.h"

Teacher_MainWindow::Teacher_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher_MainWindow)
{
    ui->setupUi(this);
}

Teacher_MainWindow::~Teacher_MainWindow()
{
    delete ui;
}

void Teacher_MainWindow::setusername(QString a)
{
    username = a;
}
