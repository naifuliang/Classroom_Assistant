#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("欢迎");
    resize(600,400);
    ls = new Login_student(this);
    lt = new Login_teacher(this);
    cr = new ChooseRole(this);
    connect(ui->login_registerBtn, &QPushButton::clicked, this, &MainWindow::login_register);
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
    student = new Student(ui,pss,nam,"",nullptr);//新建学生主页面
    this->hide();
    student->show();
    connect(student,&Student::Logout,this,[=](){//返回Mainwindow并释放内存
        this->show();
        delete student;
        qDebug()<<"student指针已删除";
    });
}

void MainWindow::build_teacher(int ui, QString pss, QString nam)
{
    teacher = new Teacher(ui,pss,nam,"",nullptr);//新建学生主页面
    this->hide();
    teacher->show();
    connect(teacher,&Teacher::Logout,this,[=](){//返回Mainwindow并释放内存
        this->show();
        delete teacher;
        qDebug()<<"teacher指针已删除";
    });
}

void MainWindow::login_register_slot()
{
    int res_cr = cr->exec();
    if(res_cr == 1) ls->open();
    else if(res_cr == 0) lt->open();
}
