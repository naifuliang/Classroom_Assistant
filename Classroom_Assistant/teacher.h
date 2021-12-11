#ifndef TEACHER_H
#define TEACHER_H

#include <QWidget>

namespace Ui {
class Teacher;
}

class Teacher : public QWidget
{
    Q_OBJECT

public:
    explicit Teacher(const int &Uid,const QString &Password,const QString &Name,const QString &Class,QWidget *parent = nullptr);
    ~Teacher();
    void closeEvent(QCloseEvent *event);//关闭事件

signals:
    void Logout();//注销信号

private:
    int Uid;
    QString Password,Name,Class;
    Ui::Teacher *ui;
};

#endif // TEACHER_H
