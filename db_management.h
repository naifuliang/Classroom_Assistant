#ifndef DB_MANAGEMENT_H
#define DB_MANAGEMENT_H

#include <QObject>
#include <QSqlDatabase>
#include <QtDebug>

class DB_Management : public QObject
{
    Q_OBJECT
public:
    explicit DB_Management(QObject *parent = nullptr);
    ~DB_Management();
signals:

private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    const QString host="localhost",
                  DB_name="classroomassistant",
                  DB_username="ClassroomAssistant",
                  DB_password="123456";
    const int port=3306;
};

#endif // DB_MANAGEMENT_H
