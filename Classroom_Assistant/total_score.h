#ifndef TOTAL_SCORE_H
#define TOTAL_SCORE_H

#include <QWidget>

namespace Ui {
class Total_score;
}

class Total_score : public QWidget
{
    Q_OBJECT

public:
    explicit Total_score(QString user,QWidget *parent = nullptr);
    ~Total_score();

private:
    QString username;
    Ui::Total_score *ui;
};

#endif // TOTAL_SCORE_H
