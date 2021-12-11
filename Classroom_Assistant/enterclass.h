#ifndef ENTERCLASS_H
#define ENTERCLASS_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QListWidget>

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
    Ui::EnterClass *ui;

    QJsonArray *studentClassList;
    StudentClassInfo *classinfo;
};

#endif // ENTERCLASS_H
