#include "manage_paper_part.h"
#include "ui_manage_paper_part.h"

Manage_paper_part::Manage_paper_part(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manage_paper_part)
{
    ui->setupUi(this);
    connect(ui->changeBtn, &QPushButton::clicked, this, &Manage_paper_part::changeBtn_clicked);
    connect(ui->deleteBtn, &QPushButton::clicked, this, &Manage_paper_part::deleteBtn_clicked);
    connect(ui->copyBtn, &QPushButton::clicked, this, &Manage_paper_part::copyBtn_clicked);
}

Manage_paper_part::~Manage_paper_part()
{
    delete ui;
}
