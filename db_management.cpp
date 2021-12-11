#include "db_management.h"


DB_Management::DB_Management(QObject *parent)
    : QObject{parent}
{

}

DB_Management::~DB_Management()
{
}

bool DB_Management::reg(QString type, QString username, QString password)
{
    to_connect();
/*
    QStringList tables = db.tables();
        foreach(QString table, tables)
            qDebug()<<table;
//*/
    QSqlQuery query(db);
    query.exec("select * from "+type+" where (username='"+username+"');");
//    query.exec(" insert into student(username,password,class) values('LNF_297', '123456', '[\n]');");
    if(query.next())
    {
//        QString a=query.value("username").toString();
//        qDebug()<<a<<"\n";
        db.close();
        return false;
    }
    else
    {
//        QString command=;
//        qDebug()<<command<<"\n";
        db.exec("INSERT INTO "+type+" (username, password, class) VALUES ('"+username+"','"+password+"','[\n]');");
//        qDebug()<<w<<"\n";
//        db.exec("INSERT INTO `student` (`username`, `password`, `class`) VALUES ('LNF_297', '123456', '[\r\n]')");
        db.close();
        return true;
    }
}

bool DB_Management::login(QString type, QString username, QString password)
{
    to_connect();
    QSqlQuery query(db);
    query.exec("select * from "+type+" where (username='"+username+"');");
    if(query.next())
    {
        QString real_password = query.value("password").toString();
        if(real_password==password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        db.close();
        return false;
    }
}

void DB_Management::to_connect()
{
    db = QSqlDatabase::addDatabase("QODBC");
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
