// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/15

#ifndef CLIENT_STUDENT_H
#define CLIENT_STUDENT_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QCryptographicHash>
#include <QPair>
#include "login_student.h"

class Client_Student : public QWidget
{
    Q_OBJECT
public:
    explicit Client_Student(QWidget *parent = nullptr);
    ~Client_Student();

    QByteArray student_register(QString username, QString password);
    QByteArray student_login(QString username, QString password);
//    void student_logout(QByteArray username);
    QByteArray getclass();
    QByteArray attendclass(quint32 classid);
    QByteArray showpaperlist(quint32 classid);
    QByteArray getpaper(quint32 paperid);
    QByteArray submit(quint32 paperid, quint32 score);
    QByteArray getscore(quint32 paperid);

signals:
    void _connect(QString _ip, quint16 _port);
    void _disconnect();
    void _send(QByteArray text);

private slots:
    void connectSuccessSlot();
    void disconnectSlot();
    void newDataSlot();

private:
    QTcpSocket *client;

};

#endif // CLIENT_STUDENT_H
