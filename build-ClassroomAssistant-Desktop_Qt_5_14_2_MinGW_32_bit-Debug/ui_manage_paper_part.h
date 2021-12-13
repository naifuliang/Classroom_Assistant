/********************************************************************************
** Form generated from reading UI file 'manage_paper_part.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_PAPER_PART_H
#define UI_MANAGE_PAPER_PART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage_paper_part
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *changeBtn;
    QPushButton *deleteBtn;
    QPushButton *copyBtn;

    void setupUi(QWidget *Manage_paper_part)
    {
        if (Manage_paper_part->objectName().isEmpty())
            Manage_paper_part->setObjectName(QString::fromUtf8("Manage_paper_part"));
        Manage_paper_part->resize(270, 38);
        horizontalLayout = new QHBoxLayout(Manage_paper_part);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        changeBtn = new QPushButton(Manage_paper_part);
        changeBtn->setObjectName(QString::fromUtf8("changeBtn"));

        horizontalLayout->addWidget(changeBtn);

        deleteBtn = new QPushButton(Manage_paper_part);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        horizontalLayout->addWidget(deleteBtn);

        copyBtn = new QPushButton(Manage_paper_part);
        copyBtn->setObjectName(QString::fromUtf8("copyBtn"));

        horizontalLayout->addWidget(copyBtn);


        retranslateUi(Manage_paper_part);

        QMetaObject::connectSlotsByName(Manage_paper_part);
    } // setupUi

    void retranslateUi(QWidget *Manage_paper_part)
    {
        Manage_paper_part->setWindowTitle(QCoreApplication::translate("Manage_paper_part", "Form", nullptr));
        changeBtn->setText(QCoreApplication::translate("Manage_paper_part", "\344\277\256\346\224\271\350\257\225\345\215\267", nullptr));
        deleteBtn->setText(QCoreApplication::translate("Manage_paper_part", "\345\210\240\351\231\244\350\257\225\345\215\267", nullptr));
        copyBtn->setText(QCoreApplication::translate("Manage_paper_part", "\345\244\215\345\210\266\350\257\225\345\215\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage_paper_part: public Ui_Manage_paper_part {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_PAPER_PART_H
