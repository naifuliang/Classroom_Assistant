#ifndef INSERTPAPER_H
#define INSERTPAPER_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QMessageBox>
#include<QCloseEvent>
#include <QDebug>

namespace Ui {
class InsertPaper;
}

class InsertPaper : public QWidget
{
    Q_OBJECT

public:
    explicit InsertPaper(QWidget *parent = nullptr);
    ~InsertPaper();

    void closeEvent(QCloseEvent *event);

    void ChangeQuestionNum(const QString &num);

signals:
    void InsertPaperClosed();

private:
    Ui::InsertPaper *ui;
    QJsonArray PaperInfo;
    int previousK;
};

#endif // INSERTPAPER_H
