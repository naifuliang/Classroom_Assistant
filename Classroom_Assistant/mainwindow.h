#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <chooserole.h>
#include "login_student.h"
#include "login_teacher.h"
#include "student_mainwindow.h"
#include "teacher_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void build_student(QString username);//建立学生端主窗口
    void build_teacher(QString username);//建立教师端主窗口

public slots:
    void login_register_slot();//开始登录注册槽函数

signals:
    void login_register();//开始登录注册信号

private:
    Ui::MainWindow *ui;
    ChooseRole *cr;//选择身份的窗口
    Login_student *ls;//学生端登录窗口
    Login_teacher *lt;//教师端登录窗口
    Student_MainWindow *sm;//学生端主窗口
    Teacher_MainWindow *tm;//教师端主窗口

};
#endif // MAINWINDOW_H
