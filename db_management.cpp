#include "db_management.h"

DB_Management::DB_Management(QObject *parent)
    : QObject{parent}
{
    db.setHostName(host);
    db.setPort(port);
    db.setDatabaseName(DB_name);
    db.setUserName(DB_username);
    db.setPassword(DB_password);
//*/
    if(db.open())
    {
        qDebug()<<"DB opened successfully\n";
    }
    else
    {
        qDebug()<<"DB opened failed. Please check your configuration\n";
    }
//*/
}

DB_Management::~DB_Management()
{
    db.close();
}
