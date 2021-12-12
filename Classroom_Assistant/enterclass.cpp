#include "enterclass.h"
#include "ui_enterclass.h"

EnterClass::EnterClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EnterClass)
{
    ui->setupUi(this);

    setWindowTitle("课程列表");
    classinfo = nullptr;

    //测试的课堂列表
        QJsonArray TestClassList;
        QJsonObject Class1;
        Class1.insert("id",1000);
        Class1.insert("className","Class1");
        Class1.insert("teacherName","Mr Liu");
        Class1.insert("sign_up_total",12);
        Class1.insert("sign_up",9);
        QJsonObject Class2;
        Class2.insert("id",1001);
        Class2.insert("className","Class2");
        Class2.insert("teacherName","Mr Li");
        Class2.insert("sign_up_total",100);
        Class2.insert("sign_up",0);
        TestClassList.append(Class1);
        TestClassList.append(Class2);
    //载入课堂列表
    studentClassList = new QJsonArray;
    *studentClassList = TestClassList;

    qDebug()<<studentClassList->at(0).toObject().keys();
    qDebug()<<TestClassList[0].toObject().keys();
    //显示课堂信息
    for (int i = 0;i < studentClassList->size() ;i++ ) {
        //设置Item名字为课堂名字
        ui->ClassListWidget->addItem(studentClassList->at(i).toObject().value("className").toString());
        //将Item的WhatsThis设为课堂ID
        ui->ClassListWidget->item(i)->setWhatsThis(QString::number(studentClassList->at(i).toObject().value("id").toInt()));

        qDebug()<<"Class ID is"<<ui->ClassListWidget->item(i)->whatsThis();
        //qDebug()<<i<<studentClassList->at(i).toObject().value("className").toString();
    }

    //创建StudentClassInfo对象赋值给classinfo指针,实现打开课堂信息界面
    connect(ui->ClassListWidget,&QListWidget::itemClicked,this,[=](QListWidgetItem *item){
        qDebug()<<"Clicked信号已收到";
        qDebug()<<"item->whatsTHis() is "<<item->whatsThis();
        for(int i = 0 ; i < studentClassList->size() ; i++){
            qDebug()<<"id is "<<studentClassList->at(i).toObject().value("id").toInt();
            if(item->whatsThis() == QString::number(studentClassList->at(i).toObject().value("id").toInt())){
                extern QWidget* mainwindowptr;
                classinfo = new StudentClassInfo(studentClassList->at(i).toObject());
                connect(classinfo,&StudentClassInfo::StuCLassInfoClosed,mainwindowptr,[=](){delete classinfo;qDebug()<<"classinfo指针已删除";});
                classinfo -> show();
                break;
            }
        }
    });




}

EnterClass::~EnterClass()
{
    delete ui;
}
