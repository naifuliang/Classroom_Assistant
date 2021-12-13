#ifndef STUDENT_MANAGE_PART_H
#define STUDENT_MANAGE_PART_H

#include <QWidget>

namespace Ui {
class Student_manage_part;
}

class Student_manage_part : public QWidget
{
    Q_OBJECT

public:
    explicit Student_manage_part(QWidget *parent = nullptr);
    ~Student_manage_part();

signals:
    void check_score();

private:
    Ui::Student_manage_part *ui;
};

#endif // STUDENT_MANAGE_PART_H
