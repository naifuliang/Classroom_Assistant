#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>

class MyTcpServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);

signals:
    void newDescriptor(qintptr sock);

protected:
    virtual void incomingConnection(qintptr socketDescriptor);
};
#endif // MYTCPSERVER_H
