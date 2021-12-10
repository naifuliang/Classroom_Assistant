#ifndef TEACHER_H
#define TEACHER_H

#include <QWidget>

namespace Ui {
class Teacher;
}

class Teacher : public QWidget
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = nullptr);
    ~Teacher();
    void setattribute(int ui,QString pss,QString nam);

private:
    Ui::Teacher *ui;
    int Uid;
    QString Password,Name,Class;
};

#endif // TEACHER_H
