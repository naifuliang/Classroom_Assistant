#ifndef LOGIN_TEACHER_H
#define LOGIN_TEACHER_H

#include <QDialog>
#include "register_teacher.h"

namespace Ui {
class Login_teacher;
}

class Login_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit Login_teacher(QWidget *parent = nullptr);
    ~Login_teacher();

public slots:
    void log_in_slot();//处理登录的槽函数
    void Register_slot();//处理注册的槽函数

signals:
    void log_in();//登录信号
    void log_in_succeed(QString username);//登录成功信号
    void log_in_failed();//登录失败信号
    void Register();//注册信号

private:
    Ui::Login_teacher *ui;
};

#endif // LOGIN_TEACHER_H
