#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>

namespace Ui {
    class Client;
}

class Client : public QWidget
{
    Q_OBJECT
public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

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
