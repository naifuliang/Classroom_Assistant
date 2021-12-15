// Author : Kaibin Lu (2021300004066)
// Github @Ufowoqqqo

// Organization :
// Engineering Experimental Class,
// Hongyi Honor College,
// Wuhan University

// Last updated : 2021/12/15

#include "client_teacher.h"

Client_Teacher::Client_Teacher(QWidget *parent) :
    QWidget(parent)
{
    client = new QTcpSocket(this);

    connect(client, &QTcpSocket::connected, this, &Client_Teacher::connectSuccessSlot);
    connect(client, &QTcpSocket::disconnected, this, &Client_Teacher::disconnectSlot);
//    connect(client, &QTcpSocket::readyRead, this, &Client_Teacher::newDataSlot);

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
    QList<quint32> courseidlist, studentidlist, scorelist;
    QStringList coursenamelist, studentnamelist;
    QString action, type, name, error;
    bool is_successful;

    json = client->readAll();
    doc = QJsonDocument::fromJson(json);

    if(doc.isObject())
    {
        obj = doc.object();

        action = obj.value("act").toString();
//        content = obj.value("content").toObject();
//        type = obj.value("type").toString();
//        name = obj.value("name").toString();
//        error = obj.value("error").toString();
        if(action == "register")
        {
            is_successful = obj.value("is_successful").toBool();
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
        if(action == "signed_student")
        {
            studentlist = content.value("studentidlist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentidlist.append(studentlist[i].toInt());
            studentlist = content.value("studentnamelist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentnamelist.append(studentlist[i].toString());
            // return to teacher client
        }
        if(action == "quiz_results")
        {
            studentlist = content.value("studentidlist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentidlist.append(studentlist[i].toInt());
            studentlist = content.value("studentnamelist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                studentnamelist.append(studentlist[i].toString());
            studentlist = content.value("scorelist").toArray();
            for(int i = 0; i < studentlist.size(); i ++)
                scorelist.append(studentlist[i].toInt());
            // return to teacher client
        }
        if(action == "random_pick")
        {

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

QByteArray Client_Teacher::teacher_register(QString username, QString password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;
//    bool is_successful;

    hashPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5);



    obj.insert("act", "register");
    obj.insert("username", username);
    obj.insert("password", QString(hashPassword));
    obj.insert("type", "teacher");

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);


    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::teacher_login(QString username, QString password)
{
    QByteArray hashPassword;
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;
//    bool is_successful;

    hashPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5);


    obj.insert("act", "login");
    obj.insert("username", username);
    obj.insert("password", QString(hashPassword));
    obj.insert("type", "teacher");

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);


    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

//void Client_Teacher::teacher_logout(QByteArray username)
//{
//    QJsonObject obj, subobj;
//    QByteArray json;
//    QJsonDocument doc;

//    subobj.insert("type", "teacher");
//    subobj.insert("name", QString(username));

//    obj.insert("act", "logout");
//    obj.insert("content", obj);

//    doc = QJsonDocument(obj);
//    json = doc.toJson();

//    _send(json);

//    return;
//}

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
 *                 courseidlist :
 *                 coursenamelist :
 *             }
 *         ]
 *     }
 * ]
 *
 */

QByteArray Client_Teacher::getclasslist()
{
    QJsonObject obj, subobj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "getclass");

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);


    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::addclass(QString classname)
{
    QJsonObject obj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "addclass");
    obj.insert("classname", classname);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::addpaper(quint32 classid, QString papername, QString papercontent)
{
    QJsonObject obj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "paper");
    obj.insert("classid", QString::number(classid));
    obj.insert("papername", papername);
    obj.insert("papercontent", papercontent);

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::showpaperlist(quint32 classid)
{
    QJsonObject obj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "showpaperlist");
    obj.insert("classid", QString::number(classid));

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::getpaper(quint32 paperid)
{
    QJsonObject obj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "getpaper");
    obj.insert("paperid", QString::number(paperid));

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
}

QByteArray Client_Teacher::getscore(quint32 paperid)
{
    QJsonObject obj;
    QByteArray json;
    QJsonDocument doc;

    obj.insert("act", "getscore");
    obj.insert("paperid", QString::number(paperid));

    doc = QJsonDocument(obj);
    json = doc.toJson();

    _send(json);

    do
    {
        json = client->readAll();
        doc = QJsonDocument::fromJson(json);
    }
    while(!doc.isObject());

    return json;
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
 *                 studentidlist :
 *                 studentnamelist :
 *             }
 *         ]
 *     }
 * ]
 *
 */

//void Client_Teacher::getstudentlist(quint32 courseid)
//{
//    QJsonObject obj, subobj;
//    QByteArray json;
//    QJsonDocument doc;

//    subobj.insert("username", username);
//    subobj.insert("courseid", QString::number(courseid));

//    obj.insert("act", "query_student");
//    obj.insert("content", subobj);

//    doc = QJsonDocument(obj);
//    json = doc.toJson();

//    _send(json);

//    return;
//}

// When asking for sign code

/*
 * Teacher client to Server
 *
 * [
 *     {
 *         act : "query_signcode"
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
 *         act : "signed_student"
 *         content :
 *         [
 *             {
 *                 studentidlist :
 *                 studentnamelist :
 *             }
 *         ]
 *     }
 * ]
 *
 */

//void Client_Teacher::getsigncode()
//{
//    QJsonObject obj, subobj;
//    QByteArray json;
//    QJsonDocument doc;

//    subobj.insert("username", username);

//    obj.insert("act", "query_signcode");
//    obj.insert("content", subobj);

//    doc = QJsonDocument(obj);
//    json = doc.toJson();

//    _send(json);

//    return;
//}

// When sending quiz

/*
 * Teacher client to Server
 *
 * [
 *     {
 *         act : "send_quiz"
 *         content :
 *         [
 *             {
 *                 problemlist :
 *                 timelimit :
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
 *         act : "quiz_results"
 *         content :
 *         [
 *             {
 *                 studentidlist :
 *                 studentnamelist :
 *                 scorelist :
 *             }
 *         ]
 *     }
 * ]
 *
 */

//void Client_Teacher::sendquiz(QStringList problemlist, quint32 timelimit)
//{
//    QJsonObject obj, subobj;
//    QJsonArray pro;
//    QByteArray json;
//    QJsonDocument doc;

//    for(int i = 0; i < (signed)problemlist.size(); i ++)
//        pro.append(problemlist[i]);

//    subobj.insert("problemlist", pro);
//    subobj.insert("timelimit", QString::number(timelimit));

//    obj.insert("action", "send_paper");
//    obj.insert("content", subobj);

//    doc = QJsonDocument(obj);
//    json = doc.toJson();

//    _send(json);

//    return;
//}

// When randomly picking student

/*
 * Teacher client to Server
 *
 * [
 *     {
 *         act : "random_pick"
 *         content :
 *         [
 *             {
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
 *         act : "random_pick"
 *         content :
 *         [
 *             {
 *                 id :
 *                 username :
 *             }
 *         ]
 *     }
 * ]
 *
 */

//void Client_Teacher::randompick(quint32 courseid)
//{
//    QJsonObject obj, subobj;
//    QByteArray json;
//    QJsonDocument doc;

//    subobj.insert("courseid", QString::number(courseid));

//    obj.insert("action", "random_pick");
//    obj.insert("content", subobj);

//    doc = QJsonDocument(obj);
//    json = doc.toJson();

//    _send(json);

//    return;
//}


