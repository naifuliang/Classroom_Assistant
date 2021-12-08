#ifndef LOGIN_STUDENT_H
#define LOGIN_STUDENT_H

#include <QDialog>

namespace Ui {
class Login_student;
}

class Login_student : public QDialog
{
    Q_OBJECT

public:
    explicit Login_student(QWidget *parent = nullptr);
    ~Login_student();

private:
    Ui::Login_student *ui;
};

#endif // LOGIN_STUDENT_H
