#include "mainwindow.h"

#include <QApplication>
#include <signin_student.h>
#include <studentclassinfo.h>

//将删除操作交给mainwindow,防止内存泄露
QWidget *mainwindowptr;

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;
    mainwindowptr = &w;
    w.show();
    return a.exec();
}
