// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/9

#include "client_student.h"

Client_Student::Client_Student(QWidget *parent) :
    QWidget(parent)
{
    client = new QTcpSocket(this);

    connect(client, &QTcpSocket::connected, this, &Client_Student::connectSuccessSlot);
    connect(client, &QTcpSocket::disconnected, this, &Client_Student::disconnectSlot);
    connect(client, &QTcpSocket::readyRead, this, &Client_Student::newDataSlot);

    return;
}

Client_Student::~Client_Student()
{
    return;
}

void Client_Student::connectSuccessSlot()
{
    qDebug() << "Successfully connected to the server!";

    return;
}

void Client_Student::disconnectSlot()
{
    qDebug() << "Disconnected from server!";

    return;
}

void Client_Student::newDataSlot()
{
    QByteArray json;
    QJsonDocument doc;
    QJsonObject obj, content;
    QStringList keys;
    QString action, type, name, error;
    bool is_successful;

    json = client->readAll();
    doc = QJsonDocument::fromJson(json);

    if(doc.isObject())
    {
        obj = doc.object();
        keys = obj.keys();

        action = obj.value("act").toString();
        content = obj.value("content").toObject();
        is_successful = obj.value("is_successful").toBool();
        type = obj.value("type").toString();
        name = obj.value("name").toString();
        error = obj.value("error").toString();
        if(action == "register")
        {
            if(is_successful)
                ; // successfully registered
            else
                ; // username existed
        }
        if(action == "login")
        {
            if(is_successful)
                ; // successfully logined
            else
            {
                if(error == "username_not_existed")
                    ; // username not existed
                if(error == "password_incorrect")
                    ; // password incorrect
                if(error == "already_online")
                    ; // already online
            }
        }
    }

    return;
}

void Client_Student::_connect(QString _ip, quint16 _port)
{
    client->connectToHost(_ip, _port);

    return;
}

void Client_Student::_disconnect()
{
    client->disconnectFromHost();

    return;
}

void Client_Student::_send(QByteArray text)
{
    client->write(text);

    return;
}

// When a teacher or a student attempts to register or login or logout their account,
// the JSON format from client to server should be as follows.

/*
 * [
 *     {
 *         "act" : "register" or "login" or logout
 *         "content" :
 *         [
 *             {
 *                 "type" : "student"
 *                 "name" :
 *                 "password" : (if act != "logout")
 *             }
 *         ]
 *     }
 * ]
 */

// Meanwhile, the resulting JSON from server to client should be as follows.
// For a logout action, resulting information is NOT necessary.

/*
 * [
 *     {
 *         "act" : "register" or "login"
 *         "content" :
 *         [
 *             {
 *                 "is_successful" : true or false
 *                 "name" :
 *                 "error" :
 *                     "" (if successful) or
 *                     "username_existed" (for register) or
 *                     "username_not_existed" (for login) or
 *                     "password_incorrect" (for login) or
 *                     "already_online" (for login)
 *             }
 *         ]
 *     }
 * ]
*/

void Client_Student::student_register(QByteArray username, QByteArray password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    hashPassword = QCryptographicHash::hash(password, QCryptographicHash::Md5);

    subobj.insert("type", "student");
    subobj.insert("name", QString(username));
    subobj.insert("password", QString(hashPassword));

    obj.insert("act", "register");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

void Client_Student::student_login(QByteArray username, QByteArray password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    hashPassword = QCryptographicHash::hash(password, QCryptographicHash::Md5);

    subobj.insert("type", "student");
    subobj.insert("name", QString(username));
    subobj.insert("password", QString(hashPassword));

    obj.insert("act", "login");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

void Client_Student::student_logout(QByteArray username)
{
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    subobj.insert("type", "student");
    subobj.insert("name", QString(username));

    obj.insert("act", "logout");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}
