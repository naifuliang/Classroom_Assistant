/********************************************************************************
** Form generated from reading UI file 'enterclass.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERCLASS_H
#define UI_ENTERCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterClass
{
public:
    QLabel *label;
    QListWidget *ClassListWidget;

    void setupUi(QWidget *EnterClass)
    {
        if (EnterClass->objectName().isEmpty())
            EnterClass->setObjectName(QString::fromUtf8("EnterClass"));
        EnterClass->resize(400, 300);
        label = new QLabel(EnterClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 30, 54, 12));
        ClassListWidget = new QListWidget(EnterClass);
        ClassListWidget->setObjectName(QString::fromUtf8("ClassListWidget"));
        ClassListWidget->setGeometry(QRect(60, 60, 256, 192));

        retranslateUi(EnterClass);

        QMetaObject::connectSlotsByName(EnterClass);
    } // setupUi

    void retranslateUi(QWidget *EnterClass)
    {
        EnterClass->setWindowTitle(QCoreApplication::translate("EnterClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("EnterClass", "\350\257\276\347\250\213\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterClass: public Ui_EnterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERCLASS_H
