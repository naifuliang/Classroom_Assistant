#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QtDebug>
#include <QDateTime>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

#include <db_management.h>
//#include <db_operator.h>

/*
namespace action_type
{
    const QString command_login="login",
                  command_logout="logout",
                  command_register="register";
}
//*/

class serverconnection : public QObject
{
    Q_OBJECT
public:
    explicit serverconnection(QThread* thread,qintptr sock,QObject *parent = nullptr);
    ~serverconnection();
public slots:
    void quit();
    void action();
signals:
    void distroy(serverconnection* connection,QThread* thread);
    void stop(serverconnection* connection);
private:
    QTcpSocket* tcp;
    QThread *thread;
    QDateTime time;
    QString ip;
    QString username;
    QString type;
    DB_Management *db;
    void login(const QJsonObject &obj);
    void reg(const QJsonObject &obj);
    void attendclass(const QJsonObject &obj);
    void addclass(const QJsonObject &obj);
    void getclass();
    void addpaper(const QJsonObject &obj);
    void showpaperlist(const QJsonObject &obj);
    void getpaper(const QJsonObject &obj);
    void submit(const QJsonObject &obj);
    void getscore_student(const QJsonObject &obj);
    void getscore_teacher(const QJsonObject &obj);
};

#endif // SERVERCONNECTION_H


/*
API Document
Login/Register:
Client:
{
"act":"login",
"username":"LNF_297",
"password":"123",
"type":"student"
}
Server:
{
    "act": "login",
    "is_successful": true
}
//登陆时用户名或密码错误返回false，注册时用户名重名返回false
Get class list for both student and teacher
Client
{
"act":"getclass"
}
Server
[
    {
        "classid": 1,
        "classname": "C++",
        "teacher": "LNF_297"
    },
    {
        "classid": 2,
        "classname": "C--",
        "teacher": "LNF_297"
    },
    {
        "classid": 3,
        "classname": "高等数学",
        "teacher": "LNF_297"
    }
]
Create a new class(Only used by teacher)
Client
{
"act":"addclass",
"classname":"C++"
}
Server
{
"act":"addclass",
"is_successful":true
}
Take a exitant class by Classid(Only used by student)
Client
{
"act":"attendclass",
"classid":1
}
Server
{
    "act": "attend",
    "is_successful": false
}
Create a new paper
Client
{
"act":"addpaper",
"classid":1,
"papername":"C++ quiz",
"papercontent":"[]"
}
Server
{
"act":"addpaper",
"is_successful":true
}
Get a paper list in a certain class for both teacher and student
Client
{
"act":"showpaperlist",
"classid":1
}
Server
[
    {
        "paperid": 1,
        "papername": "C++ quiz"
    },
    {
        "paperid": 2,
        "papername": "C++ quiz2"
    },
    {
        "paperid": 3,
        "papername": "C++ quiz3"
    }
]

Request a full paper for both student and teacher
Client
{
"act":"getpaper",
"paperid":1
}
Server
{
    "papercontent": "[]",
    "paperid": 1,
    "papername": "C++ quiz"
}
Paper submission for student(the client can only submit the score)
Client
{
"act":"submit",
"paperid":1,
"score":100
}
Server
{
"act":"submission",
"is_successful":true
}
//重复提交返回false
Get Score
Client
{
    "act":"getscore",
    "paperid":1
}
Server
if teacher

[
    {
        "score": 100,
        "student": "LNF_297"
    }
]

if student

{
"act":"getscore",
"score":100
}
*/
