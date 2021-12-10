#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("欢迎");
    ls = new Login_student(this);
    lt = new Login_teacher(this);
    cr = new ChooseRole(this);
    sm = new Student_MainWindow(this);
    tm = new Teacher_MainWindow(this);
    connect(ui->login_registerBtn, &QPushButton::clicked, this, &MainWindow::login_register);
    connect(this, &MainWindow::login_register, this, &MainWindow::login_register_slot);
    connect(ls, &Login_student::log_in_succeed, this, &MainWindow::build_student);
    connect(lt, &Login_teacher::log_in_succeed, this, &MainWindow::build_teacher);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::build_student(QString username)
{
    Student_MainWindow *sm = new Student_MainWindow(this);
    sm->setusername(username);
    //this->hide();
    //不知道为什么hide后就直接关闭程序了
    sm->show();
    this->close();
}

void MainWindow::build_teacher(QString username)
{
    Teacher_MainWindow *tm = new Teacher_MainWindow(this);
    tm->setusername(username);
    //this->hide();
    //不知道为什么hide后就直接关闭程序了
    tm->show();
    this->close();
}

void MainWindow::login_register_slot()
{
    int res_cr = cr->exec();
    if(res_cr == 1) ls->exec();
    else if(res_cr == 0) lt->exec();
}
