#include "serverside.h"

serverside::serverside(QObject *parent)
    : QObject{parent}
{
    server = new MyTcpServer(this);
    server->listen(QHostAddress::Any,12021);
    connect(server,&MyTcpServer::newDescriptor,this,&serverside::newconnectionslot);
    //系统主函数自动开始阻塞，直到用户输入exit
}

void serverside::newconnectionslot(qintptr sock)
{
//    QTcpSocket* tcp = server->nextPendingConnection();
    //获取当前新建连接的套接字
    QThread* thread = new QThread;
    //分配新的线程
    serverconnection* connection = new serverconnection(thread,sock);
    //将套接字和线程信息传入负责处理信息的类
    connection->moveToThread(thread);
    //将工作类移入子线程
    thread->start();
    //子线程开始运行
    connect(connection,&serverconnection::stop,this,&serverside::stop);
    //关联停止信号，便于释放资源
    connect(connection,&serverconnection::distroy,this,&serverside::distroy);
    //关联线程销毁信号
    connect(connection,&serverconnection::removeDB,this,&serverside::removeDB);
    //关联数据库删除信号
//    qDebug()<<"A new connection prosessed\n";
}

void serverside::stop(serverconnection* connection)
{
    disconnect(connection,&serverconnection::stop,this,&serverside::stop);
    connection->deleteLater();
//    qDebug()<<"stop\n";
}

void serverside::distroy(serverconnection* connection,QThread *thread)
{
    disconnect(connection,&serverconnection::distroy,this,&serverside::distroy);
    thread->exit();
    thread->wait();
    thread->deleteLater();
    //    qDebug()<<"distroy\n";
}

void serverside::removeDB(serverconnection* connection,QString DBconnectionname)
{
    connect(connection,&serverconnection::removeDB,this,&serverside::removeDB);
    QSqlDatabase::removeDatabase(DBconnectionname);
//    qDebug()<<"rm";
}
