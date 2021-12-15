// 服务器主逻辑的实现
#ifndef SERVERSIDE_H
#define SERVERSIDE_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtDebug>
#include <QThread>
#include <string>

#include "serverconnection.h"
#include "mytcpserver.h"

class serverside : public QObject
{
    Q_OBJECT
public:
    explicit serverside(QObject *parent = nullptr);
    ~serverside(){}
public slots:
    void newconnectionslot(qintptr sock);
    void stop(serverconnection* connection);
    void distroy(serverconnection* connection,QThread* thread);
    void removeDB(serverconnection* connection,QString DBconnectionname);
signals:
private:
    MyTcpServer* server;

};

#endif // SERVERSIDE_H
