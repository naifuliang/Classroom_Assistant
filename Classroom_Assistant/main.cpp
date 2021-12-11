#include "mainwindow.h"

#include <QApplication>
#include <signin_student.h>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    Signin_student ss("这是一个测试");//这是一个测试
    ss.exec();
    MainWindow w;
    w.show();
    return a.exec();
}
