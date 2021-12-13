#ifndef MANAGACLASS_H
#define MANAGACLASS_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QListWidget>
#include <QDebug>
#include"teacherclassinfo.h"

//课堂管理窗口，显示课堂列表，双击进入课堂信息盒子查看详情。

namespace Ui {
class ManagaClass;
}

class ManagaClass : public QWidget
{
    Q_OBJECT

public:
    explicit ManagaClass(QString user="",int identi=-1,QWidget *parent = nullptr);
    ~ManagaClass();

private:
    QJsonArray *teacherClassList;
    QString username;
    int identity;//选择该窗口是教师端(0)的还是学生端的(1)
    TeacherClassInfo *classinfo;
    Ui::ManagaClass *ui;
};

#endif // MANAGACLASS_H
