#ifndef STUDENT_MAINWINDOW_H
#define STUDENT_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class Student_MainWindow;
}

class Student_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Student_MainWindow(QWidget *parent = nullptr,const QString &sid = 0);
    ~Student_MainWindow();
    void closeEvent(QCloseEvent *event);//关闭事件

signals:
    void StuLogout();//注销信号

private slots:
    void on_LogoutButton_clicked();

private:
    Ui::Student_MainWindow *ui;
    QString sid;//学号
};

#endif // STUDENT_MAINWINDOW_H
