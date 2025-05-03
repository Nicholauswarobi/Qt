/********************************************************************************
** Form generated from reading UI file 'incomedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMEDIALOG_H
#define UI_INCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_IncomeDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Income_Done_pushButton;
    QLineEdit *Income_Type_lineEdit;
    QLineEdit *Income_Amount_lineEdit;

    void setupUi(QDialog *IncomeDialog)
    {
        if (IncomeDialog->objectName().isEmpty())
            IncomeDialog->setObjectName("IncomeDialog");
        IncomeDialog->resize(400, 300);
        IncomeDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(142, 142, 212);"));
        label = new QLabel(IncomeDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 20, 132, 44));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        label_2 = new QLabel(IncomeDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 142, 31));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        label_3 = new QLabel(IncomeDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 150, 85, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        Income_Done_pushButton = new QPushButton(IncomeDialog);
        Income_Done_pushButton->setObjectName("Income_Done_pushButton");
        Income_Done_pushButton->setGeometry(QRect(130, 230, 135, 39));
        Income_Done_pushButton->setFont(font1);
        Income_Done_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Income_Done_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(25, 167, 9);\n"
"	color: rgb(68, 51, 255);\n"
"	border: 2px solid #e735ff;\n"
"border-radius: 10px;\n"
"}"));
        Income_Type_lineEdit = new QLineEdit(IncomeDialog);
        Income_Type_lineEdit->setObjectName("Income_Type_lineEdit");
        Income_Type_lineEdit->setGeometry(QRect(180, 90, 201, 41));
        QFont font2;
        font2.setPointSize(15);
        Income_Type_lineEdit->setFont(font2);
        Income_Type_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(151, 164, 225);\n"
"	color: rgb(58, 24, 51);\n"
"border: 2px solid #e682ff;\n"
"border-radius: 10px;\n"
"}"));
        Income_Amount_lineEdit = new QLineEdit(IncomeDialog);
        Income_Amount_lineEdit->setObjectName("Income_Amount_lineEdit");
        Income_Amount_lineEdit->setGeometry(QRect(180, 150, 201, 41));
        Income_Amount_lineEdit->setFont(font2);
        Income_Amount_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(151, 164, 225);\n"
"	color: rgb(58, 24, 51);\n"
"border: 2px solid #e682ff;\n"
"border-radius: 10px;\n"
"}"));

        retranslateUi(IncomeDialog);

        QMetaObject::connectSlotsByName(IncomeDialog);
    } // setupUi

    void retranslateUi(QDialog *IncomeDialog)
    {
        IncomeDialog->setWindowTitle(QCoreApplication::translate("IncomeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IncomeDialog", "INCOME", nullptr));
        label_2->setText(QCoreApplication::translate("IncomeDialog", "Income Type:", nullptr));
        label_3->setText(QCoreApplication::translate("IncomeDialog", "Income:", nullptr));
        Income_Done_pushButton->setText(QCoreApplication::translate("IncomeDialog", "Done", nullptr));
        Income_Type_lineEdit->setPlaceholderText(QCoreApplication::translate("IncomeDialog", "Enter income type", nullptr));
        Income_Amount_lineEdit->setPlaceholderText(QCoreApplication::translate("IncomeDialog", "Enter income amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncomeDialog: public Ui_IncomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMEDIALOG_H
