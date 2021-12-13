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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentClassInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *classIDLabel;
    QLabel *teacherNameLabel;
    QLabel *label_7;
    QLabel *label;
    QLabel *signupLabel;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *classNameLabel;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QPushButton *enterquizBtn;
    QSpacerItem *verticalSpacer_4;
    QPushButton *QuizScoreBtn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *SignupButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *StudentClassInfo)
    {
        if (StudentClassInfo->objectName().isEmpty())
            StudentClassInfo->setObjectName(QString::fromUtf8("StudentClassInfo"));
        StudentClassInfo->resize(400, 300);
        horizontalLayout = new QHBoxLayout(StudentClassInfo);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(StudentClassInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        classIDLabel = new QLabel(widget);
        classIDLabel->setObjectName(QString::fromUtf8("classIDLabel"));

        gridLayout->addWidget(classIDLabel, 0, 2, 1, 2);

        teacherNameLabel = new QLabel(widget);
        teacherNameLabel->setObjectName(QString::fromUtf8("teacherNameLabel"));

        gridLayout->addWidget(teacherNameLabel, 2, 2, 1, 2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        signupLabel = new QLabel(widget);
        signupLabel->setObjectName(QString::fromUtf8("signupLabel"));

        gridLayout->addWidget(signupLabel, 3, 2, 1, 2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        classNameLabel = new QLabel(widget);
        classNameLabel->setObjectName(QString::fromUtf8("classNameLabel"));

        gridLayout->addWidget(classNameLabel, 1, 2, 1, 2);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(StudentClassInfo);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        enterquizBtn = new QPushButton(widget_2);
        enterquizBtn->setObjectName(QString::fromUtf8("enterquizBtn"));

        verticalLayout->addWidget(enterquizBtn);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        QuizScoreBtn = new QPushButton(widget_2);
        QuizScoreBtn->setObjectName(QString::fromUtf8("QuizScoreBtn"));

        verticalLayout->addWidget(QuizScoreBtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        SignupButton = new QPushButton(widget_2);
        SignupButton->setObjectName(QString::fromUtf8("SignupButton"));
        SignupButton->setAutoRepeatDelay(300);

        verticalLayout->addWidget(SignupButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(StudentClassInfo);

        QMetaObject::connectSlotsByName(StudentClassInfo);
    } // setupUi

    void retranslateUi(QWidget *StudentClassInfo)
    {
        StudentClassInfo->setWindowTitle(QCoreApplication::translate("StudentClassInfo", "Form", nullptr));
        classIDLabel->setText(QString());
        teacherNameLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("StudentClassInfo", "\344\273\273\350\257\276\350\200\201\345\270\210:", nullptr));
        label->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\347\250\213\345\220\215\345\255\227:", nullptr));
        signupLabel->setText(QString());
        label_5->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\347\250\213ID:", nullptr));
        label_3->setText(QCoreApplication::translate("StudentClassInfo", "\347\255\276\345\210\260\346\254\241\346\225\260:", nullptr));
        classNameLabel->setText(QString());
        enterquizBtn->setText(QCoreApplication::translate("StudentClassInfo", "\350\277\233\345\205\245\347\255\224\351\242\230", nullptr));
        QuizScoreBtn->setText(QCoreApplication::translate("StudentClassInfo", "\350\200\203\350\257\225\346\210\220\347\273\251", nullptr));
        SignupButton->setText(QCoreApplication::translate("StudentClassInfo", "\350\257\276\345\240\202\347\255\276\345\210\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentClassInfo: public Ui_StudentClassInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCLASSINFO_H
