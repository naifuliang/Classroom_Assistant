#ifndef TEACHER_H
#define TEACHER_H

#include <QMainWindow>

namespace Ui {
class Teacher;
}

class Teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = nullptr);
    ~Teacher();
    void setattribute(int ui,QString pss,QString cla);

private:
    Ui::Teacher *ui;
    int Uid;
    QString Password,Name,Class;
};

#endif // TEACHER_H
