#include "socket.h"

socket::socket(QObject *parent)
    : QObject{parent}
{
    tcp = new QTcpSocket(this);
    tcp->connectToHost(host,port);
}

QByteArray socket::request(QByteArray send)
{
    tcp->write(send);
    tcp->waitForReadyRead();
    return tcp->readAll();
}
