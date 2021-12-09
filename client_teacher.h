// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/9

#ifndef Client_Teacher_H
#define Client_Teacher_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QCryptographicHash>
#include <QPair>
#include "login_teacher.h"

namespace Ui {
    class Client_Teacher;
}

class Client_Teacher : public QWidget
{
    Q_OBJECT
public:
    explicit Client_Teacher(QWidget *parent = nullptr);
    ~Client_Teacher();

    void teacher_register(QByteArray username, QByteArray password);
    void teacher_login(QByteArray username, QByteArray password);
    void teacher_logout(QByteArray username);
    void getcourselist();
    void getstudentlist(quint32 courseid);

signals:
    void _connect(QString _ip, quint16 _port);
    void _disconnect();
    void _send(QByteArray text);

private slots:
    void connectSuccessSlot();
    void disconnectSlot();
    void newDataSlot();

private:
    Ui::Client_Teacher *ui;
    QTcpSocket *client;
    QString username;

};

#endif // Client_Teacher_H
