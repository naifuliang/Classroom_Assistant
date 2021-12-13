#include "publishquiz.h"
#include "ui_publishquiz.h"

PublishQuiz::PublishQuiz(const QString &Newusername,const QString &Newid,QWidget *parent) :
    QWidget(parent),username(Newusername),id(Newid),
    ui(new Ui::PublishQuiz)
{
    ui->setupUi(this);
    paperinfo = 0;
    setWindowTitle("Quiz发布");
    Quizing = false;


    //测试数据↓
    QJsonObject PaperInfo;
    PaperInfo.insert("title","测试试卷");
    QJsonObject questionk;
    QJsonArray questions;
    QJsonObject options;
    for (int k = 0 ; k<10 ;k++ ) {
        questionk.insert("id",QString::number(k+1));//题号
        questionk.insert("description","这是第"+QString::number(k+1)+"题");
        options.insert("A","AAAAA");
        options.insert("B","BBBBB");
        options.insert("C","CCCCC");
        options.insert("D","DDDDD");
        questionk.insert("options",options);
        questionk.insert("Answer","A");
        questions.append(questionk);

    }
    PaperInfo.insert("content",questions);
    //测试数据↑

    Papers.append(PaperInfo);
    ui->PapersListWidget->addItem(Papers[0].toObject().value("title").toString());

    connect(ui->PublishQuizButton,&QPushButton::clicked,this,[=](){
        if(Quizing == false){
            Quizing = true;
            emit QuizPublished(username,id,ui->PapersListWidget->currentItem()->text());
            QMessageBox::information(this,"提示","Quiz已经发布。");
            qDebug()<<"Quiz发布信号已发出";
            ui->PublishQuizButton->setText("查看结果");
        }
        else if(Quizing == true){
            quizresult = new QuizResult(username,id,ui->PapersListWidget->currentItem()->text());
            extern QWidget *mainwindowptr;
            connect(quizresult,&QuizResult::QuizResultClosed,mainwindowptr,[=](){
                delete quizresult;
            });
            connect(quizresult,&QuizResult::QuizFinished,this,&PublishQuiz::QuizFinished);
            quizresult->show();
        }
    });

}

PublishQuiz::~PublishQuiz()
{
    delete ui;

}

void PublishQuiz::QuizFinished(const QString &username,const QString &id,const QString &title){
    Quizing = false;
    ui->PublishQuizButton->setText("发布Quiz");
}

void PublishQuiz::on_CheckoutPaper_clicked()
{
    for (int i = 0 ;i<Papers.size() ;i++ ) {
        if(ui->PapersListWidget->currentItem()->text() == Papers[i].toObject().value("title").toString()){
            extern QWidget *mainwindowptr;
            paperinfo = new InsertPaper;
            connect(paperinfo,&InsertPaper::InsertPaperClosed,mainwindowptr,[=](){
                delete paperinfo;
                qDebug()<<"insertpaper指针已删除";
            });
            paperinfo->setPaperInfo(Papers[i].toObject());
            paperinfo->setReadOnly();
            paperinfo->show();
        }

    }
}

void PublishQuiz::closeEvent(QCloseEvent *event){
    emit PublishQuizClosed();
}
