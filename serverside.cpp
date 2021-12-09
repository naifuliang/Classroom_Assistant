// Author : Kaibin Lu (2021300004066)
// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/9

#include "serverside.h"
#include "ui_serverside.h"
#include <QTcpSocket>
#include <QString>

Messenger::Messenger(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Messenger)
{
    server = new QTcpServer();

    // New connection processing
    connect(server, &QTcpServer::newConnection, this, &Messenger::newconnectionSlot);

    return;
}

void Messenger::newconnectionSlot()
{
    QTcpSocket *_socket;
    QString _ip;
    quint16 _port;

    _socket = server->nextPendingConnection();

    // Store the successfully connected socket in the Qlist
    client.append(_socket);

    _ip = _socket->peerAddress().toString();
    _port = _socket->peerPort();
    qDebug() << QString("[%1:%2] The client is connected successfully!").arg(_ip).arg(_port);

    // Bind the slot function for incoming message signals of each socket
        // Incoming message signal
    connect(_socket, &QTcpSocket::readyRead, this, &Messenger::readDataSlot);
        // Disconnection signal
    connect(_socket, &QTcpSocket::disconnected, this, &Messenger::disconnectionSlot);

    return;
}

void Messenger::readDataSlot()
{
    int i;
    QString _ip;
    quint16 _port;

    // Since I don’t know which socket it corresponds to,
    // I traverse each socket and display it when it finds data.

    for(i = 0; i < client.size(); i ++)
    {
        QByteArray _buff = client[i]->readAll();
        if(_buff.isNull())
            continue;
        _ip = client[i]->peerAddress().toString();
        _port = client[i]->peerPort();
        qDebug() << QString("[%s1,%s2]").arg(_ip).arg(_port);
        qDebug() << QString(_buff);
    }

    return;
}

void Messenger::openServer()
{
    server->listen();
}
