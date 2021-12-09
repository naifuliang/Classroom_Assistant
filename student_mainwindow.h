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
    explicit Student_MainWindow(QWidget *parent = nullptr);
    ~Student_MainWindow();
    void setusername(QString a);

private:
    Ui::Student_MainWindow *ui;
    QString username;//用户名
};

#endif // STUDENT_MAINWINDOW_H
