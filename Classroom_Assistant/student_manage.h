#ifndef STUDENT_MANAGE_H
#define STUDENT_MANAGE_H

#include <QWidget>
#include <QWidgetItem>
#include <QVector>
#include "student_manage_part.h"
#include "quiz_score.h"

namespace Ui {
class Student_manage;
}

class Student_manage : public QWidget
{
    Q_OBJECT

public:
    explicit Student_manage(QString teacher="",QString classn="",QWidget *parent = nullptr);
    ~Student_manage();

private:
    QString teachername,classname;
    Ui::Student_manage *ui;
    QVector <QString> student_name,student_signin;
    QVector <int> student_id;
    Student_manage_part *smp[100];
    Quiz_score *student_score;
};

#endif // STUDENT_MANAGE_H
