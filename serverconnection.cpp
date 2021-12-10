#include "serverconnection.h"

serverconnection::serverconnection(QThread* thread,QTcpSocket* tcp,QObject *parent)
    : QObject{parent}
{
    this->thread=thread;
    this->tcp=tcp;
    qDebug()<<"init OK\n";
    connect(tcp,&QTcpSocket::disconnected,this,&serverconnection::quit);
}

serverconnection::~serverconnection()
{
    emit distroy(this,this->thread);
    //在释放serverconnect资源的同时析构对应的线程
}

void serverconnection::quit()
{
    qDebug()<<time.currentDateTime()<<"A Connection Lost\n";
    emit stop(this);
}
