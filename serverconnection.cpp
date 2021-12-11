#include "serverconnection.h"


serverconnection::serverconnection(QThread* thread,qintptr sock,QObject *parent)
    : QObject{parent}
{
    this->thread=thread;
    tcp= new QTcpSocket(this);
    tcp->setSocketDescriptor(sock);
    ip=tcp->peerAddress().toString();
    qDebug()<<time.currentDateTime()<<ip<<"Connected to this server.\n";
    connect(tcp,&QTcpSocket::disconnected,this,&serverconnection::quit);
    connect(tcp,&QIODevice::readyRead,this,&serverconnection::action);
}

serverconnection::~serverconnection()
{
    emit distroy(this,this->thread);
    //在释放serverconnect资源的同时析构对应的线程
}

void serverconnection::action()
{
    QByteArray message = tcp->readAll();
    qDebug()<<time.currentDateTime()<<ip<<"recieved:"<<message<<"\n";
    QJsonDocument doc;
//    message="{"act":"login"}";
//    qDebug()<<message<<"\n";
/*
    QJsonObject obj2;
    obj2.insert("act","login");
    obj2.insert("username","nick");
    QJsonDocument doc2(obj2);
    message=doc2.toJson();
    tcp->write(message);
//*/
//    tcp->write(message);
    doc=QJsonDocument::fromJson(message);
//    doc=doc2;
    if(doc.isObject())
    {
        QJsonObject obj=doc.object();
        QString act=obj.value("act").toString();
        qDebug()<<act<<"\n";
        if(act==QString("login"))
        {
            //login
            qDebug()<<time.currentDateTime()<<ip<<"Attempped to login\n";
            login(obj);
        }
    }
    else
    {
        qDebug()<<"UnKnow Request From"<<ip<<"\n";
    }
}

void serverconnection::login(const QJsonObject &obj)
{
    QString type=obj.value("type").toString();
    QString username=obj.value("name").toString();
    QString password=obj.value("password").toString();
    bool success=0;
    if(success)
    {
        this->type=type;
        this->username=username;
    }
    else
    {
        quit();
    }
}
void serverconnection::quit()
{
    qDebug()<<time.currentDateTime()<<ip<<"Connection Lost. The account"<<""<<"has been signed out.";
    emit stop(this);
}
