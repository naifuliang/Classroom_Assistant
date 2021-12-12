#include "insertpaper.h"
#include "ui_insertpaper.h"

InsertPaper::InsertPaper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertPaper)
{
    ui->setupUi(this);

    ui->QuestionNum->addItems({"1","2","3","4","5","6","7","8","9","10"});
    previousK = 0 ;

    //PaperInfo[0]存放试卷名字
    //PaperInfo[1]存放QJsonArray quesions。存放十个数据QJsonObject quesionk(k=0,1,……,9)。
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
    PaperInfo.append("title");
    QJsonArray questions;
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
        questionk.insert("Answer","");
        questions.append(questionk);

    }
    PaperInfo.append(questions);

    qDebug()<<PaperInfo[1].toArray()[0].toObject().value("id");

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
    //PaperInfo[1].toArray()[previousK].toObject().insert("description",ui->Description->text)
    qDebug()<<PaperInfo[1].toArray()[k].toObject().value("description");
    qDebug()<<PaperInfo[1].toArray()[k].toObject().value("id");
}
