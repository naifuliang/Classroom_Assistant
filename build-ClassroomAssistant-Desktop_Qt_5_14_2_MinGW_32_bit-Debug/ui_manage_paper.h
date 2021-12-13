/********************************************************************************
** Form generated from reading UI file 'manage_paper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_PAPER_H
#define UI_MANAGE_PAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage_paper
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *addBtn;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *paperTable;

    void setupUi(QWidget *Manage_paper)
    {
        if (Manage_paper->objectName().isEmpty())
            Manage_paper->setObjectName(QString::fromUtf8("Manage_paper"));
        Manage_paper->resize(400, 300);
        verticalLayout = new QVBoxLayout(Manage_paper);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Manage_paper);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        addBtn = new QPushButton(widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        horizontalLayout->addWidget(addBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);

        paperTable = new QTableWidget(Manage_paper);
        paperTable->setObjectName(QString::fromUtf8("paperTable"));

        verticalLayout->addWidget(paperTable);


        retranslateUi(Manage_paper);

        QMetaObject::connectSlotsByName(Manage_paper);
    } // setupUi

    void retranslateUi(QWidget *Manage_paper)
    {
        Manage_paper->setWindowTitle(QCoreApplication::translate("Manage_paper", "Form", nullptr));
        addBtn->setText(QCoreApplication::translate("Manage_paper", "\346\267\273\345\212\240\350\257\225\345\215\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage_paper: public Ui_Manage_paper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_PAPER_H
