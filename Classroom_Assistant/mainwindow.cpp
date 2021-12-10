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
    connect(welcome, &Welcome::login_register, this, &MainWindow::login_register);
    student = 0;
    teacher = 0;
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
    setWindowTitle("微助教学生端");
    welcome->fixhide();
    welcome->close();
    student = new Student(ui,pss,nam,"",this);//新建学生主页面
    student->show();
    welcome->show();

}

void MainWindow::build_teacher(int ui,QString pss,QString nam)
{
    setWindowTitle("微助教教师端");
    welcome->fixhide();
    welcome->close();
    teacher = new Teacher(ui,pss,nam,"",this);//新建教师主页面
    teacher->show();
    welcome->show();
}

void MainWindow::login_register_slot()
{
    int res_cr = cr->exec();
    if(res_cr == 1) ls->open();
    else if(res_cr == 0) lt->open();
}
