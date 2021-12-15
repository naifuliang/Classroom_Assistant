#include "serverside.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    serverside server;
    //实例化一个服务器
//    server.wait();
    return a.exec();
}
