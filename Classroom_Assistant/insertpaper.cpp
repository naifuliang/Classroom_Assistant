#include "insertpaper.h"
#include "ui_insertpaper.h"

InsertPaper::InsertPaper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertPaper)
{
    ui->setupUi(this);

    ui->QuestionNum->addItems({"1","2","3","4","5","6","7","8","9","10"});
    ui->AnswerBox->addItems({"A","B","C","D"});
    previousK = 0 ;

    //PaperInfo.value("title")存放试卷名字
    //PaperInfo.value("content")存放QJsonArray quesions。存放十个数据QJsonObject quesionk(k=0,1,……,9)。
    /*quesionk
    {"id":题号 为k+1
    "description":题目描述
    "option":选项
        {
            "A":
            "B":
            "C":
            "D":
        }
    "Answer":正确答案
    }*/
    PaperInfo.insert("title","");
    QJsonObject questionk;
    QJsonObject options;
    for (int k = 0 ; k<10 ;k++ ) {
        questionk.insert("id",QString::number(k+1));
        questionk.insert("description","");
        options.insert("A","");
        options.insert("B","");
        options.insert("C","");
        options.insert("D","");
        questionk.insert("options",options);
        questionk.insert("Answer","A");
        questions.append(questionk);

    }
    PaperInfo.insert("content",questions);

    qDebug()<<PaperInfo.value("content").toArray()[0].toObject().value("id");

    connect(ui->QuestionNum,&QComboBox::currentTextChanged,this,&InsertPaper::ChangeQuestionNum);


}

InsertPaper::~InsertPaper()
{
    delete ui;
}

void InsertPaper::closeEvent(QCloseEvent *event){
    QMessageBox::Button btn = QMessageBox::question(this, "关闭窗口", "您确定要关闭窗口吗?");
    if(btn == QMessageBox::Yes)
    {
        event->accept();
        emit InsertPaperClosed();
    }
    else
    {
        event->ignore();
    }
}

void InsertPaper::ChangeQuestionNum(const QString &num){
    int k = num.toInt() -1;
    /*QJsonValueRef ValueRef(PaperInfo[1].toArray()[previousK].toObject()["description"]);
    PaperInfo[1].toArray()[previousK].toObject()["description"];
    PaperInfo[1].toArray()[previousK].toObject().value("options").toObject().insert("A",ui->OptionA->toPlainText());
    PaperInfo[1].toArray()[previousK].toObject().value("options").toObject().insert("B",ui->OptionB->toPlainText());
    PaperInfo[1].toArray()[previousK].toObject().value("options").toObject().insert("C",ui->OptionC->toPlainText());
    PaperInfo[1].toArray()[previousK].toObject().value("options").toObject().insert("D",ui->OptionD->toPlainText());
    PaperInfo[1].toArray()[previousK].toObject().insert("Answer",ui->AnswerBox->currentText());*/
        QJsonObject questionk;
        QJsonObject options;
        questionk.insert("description",ui->Description->toPlainText());
        questionk.insert("id",QString::number(previousK+1));
        options.insert("A",ui->OptionA->toPlainText());
        options.insert("B",ui->OptionB->toPlainText());
        options.insert("C",ui->OptionC->toPlainText());
        options.insert("D",ui->OptionD->toPlainText());
        questionk.insert("options",options);
        questionk.insert("Answer",ui->AnswerBox->currentText());
        questions[previousK]=questionk;
        PaperInfo.insert("content",questions);
    qDebug()<<"Previous K is"<<previousK;
    previousK = k;
    qDebug()<<k<<"="<<previousK;
    ui->Description->setPlainText(PaperInfo.value("content").toArray()[k].toObject().value("description").toString());
    ui->OptionA->setPlainText(PaperInfo.value("content").toArray()[k].toObject().value("options").toObject().value("A").toString());
    ui->OptionB->setPlainText(PaperInfo.value("content").toArray()[k].toObject().value("options").toObject().value("B").toString());
    ui->OptionC->setPlainText(PaperInfo.value("content").toArray()[k].toObject().value("options").toObject().value("C").toString());
    ui->OptionD->setPlainText(PaperInfo.value("content").toArray()[k].toObject().value("options").toObject().value("D").toString());
    ui->AnswerBox->setCurrentText(PaperInfo.value("content").toArray()[k].toObject().value("Answer").toString());
    qDebug()<<PaperInfo.value("content").toArray()[k].toObject().value("description");
    qDebug()<<PaperInfo.value("content").toArray()[k].toObject().value("id");
}



void InsertPaper::on_DoneButton_clicked()
{
    QMessageBox::Button btn = QMessageBox::question(this, "保存试卷", "您确定要保存试卷吗?");
    if(btn == QMessageBox::Yes)
    {
        int k = ui->QuestionNum->currentText().toInt() - 1;
        QJsonObject questionk;
        QJsonObject options;
        questionk.insert("description",ui->Description->toPlainText());
        questionk.insert("id",QString::number(k+1));
        options.insert("A",ui->OptionA->toPlainText());
        options.insert("B",ui->OptionB->toPlainText());
        options.insert("C",ui->OptionC->toPlainText());
        options.insert("D",ui->OptionD->toPlainText());
        questionk.insert("options",options);
        questionk.insert("Answer",ui->AnswerBox->currentText());
        questions[k]=questionk;
        PaperInfo.insert("title",ui->TitleEdit->text());
        PaperInfo.value("content")=questions;
        emit InsertPaperDone(PaperInfo);
        qDebug()<<"已完成试卷编辑"<<PaperInfo;
    }

}

