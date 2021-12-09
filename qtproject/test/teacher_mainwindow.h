#ifndef TEACHER_MAINWINDOW_H
#define TEACHER_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class Teacher_MainWindow;
}

class Teacher_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Teacher_MainWindow(QWidget *parent = nullptr);
    ~Teacher_MainWindow();

private:
    Ui::Teacher_MainWindow *ui;
};

#endif // TEACHER_MAINWINDOW_H
