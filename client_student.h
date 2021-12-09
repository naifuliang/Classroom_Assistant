// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/9

#ifndef Client_Student_STUDENT_H
#define Client_Student_STUDENT_H

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

    void student_register(QByteArray username, QByteArray password);
    void student_login(QByteArray username, QByteArray password);
    void student_logout(QByteArray username);

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

#endif // Client_Student_STUDENT_H
