#include "mainwindow.h"

#include <QApplication>
#include <signin_student.h>
#include <studentclassinfo.h>
#include "quiz_score.h"

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    Quiz_score qs("teacher","student");
    qs.show();
    MainWindow w;
    w.show();
    return a.exec();
}
