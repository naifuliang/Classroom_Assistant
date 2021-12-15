// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/15

#ifndef CLIENT_TEACHER_H
#define CLIENT_TEACHER_H

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

    QByteArray teacher_register(QString username, QString password);
    QByteArray teacher_login(QString username, QString password);
//    void teacher_logout(QByteArray username);
    QByteArray getclasslist();
    QByteArray addclass(QString classname);
    QByteArray addpaper(quint32 classid, QString papername, QString papercontent);
    QByteArray showpaperlist(quint32 classid);
    QByteArray getpaper(quint32 paperid);
    QByteArray getscore(quint32 paperid);
//    void getstudentlist(quint32 courseid);
//    void getsigncode();
//    void sendquiz(QStringList problemlist, quint32 timelimit);
//    void randompick(quint32 courseid);

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

#endif // CLIENT_TEACHER_H
