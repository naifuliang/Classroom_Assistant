// 服务器主逻辑的实现
#ifndef SERVERSIDE_H
#define SERVERSIDE_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtDebug>
#include <QThread>

#include <serverconnection.h>

class serverside : public QObject
{
    Q_OBJECT
public:
    explicit serverside(QObject *parent = nullptr);
    void newconnectionslot();
    void stop(serverconnection* connection);
    void distroy(serverconnection* connection,QThread* thread);
signals:
private:
    QTcpServer* server;

};

#endif // SERVERSIDE_H
