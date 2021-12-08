#ifndef REGISTER_TEACHER_H
#define REGISTER_TEACHER_H

#include <QDialog>

namespace Ui {
class Register_Teacher;
}

class Register_Teacher : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Teacher(QWidget *parent = nullptr);
    ~Register_Teacher();

private:
    Ui::Register_Teacher *ui;
};

#endif // REGISTER_TEACHER_H
