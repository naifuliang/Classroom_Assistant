/********************************************************************************
** Form generated from reading UI file 'chooserole.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEROLE_H
#define UI_CHOOSEROLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseRole
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *teacherBtn;
    QPushButton *studentBtn;

    void setupUi(QDialog *ChooseRole)
    {
        if (ChooseRole->objectName().isEmpty())
            ChooseRole->setObjectName(QString::fromUtf8("ChooseRole"));
        ChooseRole->resize(236, 185);
        verticalLayout = new QVBoxLayout(ChooseRole);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(ChooseRole);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ChooseRole);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        teacherBtn = new QPushButton(widget_2);
        teacherBtn->setObjectName(QString::fromUtf8("teacherBtn"));

        horizontalLayout_2->addWidget(teacherBtn);

        studentBtn = new QPushButton(widget_2);
        studentBtn->setObjectName(QString::fromUtf8("studentBtn"));

        horizontalLayout_2->addWidget(studentBtn);


        verticalLayout->addWidget(widget_2);


        retranslateUi(ChooseRole);

        QMetaObject::connectSlotsByName(ChooseRole);
    } // setupUi

    void retranslateUi(QDialog *ChooseRole)
    {
        ChooseRole->setWindowTitle(QCoreApplication::translate("ChooseRole", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChooseRole", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\350\272\253\344\273\275\357\274\232", nullptr));
        teacherBtn->setText(QCoreApplication::translate("ChooseRole", "\350\200\201\345\270\210", nullptr));
        studentBtn->setText(QCoreApplication::translate("ChooseRole", "\345\255\246\347\224\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseRole: public Ui_ChooseRole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEROLE_H
