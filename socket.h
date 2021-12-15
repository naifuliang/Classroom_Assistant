#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include <QTcpSocket>

class socket : public QObject
{
    Q_OBJECT
public:
    explicit socket(QObject *parent = nullptr);
    QByteArray request(QByteArray send);

signals:

private:
    QTcpSocket *tcp;
    const QString host="::1";
    const int port=12021;
};

#endif // SOCKET_H
