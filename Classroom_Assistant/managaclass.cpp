#include "managaclass.h"
#include "ui_managaclass.h"

ManagaClass::ManagaClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManagaClass)
{
    ui->setupUi(this);
    setWindowTitle("课程列表");
    //classinfo = nullptr;

    //测试的课堂列表
        QJsonArray TestClassList;
        QJsonObject Class1;
        Class1.insert("id",1000);
        Class1.insert("className","Class1");
        QJsonObject Class2;
        Class2.insert("id",1001);
        Class2.insert("className","Class2");
        TestClassList.append(Class1);
        TestClassList.append(Class2);
    //载入课堂列表
    teacherClassList = new QJsonArray;
    *teacherClassList = TestClassList;

    for (int i = 0;i < teacherClassList->size() ;i++ ) {
        //设置Item名字为课堂名字
        ui->ClassListWidget->addItem(teacherClassList->at(i).toObject().value("className").toString());
        //将Item的WhatsThis设为课堂ID
        ui->ClassListWidget->item(i)->setWhatsThis(QString::number(teacherClassList->at(i).toObject().value("id").toInt()));
        qDebug()<<"Class ID is"<<ui->ClassListWidget->item(i)->whatsThis();
        //qDebug()<<i<<studentClassList->at(i).toObject().value("className").toString();
    }

    //创建TeacherClassInfo对象赋值给classinfo指针,实现打开课堂信息界面
    connect(ui->ClassListWidget,&QListWidget::itemClicked,this,[=](QListWidgetItem *item){
        qDebug()<<"Clicked信号已收到";
        qDebug()<<"item->whatsTHis() is "<<item->whatsThis();
        for(int i = 0 ; i < teacherClassList->size() ; i++){
            qDebug()<<"id is "<<teacherClassList->at(i).toObject().value("id").toInt();
            if(item->whatsThis() == QString::number(teacherClassList->at(i).toObject().value("id").toInt())){
                extern QWidget* mainwindowptr;
                classinfo = new TeacherClassInfo(teacherClassList->at(i).toObject());
                connect(classinfo,&TeacherClassInfo::TchCLassInfoClosed,mainwindowptr,[=](){delete classinfo;qDebug()<<"classinfo指针已删除";});
                classinfo -> show();
                break;
            }
        }
    });

}

ManagaClass::~ManagaClass()
{
    delete ui;
}
