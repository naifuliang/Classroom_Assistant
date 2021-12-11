#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonValue>
#include<QJsonObject>
#include "enterclass.h"

//（客户端）显示首页界面，包括数据显示 “学生姓名”“学号”；
//功能按钮“退出登录”“进入课堂”“成绩查询”

namespace Ui {
class Student;
}

class Student : public QWidget
{
    Q_OBJECT

public:
    explicit Student(const int &Sid,const QString &Password,const QString& Name,const QString &Class,QWidget *parent = nullptr);
    ~Student();
    void closeEvent(QCloseEvent *event);//关闭事件

signals:
    void Logout();//注销信号

private slots:
    void on_LogoutButton_clicked();

    void on_EnterClassButton_clicked();

private:
    Ui::Student *ui;
    int Sid;
    QString Password,Name,Class;

    EnterClass* enterclass;
};

#endif // STUDENT_H
