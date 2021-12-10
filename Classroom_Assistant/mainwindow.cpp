#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("欢迎");
    welcome = new Welcome(this);
    welcome->show();
    resize(800,600);
    ls = new Login_student(this);
    lt = new Login_teacher(this);
    cr = new ChooseRole(this);
    student = new Student(this);
    student->hide();
    teacher = new Teacher(this);
    teacher->hide();
    connect(welcome, &Welcome::login_register, this, &MainWindow::login_register);
    connect(this, &MainWindow::login_register, this, &MainWindow::login_register_slot);
    connect(ls, &Login_student::log_in_succeed, this, &MainWindow::build_student);
    connect(lt, &Login_teacher::log_in_succeed, this, &MainWindow::build_teacher);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::build_student(int ui,QString pss,QString nam)
{
    Student *student = new Student(this);
    student->setattribute(ui,pss,nam);
    setWindowTitle("微助教学生端");
    welcome->fixhide();
    welcome->close();
    student->show();
    welcome->show();
}

void MainWindow::build_teacher(int ui,QString pss,QString nam)
{
    Teacher *teacher = new Teacher(this);
    teacher->setattribute(ui,pss,nam);
    setWindowTitle("微助教教师端");
    welcome->close();
    student->show();
    welcome->show();
}

void MainWindow::login_register_slot()
{
    int res_cr = cr->exec();
    if(res_cr == 1) ls->exec();
    else if(res_cr == 0) lt->exec();
}
