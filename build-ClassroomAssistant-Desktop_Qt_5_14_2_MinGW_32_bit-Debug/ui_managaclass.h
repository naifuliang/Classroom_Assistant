/********************************************************************************
** Form generated from reading UI file 'managaclass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGACLASS_H
#define UI_MANAGACLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagaClass
{
public:
    QListWidget *ClassListWidget;

    void setupUi(QWidget *ManagaClass)
    {
        if (ManagaClass->objectName().isEmpty())
            ManagaClass->setObjectName(QString::fromUtf8("ManagaClass"));
        ManagaClass->resize(400, 300);
        ClassListWidget = new QListWidget(ManagaClass);
        ClassListWidget->setObjectName(QString::fromUtf8("ClassListWidget"));
        ClassListWidget->setGeometry(QRect(60, 50, 256, 192));

        retranslateUi(ManagaClass);

        QMetaObject::connectSlotsByName(ManagaClass);
    } // setupUi

    void retranslateUi(QWidget *ManagaClass)
    {
        ManagaClass->setWindowTitle(QCoreApplication::translate("ManagaClass", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagaClass: public Ui_ManagaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGACLASS_H
