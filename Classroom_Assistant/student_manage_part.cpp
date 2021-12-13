#include "student_manage_part.h"
#include "ui_student_manage_part.h"

Student_manage_part::Student_manage_part(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student_manage_part)
{
    ui->setupUi(this);
    connect(ui->scoreBtn, &QPushButton::clicked, this, &Student_manage_part::check_score);
}

Student_manage_part::~Student_manage_part()
{
    delete ui;
}
