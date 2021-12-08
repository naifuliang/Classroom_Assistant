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

private:
    Ui::Student_MainWindow *ui;
};

#endif // STUDENT_MAINWINDOW_H
