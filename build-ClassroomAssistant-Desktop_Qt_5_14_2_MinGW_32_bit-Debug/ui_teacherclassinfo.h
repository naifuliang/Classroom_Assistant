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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherClassInfo
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
    QPushButton *StudentManageButton;
    QPushButton *SignupButton;
    QPushButton *QuizButton;
    QPushButton *ChooseroleButton;

    void setupUi(QWidget *TeacherClassInfo)
    {
        if (TeacherClassInfo->objectName().isEmpty())
            TeacherClassInfo->setObjectName(QString::fromUtf8("TeacherClassInfo"));
        TeacherClassInfo->resize(400, 300);
        verticalLayoutWidget = new QWidget(TeacherClassInfo);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 100, 160, 71));
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

        StudentManageButton = new QPushButton(TeacherClassInfo);
        StudentManageButton->setObjectName(QString::fromUtf8("StudentManageButton"));
        StudentManageButton->setGeometry(QRect(260, 70, 80, 31));
        SignupButton = new QPushButton(TeacherClassInfo);
        SignupButton->setObjectName(QString::fromUtf8("SignupButton"));
        SignupButton->setGeometry(QRect(260, 110, 80, 31));
        QuizButton = new QPushButton(TeacherClassInfo);
        QuizButton->setObjectName(QString::fromUtf8("QuizButton"));
        QuizButton->setGeometry(QRect(260, 150, 80, 31));
        ChooseroleButton = new QPushButton(TeacherClassInfo);
        ChooseroleButton->setObjectName(QString::fromUtf8("ChooseroleButton"));
        ChooseroleButton->setGeometry(QRect(260, 190, 80, 31));

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
