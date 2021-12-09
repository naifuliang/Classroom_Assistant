#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    client = new QTcpSocket(this);

    connect(client, &QTcpSocket::connected, this, &Client::connectSuccessSlot);
    connect(client, &QTcpSocket::disconnected, this, &Client::disconnectSlot);
    connect(client, &QTcpSocket::readyRead, this, &Client::newDataSlot);

    return;
}

Client::~Client()
{
    delete ui;

    return;
}

void Client::connectSuccessSlot()
{
    qDebug() << "Successfully connected to the server!";

    return;
}

void Client::disconnectSlot()
{
    qDebug() << "Disconnected from server!";

    return;
}

void Client::newDataSlot()
{
    QByteArray _data;

    _data = client->readAll();
    qDebug() << _data;

    return;
}

void Client::_connect(QString _ip, quint16 _port)
{
    client->connectToHost(_ip, _port);

    return;
}

void Client::_disconnect()
{
    client->disconnectFromHost();

    return;
}

void Client::_send(QByteArray text)
{
    client->write(text);

    return;
}
