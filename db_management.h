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
    explicit DB_Management(QObject *parent = nullptr);
    ~DB_Management();
    bool reg(QString type,QString username,QString password);
    bool login(QString type,QString username,QString password);
    QJsonArray get_class(QString type,QString username);
    void addclass(QString username,QString classname);
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
