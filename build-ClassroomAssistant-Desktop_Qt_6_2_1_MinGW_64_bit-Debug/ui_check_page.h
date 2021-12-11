/********************************************************************************
** Form generated from reading UI file 'check_page.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_PAGE_H
#define UI_CHECK_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Check_page
{
public:

    void setupUi(QWidget *Check_page)
    {
        if (Check_page->objectName().isEmpty())
            Check_page->setObjectName(QString::fromUtf8("Check_page"));
        Check_page->resize(400, 300);

        retranslateUi(Check_page);

        QMetaObject::connectSlotsByName(Check_page);
    } // setupUi

    void retranslateUi(QWidget *Check_page)
    {
        Check_page->setWindowTitle(QCoreApplication::translate("Check_page", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Check_page: public Ui_Check_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_PAGE_H
