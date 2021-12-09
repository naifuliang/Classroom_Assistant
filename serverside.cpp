#include "serverside.h"

serverside::serverside(QObject *parent)
    : QObject{parent}
{
    server = new QTcpServer(this);
    server->listen(QHostAddress::Any,12022);
    connect(server,&QTcpServer::newConnection,this,&serverside::newconnectionslot);
    //系统主函数自动开始阻塞，直到用户输入exit
}

void serverside::newconnectionslot()
{
    QTcpSocket* tcp = server->nextPendingConnection();
    //获取当前新建连接的套接字
    QThread* thread = new QThread;
    //分配新的线程
    serverconnection* connection = new serverconnection(thread,tcp);
    //将套接字和线程信息传入负责处理信息的类
    connection->moveToThread(thread);
    //将工作类移入子线程
    thread->start();
    //子线程开始运行
    connect(connection,&serverconnection::stop,this,&serverside::stop);
    //关联停止信号，便于释放资源
    connect(connection,&serverconnection::distroy,this,&serverside::distroy);
    qDebug()<<"A new connection prosessed\n";
}

void serverside::stop(serverconnection* connection)
{
    disconnect(connection,&serverconnection::stop,this,&serverside::stop);
    connection->deleteLater();
    qDebug()<<"stop\n";
}

void serverside::distroy(serverconnection* connection,QThread *thread)
{
    disconnect(connection,&serverconnection::distroy,this,&serverside::distroy);
    thread->exit();
    thread->wait();
    thread->deleteLater();
    qDebug()<<"distroy\n";
}
