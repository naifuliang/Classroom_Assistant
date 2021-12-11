#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QtDebug>
#include <QDateTime>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

/*
namespace action_type
{
    const QString command_login="login",
                  command_logout="logout",
                  command_register="register";
}
//*/

class serverconnection : public QObject
{
    Q_OBJECT
public:
    explicit serverconnection(QThread* thread,qintptr sock,QObject *parent = nullptr);
    ~serverconnection();
    void quit();
public slots:
    void action();
signals:
    void distroy(serverconnection* connection,QThread* thread);
    void stop(serverconnection* connection);
    void login(const QJsonObject &obj);
private:
    QTcpSocket* tcp;
    QThread *thread;
    QDateTime time;
    QString ip;
    QString username;
    QString type;
};

#endif // SERVERCONNECTION_H
