#ifndef SIGNIN_STUDENT_H
#define SIGNIN_STUDENT_H

#include <QDialog>
#include <QMessageBox>
//“xxx课程发布签到信息” “请输入签到码”，按钮“取消”“确定”，
//点击确定后，若错误提示“签到码错误”，若正确则显示“签到成功”。

namespace Ui {
class Signin_student;
}

class Signin_student : public QDialog
{
    Q_OBJECT

public:
    explicit Signin_student(QString cn,QWidget *parent = nullptr);
    ~Signin_student();

public slots:
    void quickly_signin(QString sign_in_signal);//接收服务器端传来的签到码
    void to_signin();//处理签到动作

signals:
    void sign_in_done();//签到成功信号

private:
    QString sis;//正确的签到码
    QString classname;
    Ui::Signin_student *ui;
};

#endif // SIGNIN_STUDENT_H
