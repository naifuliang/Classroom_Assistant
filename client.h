// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/9

#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QCryptographicHash>
#include "login_student.h"
#include "login_teacher.h"

namespace Ui {
    class Client;
}

class Client : public QWidget
{
    Q_OBJECT
public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

    void student_register(QByteArray username, QByteArray password);
    void teacher_register(QByteArray username, QByteArray password);
    void student_login(QByteArray username, QByteArray password);
    void teacher_login(QByteArray username, QByteArray password);

signals:
    void _connect(QString _ip, quint16 _port);
    void _disconnect();
    void _send(QByteArray text);

private slots:
    void connectSuccessSlot();
    void disconnectSlot();
    void newDataSlot();

private:
    Ui::Client *ui;
    QTcpSocket *client;

};

#endif // CLIENT_H
