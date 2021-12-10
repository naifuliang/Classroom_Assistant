#ifndef REGISTER_STUDENT_H
#define REGISTER_STUDENT_H

#include <QDialog>

namespace Ui {
class Register_Student;
}

class Register_Student : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Student(QWidget *parent = nullptr);
    ~Register_Student();

public slots:
    void Register_slot();//学生端注册槽函数
    void password_fault_slot();//学生端两次输入的密码不匹配槽函数

signals:
    void Register();//注册信号
    void password_fault();//两次输入的密码不匹配信号

private:
    Ui::Register_Student *ui;
};

#endif // REGISTER_STUDENT_H
