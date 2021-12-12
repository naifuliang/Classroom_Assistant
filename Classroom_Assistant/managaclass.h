#ifndef MANAGACLASS_H
#define MANAGACLASS_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QListWidget>
#include <QDebug>
#include"teacherclassinfo.h"

namespace Ui {
class ManagaClass;
}

class ManagaClass : public QWidget
{
    Q_OBJECT

public:
    explicit ManagaClass(QWidget *parent = nullptr);
    ~ManagaClass();

private:
    QJsonArray *teacherClassList;
    QString username;
    TeacherClassInfo *classinfo;
    Ui::ManagaClass *ui;
};

#endif // MANAGACLASS_H
