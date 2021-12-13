#ifndef STUDENTCLASSINFO_H
#define STUDENTCLASSINFO_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <quiz_score.h>
#include <page_answer.h>
#include <QMessageBox>

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
    int paper_id;
    const QJsonObject* Class;
    QString classname,username;
    Page_answer *paper;
    Ui::StudentClassInfo *ui;
};

#endif // STUDENTCLASSINFO_H
