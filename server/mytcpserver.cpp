#include "mytcpserver.h"

MyTcpServer::MyTcpServer(QObject *parent)
    : QTcpServer{parent}
{

}

void MyTcpServer::incomingConnection(qintptr socketDescriptor)
{
    emit newDescriptor(socketDescriptor);
}
