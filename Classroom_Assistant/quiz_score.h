#ifndef QUIZ_SCORE_H
#define QUIZ_SCORE_H

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>

namespace Ui {
class Quiz_score;
}

class Quiz_score : public QWidget
{
    Q_OBJECT

public:
    explicit Quiz_score(QString usernam,QString classnam,QWidget *parent = nullptr);
    ~Quiz_score();

private:
    QString username;
    QString classname;
    Ui::Quiz_score *ui;
};

#endif // QUIZ_SCORE_H
