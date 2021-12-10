// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/10

#include "client_teacher.h"

Client_Teacher::Client_Teacher(QWidget *parent) :
    QWidget(parent)
{
    client = new QTcpSocket(this);

    connect(client, &QTcpSocket::connected, this, &Client_Teacher::connectSuccessSlot);
    connect(client, &QTcpSocket::disconnected, this, &Client_Teacher::disconnectSlot);
    connect(client, &QTcpSocket::readyRead, this, &Client_Teacher::newDataSlot);

    return;
}

Client_Teacher::~Client_Teacher()
{
    return;
}

void Client_Teacher::connectSuccessSlot()
{
    qDebug() << "Successfully connected to the server!";

    return;
}

void Client_Teacher::disconnectSlot()
{
    qDebug() << "Disconnected from server!";

    return;
}

void Client_Teacher::newDataSlot()
{
    QByteArray json;
    QJsonDocument doc;
    QJsonObject obj, content;
    QJsonArray courselist, studentlist;
    QList<quint32> courseidlist, studentidlist;
    QStringList coursenamelist, studentnamelist;
    QString action, type, name, error;
    bool is_successful;

    json = client->readAll();
    doc = QJsonDocument::fromJson(json);

    if(doc.isObject())
    {
        obj = doc.object();

        action = obj.value("act").toString();
        content = obj.value("content").toObject();
        is_successful = content.value("is_successful").toBool();
        type = content.value("type").toString();
        name = content.value("name").toString();
        error = content.value("error").toString();
        if(action == "register")
        {
            if(is_successful)
                username = name; // successfully registered
            else
                ; // username existed
        }
        if(action == "login")
        {
            if(is_successful)
                username = name; // successfully logined
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
        if(action == "query_course")
        {
            courselist = content.value("courseidlist").toArray();
            for(int i = 0; i < courselist.size(); i ++)
                courseidlist.append(courselist[i].toInt());
            courselist = content.value("coursenamelist").toArray();
            for(int i = 0; i < courselist.size(); i ++)
                coursenamelist.append(courselist[i].toString());
            // return to teacher client
        }
        if(action == "query_student")
        {
            studentlist = content.value("studentidlist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentidlist.append(studentlist[i].toInt());
            studentlist = content.value("studentnamelist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentnamelist.append(studentlist[i].toString());
            // return to teacher client
        }
    }

    return;
}

void Client_Teacher::_connect(QString _ip, quint16 _port)
{
    client->connectToHost(_ip, _port);

    return;
}

void Client_Teacher::_disconnect()
{
    client->disconnectFromHost();

    return;
}

void Client_Teacher::_send(QByteArray text)
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
 *                 "type" : "teacher"
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

void Client_Teacher::teacher_register(QByteArray username, QByteArray password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    hashPassword = QCryptographicHash::hash(password, QCryptographicHash::Md5);

    subobj.insert("type", "teacher");
    subobj.insert("name", QString(username));
    subobj.insert("password", QString(hashPassword));

    obj.insert("act", "register");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

void Client_Teacher::teacher_login(QByteArray username, QByteArray password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    hashPassword = QCryptographicHash::hash(password, QCryptographicHash::Md5);

    subobj.insert("type", "teacher");
    subobj.insert("name", QString(username));
    subobj.insert("password", QString(hashPassword));

    obj.insert("act", "login");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

void Client_Teacher::teacher_logout(QByteArray username)
{
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    subobj.insert("type", "teacher");
    subobj.insert("name", QString(username));

    obj.insert("act", "logout");
    obj.insert("content", obj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

// When asking for the course list

/*
 * Teacher client to Server
 *
 * [
 *     {
 *         act : "query_course"
 *         content :
 *         [
 *             {
 *                 type : "teacher"
 *                 username :
 *             }
 *         ]
 *     }
 * ]
 *
 */

/*
 * Server to Teacher client
 *
 * [
 *     {
 *         act : "query_course"
 *         content :
 *         [
 *             {
 *                 courseidlist : (QJsonArray)
 *                 coursenamelist : (QJsonArray)
 *             }
 *         ]
 *     }
 * ]
 *
 */

void Client_Teacher::getcourselist()
{
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    subobj.insert("type", "teacher");
    subobj.insert("username", username);

    obj.insert("act", "query_course");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}

// When asking for the student list

/*
 * Teacher client to Server
 *
 * [
 *     {
 *         act : "query_student"
 *         content :
 *         [
 *             {
 *                 username :
 *                 courseid :
 *             }
 *         ]
 *     }
 * ]
 *
 */

/*
 * Server to Teacher client
 *
 * [
 *     {
 *         act : "query_student"
 *         content :
 *         [
 *             {
 *                 studentidlist : (QJsonArray)
 *                 studentnamelist : (QJsonArray)
 *             }
 *         ]
 *     }
 * ]
 *
 */

void Client_Teacher::getstudentlist(quint32 courseid)
{
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    subobj.insert("username", username);
    subobj.insert("courseid", QString::number(courseid));

    obj.insert("act", "query_student");
    obj.insert("content", subobj);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    return;
}
