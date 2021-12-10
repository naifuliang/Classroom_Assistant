#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>

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

private:
    Ui::Student *ui;
    int Sid;
    QString Password,Name,Class;
};

#endif // STUDENT_H
