#ifndef INSERTPAPER_H
#define INSERTPAPER_H

#include <QWidget>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>
#include<QMessageBox>
#include<QCloseEvent>

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
    void InsertPaperDone(const QJsonArray &PaperInfo);

private slots:
    void on_DoneButton_clicked();

private:
    Ui::InsertPaper *ui;
    QJsonArray PaperInfo;
    QJsonArray questions;
    int previousK;
};

#endif // INSERTPAPER_H
