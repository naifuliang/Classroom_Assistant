#include "login.h"

#include <QApplication>
#include "mysql.h"
#include <cstdio>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysql d;
    Login w;
    w.show();
    return a.exec();
}
