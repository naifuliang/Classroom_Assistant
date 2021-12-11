/********************************************************************************
** Form generated from reading UI file 'enter_class.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_CLASS_H
#define UI_ENTER_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_class
{
public:

    void setupUi(QWidget *Enter_class)
    {
        if (Enter_class->objectName().isEmpty())
            Enter_class->setObjectName(QString::fromUtf8("Enter_class"));
        Enter_class->resize(400, 300);

        retranslateUi(Enter_class);

        QMetaObject::connectSlotsByName(Enter_class);
    } // setupUi

    void retranslateUi(QWidget *Enter_class)
    {
        Enter_class->setWindowTitle(QCoreApplication::translate("Enter_class", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter_class: public Ui_Enter_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_CLASS_H
