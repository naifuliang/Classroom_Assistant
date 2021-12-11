#ifndef STUDENTCLASSINFO_H
#define STUDENTCLASSINFO_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>

namespace Ui {
class StudentClassInfo;
}

class StudentClassInfo : public QWidget
{
    Q_OBJECT

public:
    explicit StudentClassInfo(const QJsonObject &NewClass,QWidget *parent = nullptr);
    ~StudentClassInfo();

    void closeEvent(QCloseEvent *event);

signals:
    void StuCLassInfoClosed();

private:
    Ui::StudentClassInfo *ui;

    const QJsonObject* Class;
};

#endif // STUDENTCLASSINFO_H
