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
    sm = 0;
    tm = 0;

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
    Student_MainWindow *sm = new Student_MainWindow(nullptr,username);//新建学生主页面
    this->hide();
    sm->show();
    connect(sm,&Student_MainWindow::StuLogout,this,[=](){//返回Mainwindow并释放内存
        this->show();
        delete sm;
        qDebug()<<"sm指针已删除";
    });
}

void MainWindow::build_teacher(QString username)
{
    Teacher_MainWindow *tm = new Teacher_MainWindow;//新建教师主页面
    tm->setusername(username);
    this->hide();
    tm->show();
    connect(tm,&Teacher_MainWindow::TeaLogout,this,[=](){//返回Mainwindow并释放内存
        this->show();
        delete tm;
        qDebug()<<"tm指针已删除";
    });
}

void MainWindow::login_register_slot()
{
    int res_cr = cr->exec();
    if(res_cr == 1) ls->open();
    else if(res_cr == 0) lt->open();
}
