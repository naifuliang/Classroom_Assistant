#ifndef STUDENTCLASSINFO_H
#define STUDENTCLASSINFO_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <quiz_score.h>

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
    Quiz_score *quiz_score;
    const QJsonObject* Class;
    QString classname,username;
    Ui::StudentClassInfo *ui;
};

#endif // STUDENTCLASSINFO_H
