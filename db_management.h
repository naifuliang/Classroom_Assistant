#ifndef DB_MANAGEMENT_H
#define DB_MANAGEMENT_H

#include <QObject>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

class DB_Management : public QObject
{
    Q_OBJECT
public:
    explicit DB_Management(QObject *parent = nullptr,QString DBname=QString("defult"));
    ~DB_Management();
    bool reg(QString type,QString username,QString password);
    bool login(QString type,QString username,QString password);
    QJsonArray get_class(QString type,QString username);
    void addclass(QString username,QString classname);
    bool attentclass(QString username,int classid);
    void addpaper(QString papername,QString papercontent,int classid);
    QJsonArray showpaperlist(int classid);
    QJsonObject getpaper(int paperid);
    bool submmit(QString username,int paperid,int score);
    int get_score(QString username,int paperid);
    QJsonArray get_score(int paperid);
signals:

private:
    QSqlDatabase db;
    const QString host="localhost",
                  DB_name="classroomassistant",
                  DB_username="ClassroomAssistant",
                  DB_password="123456";
    const int port=3306;
    inline void to_connect();
    inline void close();
};

#endif // DB_MANAGEMENT_H
