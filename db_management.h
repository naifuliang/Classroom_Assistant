#ifndef DB_MANAGEMENT_H
#define DB_MANAGEMENT_H

#include <QObject>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>

class DB_Management : public QObject
{
    Q_OBJECT
public:
    explicit DB_Management(QObject *parent = nullptr);
    ~DB_Management();
    bool reg(QString type,QString username,QString password);
signals:

private:
    QSqlDatabase db;
    const QString host="localhost",
                  DB_name="classroomassistant",
                  DB_username="ClassroomAssistant",
                  DB_password="123456";
    const int port=3306;
    void to_connect();
};

#endif // DB_MANAGEMENT_H
