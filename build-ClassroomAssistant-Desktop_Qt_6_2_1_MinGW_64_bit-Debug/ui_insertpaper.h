/********************************************************************************
** Form generated from reading UI file 'insertpaper.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTPAPER_H
#define UI_INSERTPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertPaper
{
public:
    QComboBox *QuestionNum;
    QLabel *label;
    QPushButton *DoneButton;
    QTextEdit *Description;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QTextEdit *OptionA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QTextEdit *OptionB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QTextEdit *OptionC;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QTextEdit *OptionD;
    QLineEdit *TitleEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *AnswerBox;

    void setupUi(QWidget *InsertPaper)
    {
        if (InsertPaper->objectName().isEmpty())
            InsertPaper->setObjectName(QString::fromUtf8("InsertPaper"));
        InsertPaper->resize(577, 549);
        QuestionNum = new QComboBox(InsertPaper);
        QuestionNum->setObjectName(QString::fromUtf8("QuestionNum"));
        QuestionNum->setGeometry(QRect(110, 40, 72, 22));
        label = new QLabel(InsertPaper);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 61, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(14);
        label->setFont(font);
        DoneButton = new QPushButton(InsertPaper);
        DoneButton->setObjectName(QString::fromUtf8("DoneButton"));
        DoneButton->setGeometry(QRect(240, 500, 80, 31));
        Description = new QTextEdit(InsertPaper);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setGeometry(QRect(110, 70, 371, 61));
        label_2 = new QLabel(InsertPaper);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 54, 31));
        label_2->setFont(font);
        verticalLayoutWidget = new QWidget(InsertPaper);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 140, 391, 308));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        OptionA = new QTextEdit(verticalLayoutWidget);
        OptionA->setObjectName(QString::fromUtf8("OptionA"));

        horizontalLayout_3->addWidget(OptionA);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        OptionB = new QTextEdit(verticalLayoutWidget);
        OptionB->setObjectName(QString::fromUtf8("OptionB"));

        horizontalLayout_2->addWidget(OptionB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        OptionC = new QTextEdit(verticalLayoutWidget);
        OptionC->setObjectName(QString::fromUtf8("OptionC"));

        horizontalLayout_4->addWidget(OptionC);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        OptionD = new QTextEdit(verticalLayoutWidget);
        OptionD->setObjectName(QString::fromUtf8("OptionD"));

        horizontalLayout->addWidget(OptionD);


        verticalLayout->addLayout(horizontalLayout);

        TitleEdit = new QLineEdit(InsertPaper);
        TitleEdit->setObjectName(QString::fromUtf8("TitleEdit"));
        TitleEdit->setGeometry(QRect(240, 40, 241, 20));
        horizontalLayoutWidget = new QWidget(InsertPaper);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 460, 160, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_5->addWidget(label_7);

        AnswerBox = new QComboBox(horizontalLayoutWidget);
        AnswerBox->setObjectName(QString::fromUtf8("AnswerBox"));

        horizontalLayout_5->addWidget(AnswerBox);


        retranslateUi(InsertPaper);

        QMetaObject::connectSlotsByName(InsertPaper);
    } // setupUi

    void retranslateUi(QWidget *InsertPaper)
    {
        InsertPaper->setWindowTitle(QCoreApplication::translate("InsertPaper", "Form", nullptr));
        label->setText(QCoreApplication::translate("InsertPaper", "\351\242\230\345\217\267\357\274\232", nullptr));
        DoneButton->setText(QCoreApplication::translate("InsertPaper", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("InsertPaper", "\351\242\230\347\233\256\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("InsertPaper", "A:", nullptr));
        label_4->setText(QCoreApplication::translate("InsertPaper", "B:", nullptr));
        label_6->setText(QCoreApplication::translate("InsertPaper", "C:", nullptr));
        label_3->setText(QCoreApplication::translate("InsertPaper", "D:", nullptr));
        label_7->setText(QCoreApplication::translate("InsertPaper", "\347\255\224\346\241\210\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertPaper: public Ui_InsertPaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTPAPER_H
