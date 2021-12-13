#ifndef MANAGE_PAPER_H
#define MANAGE_PAPER_H

#include <QWidget>
#include <manage_paper_part.h>
#include <QVector>
#include <insertpaper.h>

namespace Ui {
class Manage_paper;
}

class Manage_paper : public QWidget
{
    Q_OBJECT

public:
    explicit Manage_paper(QString username="",QWidget *parent = nullptr);
    ~Manage_paper();
    void change_items();
    void changeBtn_event(int x);
    void copyBtn_event(int x);
    void deleteBtn_event(int x);
    void put_in_paper();

private:
    QString teachername;
    QVector <QString> name_list,num_list,release_list,id_list;
    Ui::Manage_paper *ui;
    Manage_paper_part *mpp[100];
    InsertPaper *insert_paper;
};

#endif // MANAGE_PAPER_H
