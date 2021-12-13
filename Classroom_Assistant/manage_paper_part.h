#ifndef MANAGE_PAPER_PART_H
#define MANAGE_PAPER_PART_H

#include <QWidget>

namespace Ui {
class Manage_paper_part;
}

class Manage_paper_part : public QWidget
{
    Q_OBJECT

public:
    explicit Manage_paper_part(QWidget *parent = nullptr);
    ~Manage_paper_part();

signals:
    void copyBtn_clicked();
    void changeBtn_clicked();
    void deleteBtn_clicked();

private:
    Ui::Manage_paper_part *ui;
};

#endif // MANAGE_PAPER_PART_H
