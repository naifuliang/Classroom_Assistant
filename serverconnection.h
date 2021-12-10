#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QtDebug>
#include <QDateTime>

class serverconnection : public QObject
{
    Q_OBJECT
public:
    explicit serverconnection(QThread* thread,QTcpSocket* tcp,QObject *parent = nullptr);
    ~serverconnection();
    void quit();
signals:
    void distroy(serverconnection* connection,QThread* thread);
    void stop(serverconnection* connection);
private:
    QTcpSocket* tcp;
    QThread *thread;
    QDateTime time;
};

#endif // SERVERCONNECTION_H
