/********************************************************************************
** Form generated from reading UI file 'teacherclassinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERCLASSINFO_H
#define UI_TEACHERCLASSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherClassInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *classIDLabel;
    QLabel *label;
    QLabel *classNameLabel;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *StudentManageButton;
    QPushButton *SignupButton;
    QPushButton *QuizButton;
    QPushButton *ChooseroleButton;

    void setupUi(QWidget *TeacherClassInfo)
    {
        if (TeacherClassInfo->objectName().isEmpty())
            TeacherClassInfo->setObjectName(QString::fromUtf8("TeacherClassInfo"));
        TeacherClassInfo->resize(400, 300);
        horizontalLayout = new QHBoxLayout(TeacherClassInfo);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(TeacherClassInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        classIDLabel = new QLabel(widget);
        classIDLabel->setObjectName(QString::fromUtf8("classIDLabel"));

        gridLayout->addWidget(classIDLabel, 0, 1, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        classNameLabel = new QLabel(widget);
        classNameLabel->setObjectName(QString::fromUtf8("classNameLabel"));

        gridLayout->addWidget(classNameLabel, 1, 1, 1, 2);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(TeacherClassInfo);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StudentManageButton = new QPushButton(widget_2);
        StudentManageButton->setObjectName(QString::fromUtf8("StudentManageButton"));

        verticalLayout->addWidget(StudentManageButton);

        SignupButton = new QPushButton(widget_2);
        SignupButton->setObjectName(QString::fromUtf8("SignupButton"));

        verticalLayout->addWidget(SignupButton);

        QuizButton = new QPushButton(widget_2);
        QuizButton->setObjectName(QString::fromUtf8("QuizButton"));

        verticalLayout->addWidget(QuizButton);

        ChooseroleButton = new QPushButton(widget_2);
        ChooseroleButton->setObjectName(QString::fromUtf8("ChooseroleButton"));

        verticalLayout->addWidget(ChooseroleButton);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(TeacherClassInfo);

        QMetaObject::connectSlotsByName(TeacherClassInfo);
    } // setupUi

    void retranslateUi(QWidget *TeacherClassInfo)
    {
        TeacherClassInfo->setWindowTitle(QCoreApplication::translate("TeacherClassInfo", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("TeacherClassInfo", "\350\257\276\347\250\213ID:", nullptr));
        classIDLabel->setText(QString());
        label->setText(QCoreApplication::translate("TeacherClassInfo", "\350\257\276\347\250\213\345\220\215\345\255\227:", nullptr));
        classNameLabel->setText(QString());
        StudentManageButton->setText(QCoreApplication::translate("TeacherClassInfo", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        SignupButton->setText(QCoreApplication::translate("TeacherClassInfo", "\344\270\212\350\257\276\347\255\276\345\210\260", nullptr));
        QuizButton->setText(QCoreApplication::translate("TeacherClassInfo", "\345\217\221\345\270\203\346\265\213\350\257\225", nullptr));
        ChooseroleButton->setText(QCoreApplication::translate("TeacherClassInfo", "\351\232\217\346\234\272\351\200\211\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherClassInfo: public Ui_TeacherClassInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERCLASSINFO_H
