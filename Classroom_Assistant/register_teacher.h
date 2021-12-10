#ifndef REGISTER_TEACHER_H
#define REGISTER_TEACHER_H

#include <QDialog>

namespace Ui {
class Register_Teacher;
}

class Register_Teacher : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Teacher(QWidget *parent = nullptr);
    ~Register_Teacher();

public slots:
    void Register_slot();//教师端注册槽函数
    void password_fault_slot();//教师端两次输入的密码不匹配槽函数

signals:
    void Register();//教师端注册信号
    void password_fault();//教师端两次输入的密码不匹配信号

private:
    Ui::Register_Teacher *ui;
};

#endif // REGISTER_TEACHER_H
