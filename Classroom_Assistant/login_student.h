#ifndef LOGIN_STUDENT_H
#define LOGIN_STUDENT_H

#include <QDialog>
#include "register_student.h"

namespace Ui {
class Login_student;
}

class Login_student : public QDialog
{
    Q_OBJECT

public:
    explicit Login_student(QWidget *parent = nullptr);
    ~Login_student();

public slots:
    void log_in_slot();//学生端处理登录的槽函数
    void Register_slot();//学生端处理注册的槽函数

signals:
    void log_in();//学生端登录信号
    void log_in_succeed(int ui,QString pss,QString nam);//学生端登录成功信号
    void log_in_failed();//学生端登录失败信号
    void Register();//学生端注册信号

private:
    Ui::Login_student *ui;
};

#endif // LOGIN_STUDENT_H
