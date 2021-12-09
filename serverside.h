#ifndef SERVERSIDE_H
#define SERVERSIDE_H

#include <QWidget>
#include <QTcpServer>

namespace Ui {
    class Messenger;
}

class Messenger : public QWidget
{
    Q_OBJECT

public:
    explicit Messenger(QWidget *parent = nullptr);
    ~Messenger();

private slots:
    void openServer();
    void closeServer();
    void sendMsg();

private:
    Ui::Messenger *ui;
    QTcpServer *server;
    QList<QTcpSocket*> client;

private:
    void newconnectionSlot();
    void readDataSlot();
    void disconnectionSlot();
};

#endif // SERVERSIDE_H
