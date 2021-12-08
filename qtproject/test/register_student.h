#ifndef REGISTER_STUDENT_H
#define REGISTER_STUDENT_H

#include <QDialog>

namespace Ui {
class Register_Student;
}

class Register_Student : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Student(QWidget *parent = nullptr);
    ~Register_Student();

private:
    Ui::Register_Student *ui;
};

#endif // REGISTER_STUDENT_H
