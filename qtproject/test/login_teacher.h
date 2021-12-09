#ifndef LOGIN_TEACHER_H
#define LOGIN_TEACHER_H

#include <QDialog>

namespace Ui {
class Login_teacher;
}

class Login_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit Login_teacher(QWidget *parent = nullptr);
    ~Login_teacher();

private:
    Ui::Login_teacher *ui;
};

#endif // LOGIN_TEACHER_H
