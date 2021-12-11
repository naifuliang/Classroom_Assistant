/********************************************************************************
** Form generated from reading UI file 'studentclassinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTCLASSINFO_H
#define UI_STUDENTCLASSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentClassInfo
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *classIDLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *classNameLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *teacherNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *signupLabel;
    QPushButton *QuizScoreBtn;
    QPushButton *pushButton_2;

    void setupUi(QWidget *StudentClassInfo)
    {
        if (StudentClassInfo->objectName().isEmpty())
            StudentClassInfo->setObjectName(QString::fromUtf8("StudentClassInfo"));
        StudentClassInfo->resize(400, 300);
        verticalLayoutWidget = new QWidget(StudentClassInfo);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 50, 160, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        classIDLabel = new QLabel(verticalLayoutWidget);
        classIDLabel->setObjectName(QString::fromUtf8("classIDLabel"));

        horizontalLayout_3->addWidget(classIDLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        classNameLabel = new QLabel(verticalLayoutWidget);
        classNameLabel->setObjectName(QString::fromUtf8("classNameLabel"));

        horizontalLayout->addWidget(classNameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        teacherNameLabel = new QLabel(verticalLayoutWidget);
        teacherNameLabel->setObjectName(QString::fromUtf8("teacherNameLabel"));

        horizontalLayout_4->addWidget(teacherNameLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        signupLabel = new QLabel(verticalLayoutWidget);
        signupLabel->setObjectName(QString::fromUtf8("signupLabel"));

        horizontalLayout_2->addWidget(signupLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        QuizScoreBtn = new QPushButton(StudentClassInfo);
        QuizScoreBtn->setObjectName(QString::fromUtf8("QuizScoreBtn"));
        QuizScoreBtn->setGeometry(QRect(250, 190, 80, 31));
        pushButton_2 = new QPushButton(StudentClassInfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 230, 80, 31));

        retranslateUi(StudentClassInfo);

        QMetaObject::connectSlotsByName(StudentClassInfo);
    } // setupUi

    void retranslateUi(QWidget *StudentClassInfo)
    {
        StudentClassInfo->setWindowTitle(QCoreApplication::translate("StudentClassInfo", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\347\250\213ID:", nullptr));
        classIDLabel->setText(QString());
        label->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\347\250\213\345\220\215\345\255\227:", nullptr));
        classNameLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("StudentClassInfo", "\344\273\273\350\257\276\350\200\201\345\270\210:", nullptr));
        teacherNameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("StudentClassInfo", "\347\255\276\345\210\260\346\254\241\346\225\260:", nullptr));
        signupLabel->setText(QString());
        QuizScoreBtn->setText(QCoreApplication::translate("StudentClassInfo", "\350\200\203\350\257\225\346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\345\240\202\347\255\276\345\210\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentClassInfo: public Ui_StudentClassInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCLASSINFO_H
