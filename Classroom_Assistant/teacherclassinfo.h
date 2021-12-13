#ifndef TEACHERCLASSINFO_H
#define TEACHERCLASSINFO_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include"insertpaper.h"
#include "student_manage.h"

namespace Ui {
class TeacherClassInfo;
}

class TeacherClassInfo : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherClassInfo(const QJsonObject &NewClass,QWidget *parent = nullptr);
    ~TeacherClassInfo();

    void closeEvent(QCloseEvent *event);

signals:
    void TchCLassInfoClosed();

private slots:
    void on_QuizButton_clicked();

private:
    const QJsonObject* Class;
    QString classname,username;
    Ui::TeacherClassInfo *ui;
    Student_manage *student_manage;
    InsertPaper *insertpaper;
};

#endif // TEACHERCLASSINFO_H
