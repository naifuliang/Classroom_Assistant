#include "serverconnection.h"


serverconnection::serverconnection(QThread* thread,qintptr sock,QObject *parent)
    : QObject{parent}
{
    this->thread=thread;
    tcp = new QTcpSocket(this);
    tcp->setSocketDescriptor(sock);
    ip=tcp->peerAddress().toString();
    qDebug()<<time.currentDateTime().toString()<<ip<<"Connected to this server.\n";
    connect(tcp,&QTcpSocket::disconnected,this,&serverconnection::quit);
    connect(tcp,&QIODevice::readyRead,this,&serverconnection::action);
    db =  new DB_Management(this);
}

serverconnection::~serverconnection()
{
    emit distroy(this,this->thread);
    //在释放serverconnect资源的同时析构对应的线程
}

void serverconnection::action()
{
    QByteArray message = tcp->readAll();
    qDebug()<<time.currentDateTime().toString()<<ip<<"recieved:"<<message<<"\n";
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
            qDebug()<<time.currentDateTime().toString()<<ip<<"Attempped to login\n";
            login(obj);
        }
        if(act==QString("register"))
        {
            //register
            qDebug()<<time.currentDateTime().toString()<<ip<<"Attempped to register\n";
            reg(obj);
        }
        if(act=="attend")
        {
            //学生加入课堂
            attend(obj);
        }
        if(act=="newclass")
        {
            //老师创建课堂
            newclass(obj);
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
    QString username=obj.value("username").toString();
    QString password=obj.value("password").toString();
    //process login
    if(db->login(type,username,password))
    {
        this->type=type;
        this->username=username;
        QJsonObject send_obj;
        send_obj.insert("act","login");
        send_obj.insert("is_successful",true);
        QJsonDocument send_json(send_obj);
        tcp->write(send_json.toJson());
        qDebug()<<time.currentDateTime().toString()<<ip<<" "<<this->username<<"login successfully";
    }
    else
    {
        QJsonObject send_obj;
        send_obj.insert("act","login");
        send_obj.insert("is_successful",false);
        QJsonDocument send_json(send_obj);
        tcp->write(send_json.toJson());
        qDebug()<<time.currentDateTime().toString()<<ip<<" "<<this->username<<"login failed";
        quit();
    }
}

void serverconnection::reg(const QJsonObject &obj)
{
    QString type=obj.value("type").toString();
    QString username=obj.value("username").toString();
    QString password=obj.value("password").toString();
    QJsonObject send_obj;
    if(type==QString("student"))
    {
        //
        if(/*succeess*/db->reg(type,username,password))
        {
            qDebug()<<username<<"has been registered as a student\n";
            send_obj.insert("act","register");
            send_obj.insert("is_successful",true);
            QJsonDocument send_doc(send_obj);
            tcp->write(send_doc.toJson());
        }
        else
        {
            qDebug()<<"Illegal Registation.";
            send_obj.insert("act","register");
            send_obj.insert("is_successful",false);
            QJsonDocument send_doc(send_obj);
            tcp->write(send_doc.toJson());
        }

    }
    if(type==QString("teacher"))
    {
        //
//        quit();
        if(db->reg(type,username,password))
        {
            qDebug()<<username<<"has been register as a teacher\n";
            send_obj.insert("act","register");
            send_obj.insert("is_successful",true);
            QJsonDocument send_doc(send_obj);
            tcp->write(send_doc.toJson());
        }
        else
        {
            send_obj.insert("act","register");
            send_obj.insert("is_successful",false);
            QJsonDocument send_doc(send_obj);
            tcp->write(send_doc.toJson());
        }

    }
    quit();
}

void serverconnection::attend(const QJsonObject &obj)
{
    QString classid=obj.value("classid").toString();
    //调用数据库操作方法
    if(/*succeess*/1)
    {
        QJsonObject send_obj;
        send_obj.insert("act","attend");
        send_obj.insert("is_successful",true);
        QJsonDocument send_doc(send_obj);
        tcp->write(send_doc.toJson());
    }
    else
    {
        QJsonObject send_obj;
        send_obj.insert("act","attend");
        send_obj.insert("is_successful",false);
        QJsonDocument send_doc(send_obj);
        tcp->write(send_doc.toJson());
    }
}

void serverconnection::newclass(const QJsonObject &obj)
{

}

void serverconnection::quit()
{
    qDebug()<<time.currentDateTime().toString()<<ip<<"Disconnected. The account"<<username<<"has been signed out.";
    emit stop(this);
}
