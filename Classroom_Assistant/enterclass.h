#ifndef ENTERCLASS_H
#define ENTERCLASS_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QListWidget>
#include <QDebug>

#include"studentclassinfo.h"

namespace Ui {
class EnterClass;
}

class EnterClass : public QWidget
{
    Q_OBJECT

public:
    explicit EnterClass(QWidget *parent = nullptr);
    ~EnterClass();

    void Deleteclassinfo();

private:
    QJsonArray *studentClassList;
    QString username;
    StudentClassInfo *classinfo;
    Ui::EnterClass *ui;
};

#endif // ENTERCLASS_H
