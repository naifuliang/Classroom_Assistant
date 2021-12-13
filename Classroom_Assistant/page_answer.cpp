#include "page_answer.h"
#include "ui_page_answer.h"


Page_answer::Page_answer(int id,QWidget *parent) :
    QWidget(parent),page_id(id),
    ui(new Ui::Page_answer)
{
    ui->setupUi(this);
    page_name="";
    resize(600,400);
    //此处用page_id获取page_name;
    setWindowTitle(page_name+"作答");
    //此处将题目和选项放到checkbox和lable里
    ui->selBoxA_1->setText("this is A");//这是一个例子
    connect(ui->selBoxA_1, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A1();
        else ui->complete_1->setChecked(false);
    });
    connect(ui->selBoxB_1, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B1();
        else ui->complete_1->setChecked(false);
    });
    connect(ui->selBoxC_1, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C1();
        else ui->complete_1->setChecked(false);
    });
    connect(ui->selBoxD_1, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D1();
        else ui->complete_1->setChecked(false);
    });

    connect(ui->selBoxA_2, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A2();
        else ui->complete_2->setChecked(false);
    });
    connect(ui->selBoxB_2, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B2();
        else ui->complete_2->setChecked(false);
    });
    connect(ui->selBoxC_2, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C2();
        else ui->complete_2->setChecked(false);
    });
    connect(ui->selBoxD_2, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D2();
        else ui->complete_2->setChecked(false);
    });

    connect(ui->selBoxA_3, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A3();
        else ui->complete_3->setChecked(false);
    });
    connect(ui->selBoxB_3, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B3();
        else ui->complete_3->setChecked(false);
    });
    connect(ui->selBoxC_3, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C3();
        else ui->complete_3->setChecked(false);
    });
    connect(ui->selBoxD_3, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D3();
        else ui->complete_3->setChecked(false);
    });

    connect(ui->selBoxA_4, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A4();
        else ui->complete_4->setChecked(false);
    });
    connect(ui->selBoxB_4, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B4();
        else ui->complete_4->setChecked(false);
    });
    connect(ui->selBoxC_4, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C4();
        else ui->complete_4->setChecked(false);
    });
    connect(ui->selBoxD_4, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D4();
        else ui->complete_4->setChecked(false);
    });

    connect(ui->selBoxA_5, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A5();
        else ui->complete_5->setChecked(false);
    });
    connect(ui->selBoxB_5, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B5();
        else ui->complete_5->setChecked(false);
    });
    connect(ui->selBoxC_5, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C5();
        else ui->complete_5->setChecked(false);
    });
    connect(ui->selBoxD_5, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D5();
        else ui->complete_5->setChecked(false);
    });

    connect(ui->selBoxA_6, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A6();
        else ui->complete_6->setChecked(false);
    });
    connect(ui->selBoxB_6, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B6();
        else ui->complete_6->setChecked(false);
    });
    connect(ui->selBoxC_6, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C6();
        else ui->complete_6->setChecked(false);
    });
    connect(ui->selBoxD_6, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D6();
        else ui->complete_6->setChecked(false);
    });

    connect(ui->selBoxA7, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A7();
        else ui->complete_7->setChecked(false);
    });
    connect(ui->selBoxB7, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B7();
        else ui->complete_7->setChecked(false);
    });
    connect(ui->selBoxC7, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C7();
        else ui->complete_7->setChecked(false);
    });
    connect(ui->selBoxD7, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D7();
        else ui->complete_7->setChecked(false);
    });

    connect(ui->selBoxA_8, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A8();
        else ui->complete_8->setChecked(false);
    });
    connect(ui->selBoxB_8, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B8();
        else ui->complete_8->setChecked(false);
    });
    connect(ui->selBoxC_8, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C8();
        else ui->complete_8->setChecked(false);
    });
    connect(ui->selBoxD_8, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D8();
        else ui->complete_8->setChecked(false);
    });


    connect(ui->selBoxA_9, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A9();
        else ui->complete_9->setChecked(false);
    });
    connect(ui->selBoxB_9, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B9();
        else ui->complete_9->setChecked(false);
    });
    connect(ui->selBoxC_9, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C9();
        else ui->complete_9->setChecked(false);
    });
    connect(ui->selBoxD_9, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D9();
        else ui->complete_9->setChecked(false);
    });


    connect(ui->selBoxA10, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_A10();
        else ui->complete_10->setChecked(false);
    });
    connect(ui->selBoxB10, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_B10();
        else ui->complete_10->setChecked(false);
    });
    connect(ui->selBoxC10, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_C10();
        else ui->complete_10->setChecked(false);
    });
    connect(ui->selBoxD10, &QCheckBox::stateChanged, this, [=](int state){
        if(state == Qt::Checked) check_D10();
        else ui->complete_10->setChecked(false);
    });
    connect(ui->submitBtn, &QPushButton::clicked, this, [=](){
        int num = 0;
        if(ui->complete_1->checkState() == Qt::Checked) num++;
        if(ui->complete_2->checkState() == Qt::Checked) num++;
        if(ui->complete_3->checkState() == Qt::Checked) num++;
        if(ui->complete_4->checkState() == Qt::Checked) num++;
        if(ui->complete_5->checkState() == Qt::Checked) num++;
        if(ui->complete_6->checkState() == Qt::Checked) num++;
        if(ui->complete_7->checkState() == Qt::Checked) num++;
        if(ui->complete_8->checkState() == Qt::Checked) num++;
        if(ui->complete_9->checkState() == Qt::Checked) num++;
        if(ui->complete_10->checkState() == Qt::Checked) num++;
        if(num == 10)
        {
            QMessageBox::information(this, "提交成功", "恭喜你提交成功!");
            emit(paper_submit());
            close();
        }
        else QMessageBox::critical(this, "提交失败", "你还有"+QString::number(10-num)+"道题没完成哦");
    });

    connect(ui->closeBtn, &QPushButton::clicked, this, &Page_answer::close);
}

Page_answer::~Page_answer()
{
    delete ui;
}

void Page_answer::check_A1()
{
    ui->selBoxB_1->setChecked(false);
    ui->selBoxC_1->setChecked(false);
    ui->selBoxD_1->setChecked(false);
    ui->complete_1->setChecked(true);
}

void Page_answer::check_B1()
{
    ui->selBoxA_1->setChecked(false);
    ui->selBoxC_1->setChecked(false);
    ui->selBoxD_1->setChecked(false);
    ui->complete_1->setChecked(true);
}

void Page_answer::check_C1()
{
    ui->selBoxA_1->setChecked(false);
    ui->selBoxB_1->setChecked(false);
    ui->selBoxD_1->setChecked(false);
    ui->complete_1->setChecked(true);
}

void Page_answer::check_D1()
{
    ui->selBoxA_1->setChecked(false);
    ui->selBoxC_1->setChecked(false);
    ui->selBoxB_1->setChecked(false);
    ui->complete_1->setChecked(true);
}

void Page_answer::check_A2()
{
    ui->selBoxB_2->setChecked(false);
    ui->selBoxC_2->setChecked(false);
    ui->selBoxD_2->setChecked(false);
    ui->complete_2->setChecked(true);
}

void Page_answer::check_B2()
{
    ui->selBoxA_2->setChecked(false);
    ui->selBoxC_2->setChecked(false);
    ui->selBoxD_2->setChecked(false);
    ui->complete_2->setChecked(true);
}

void Page_answer::check_C2()
{
    ui->selBoxA_2->setChecked(false);
    ui->selBoxB_2->setChecked(false);
    ui->selBoxD_2->setChecked(false);
    ui->complete_2->setChecked(true);
}

void Page_answer::check_D2()
{
    ui->selBoxA_2->setChecked(false);
    ui->selBoxB_2->setChecked(false);
    ui->selBoxC_2->setChecked(false);
    ui->complete_2->setChecked(true);
}

void Page_answer::check_A3()
{
    ui->selBoxB_3->setChecked(false);
    ui->selBoxC_3->setChecked(false);
    ui->selBoxD_3->setChecked(false);
    ui->complete_3->setChecked(true);
}

void Page_answer::check_B3()
{
    ui->selBoxA_3->setChecked(false);
    ui->selBoxC_3->setChecked(false);
    ui->selBoxD_3->setChecked(false);
    ui->complete_3->setChecked(true);
}


void Page_answer::check_C3()
{
    ui->selBoxA_3->setChecked(false);
    ui->selBoxB_3->setChecked(false);
    ui->selBoxD_3->setChecked(false);
    ui->complete_3->setChecked(true);
}


void Page_answer::check_D3()
{
    ui->selBoxA_3->setChecked(false);
    ui->selBoxB_3->setChecked(false);
    ui->selBoxC_3->setChecked(false);
    ui->complete_3->setChecked(true);
}

void Page_answer::check_A4()
{
    ui->selBoxB_4->setChecked(false);
    ui->selBoxC_4->setChecked(false);
    ui->selBoxD_4->setChecked(false);
    ui->complete_4->setChecked(true);
}

void Page_answer::check_B4()
{
    ui->selBoxA_4->setChecked(false);
    ui->selBoxC_4->setChecked(false);
    ui->selBoxD_4->setChecked(false);
    ui->complete_4->setChecked(true);
}

void Page_answer::check_C4()
{
    ui->selBoxA_4->setChecked(false);
    ui->selBoxB_4->setChecked(false);
    ui->selBoxD_4->setChecked(false);
    ui->complete_4->setChecked(true);
}

void Page_answer::check_D4()
{
    ui->selBoxA_4->setChecked(false);
    ui->selBoxB_4->setChecked(false);
    ui->selBoxC_4->setChecked(false);
    ui->complete_4->setChecked(true);
}

void Page_answer::check_A5()
{
    ui->selBoxB_5->setChecked(false);
    ui->selBoxC_5->setChecked(false);
    ui->selBoxD_5->setChecked(false);
    ui->complete_5->setChecked(true);
}

void Page_answer::check_B5()
{
    ui->selBoxA_5->setChecked(false);
    ui->selBoxC_5->setChecked(false);
    ui->selBoxD_5->setChecked(false);
    ui->complete_5->setChecked(true);
}

void Page_answer::check_C5()
{
    ui->selBoxA_5->setChecked(false);
    ui->selBoxB_5->setChecked(false);
    ui->selBoxD_5->setChecked(false);
    ui->complete_5->setChecked(true);
}

void Page_answer::check_D5()
{
    ui->selBoxA_5->setChecked(false);
    ui->selBoxB_5->setChecked(false);
    ui->selBoxC_5->setChecked(false);
    ui->complete_5->setChecked(true);
}

void Page_answer::check_A6()
{
    ui->selBoxB_6->setChecked(false);
    ui->selBoxC_6->setChecked(false);
    ui->selBoxD_6->setChecked(false);
    ui->complete_6->setChecked(true);
}

void Page_answer::check_B6()
{
    ui->selBoxA_6->setChecked(false);
    ui->selBoxC_6->setChecked(false);
    ui->selBoxD_6->setChecked(false);
    ui->complete_6->setChecked(true);
}

void Page_answer::check_C6()
{
    ui->selBoxA_6->setChecked(false);
    ui->selBoxB_6->setChecked(false);
    ui->selBoxD_6->setChecked(false);
    ui->complete_6->setChecked(true);
}

void Page_answer::check_D6()
{
    ui->selBoxA_6->setChecked(false);
    ui->selBoxC_6->setChecked(false);
    ui->selBoxB_6->setChecked(false);
    ui->complete_6->setChecked(true);
}

void Page_answer::check_A7()
{
    ui->selBoxB7->setChecked(false);
    ui->selBoxC7->setChecked(false);
    ui->selBoxD7->setChecked(false);
    ui->complete_7->setChecked(true);
}


void Page_answer::check_B7()
{
    ui->selBoxA7->setChecked(false);
    ui->selBoxC7->setChecked(false);
    ui->selBoxD7->setChecked(false);
    ui->complete_7->setChecked(true);
}


void Page_answer::check_C7()
{
    ui->selBoxA7->setChecked(false);
    ui->selBoxB7->setChecked(false);
    ui->selBoxD7->setChecked(false);
    ui->complete_7->setChecked(true);
}


void Page_answer::check_D7()
{
    ui->selBoxA7->setChecked(false);
    ui->selBoxB7->setChecked(false);
    ui->selBoxC7->setChecked(false);
    ui->complete_7->setChecked(true);
}

void Page_answer::check_A8()
{
    ui->selBoxB_8->setChecked(false);
    ui->selBoxC_8->setChecked(false);
    ui->selBoxD_8->setChecked(false);
    ui->complete_8->setChecked(true);
}

void Page_answer::check_B8()
{
    ui->selBoxA_8->setChecked(false);
    ui->selBoxC_8->setChecked(false);
    ui->selBoxD_8->setChecked(false);
    ui->complete_8->setChecked(true);
}

void Page_answer::check_C8()
{
    ui->selBoxA_8->setChecked(false);
    ui->selBoxB_8->setChecked(false);
    ui->selBoxD_8->setChecked(false);
    ui->complete_8->setChecked(true);
}

void Page_answer::check_D8()
{
    ui->selBoxB_8->setChecked(false);
    ui->selBoxC_8->setChecked(false);
    ui->selBoxA_8->setChecked(false);
    ui->complete_8->setChecked(true);
}

void Page_answer::check_A9()
{
    ui->selBoxB_9->setChecked(false);
    ui->selBoxC_9->setChecked(false);
    ui->selBoxD_9->setChecked(false);
    ui->complete_9->setChecked(true);
}

void Page_answer::check_B9()
{
    ui->selBoxA_9->setChecked(false);
    ui->selBoxC_9->setChecked(false);
    ui->selBoxD_9->setChecked(false);
    ui->complete_9->setChecked(true);
}

void Page_answer::check_C9()
{
    ui->selBoxA_9->setChecked(false);
    ui->selBoxB_9->setChecked(false);
    ui->selBoxD_9->setChecked(false);
    ui->complete_9->setChecked(true);
}

void Page_answer::check_D9()
{
    ui->selBoxA_9->setChecked(false);
    ui->selBoxC_9->setChecked(false);
    ui->selBoxB_9->setChecked(false);
    ui->complete_9->setChecked(true);
}

void Page_answer::check_A10()
{
    ui->selBoxB10->setChecked(false);
    ui->selBoxC10->setChecked(false);
    ui->selBoxD10->setChecked(false);
    ui->complete_10->setChecked(true);
}

void Page_answer::check_B10()
{
    ui->selBoxA10->setChecked(false);
    ui->selBoxC10->setChecked(false);
    ui->selBoxD10->setChecked(false);
    ui->complete_10->setChecked(true);
}


void Page_answer::check_C10()
{
    ui->selBoxA10->setChecked(false);
    ui->selBoxB10->setChecked(false);
    ui->selBoxD10->setChecked(false);
    ui->complete_10->setChecked(true);
}


void Page_answer::check_D10()
{
    ui->selBoxA10->setChecked(false);
    ui->selBoxC10->setChecked(false);
    ui->selBoxB10->setChecked(false);
    ui->complete_10->setChecked(true);
}


