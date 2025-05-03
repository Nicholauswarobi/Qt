/********************************************************************************
** Form generated from reading UI file 'expensedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSEDIALOG_H
#define UI_EXPENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExpenseDialog
{
public:
    QPushButton *Expense_Submit_pushButton;
    QLineEdit *Expense_Amount_lineEdit;
    QLineEdit *Expense_Type_lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *ExpenseDialog)
    {
        if (ExpenseDialog->objectName().isEmpty())
            ExpenseDialog->setObjectName("ExpenseDialog");
        ExpenseDialog->resize(400, 300);
        ExpenseDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(142, 142, 212);"));
        Expense_Submit_pushButton = new QPushButton(ExpenseDialog);
        Expense_Submit_pushButton->setObjectName("Expense_Submit_pushButton");
        Expense_Submit_pushButton->setGeometry(QRect(130, 230, 135, 39));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        Expense_Submit_pushButton->setFont(font);
        Expense_Submit_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Expense_Submit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(209, 197, 255);\n"
"	color: rgb(39, 180, 164);\n"
"	border: 2px solid #e735ff;\n"
"border-radius: 10px;\n"
"}"));
        Expense_Amount_lineEdit = new QLineEdit(ExpenseDialog);
        Expense_Amount_lineEdit->setObjectName("Expense_Amount_lineEdit");
        Expense_Amount_lineEdit->setGeometry(QRect(180, 150, 201, 41));
        QFont font1;
        font1.setPointSize(15);
        Expense_Amount_lineEdit->setFont(font1);
        Expense_Amount_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(151, 164, 225);\n"
"	color: rgb(58, 24, 51);\n"
"border: 2px solid #e682ff;\n"
"border-radius: 10px;\n"
"}"));
        Expense_Type_lineEdit = new QLineEdit(ExpenseDialog);
        Expense_Type_lineEdit->setObjectName("Expense_Type_lineEdit");
        Expense_Type_lineEdit->setGeometry(QRect(180, 90, 201, 41));
        Expense_Type_lineEdit->setFont(font1);
        Expense_Type_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(151, 164, 225);\n"
"	color: rgb(58, 24, 51);\n"
"border: 2px solid #e682ff;\n"
"border-radius: 10px;\n"
"}"));
        label = new QLabel(ExpenseDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 142, 44));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        label_2 = new QLabel(ExpenseDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 150, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));
        label_3 = new QLabel(ExpenseDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 150, 93, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(230, 130, 255);"));

        retranslateUi(ExpenseDialog);

        QMetaObject::connectSlotsByName(ExpenseDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpenseDialog)
    {
        ExpenseDialog->setWindowTitle(QCoreApplication::translate("ExpenseDialog", "Dialog", nullptr));
        Expense_Submit_pushButton->setText(QCoreApplication::translate("ExpenseDialog", "Submit", nullptr));
        Expense_Amount_lineEdit->setPlaceholderText(QCoreApplication::translate("ExpenseDialog", "Enter expense amount", nullptr));
        Expense_Type_lineEdit->setPlaceholderText(QCoreApplication::translate("ExpenseDialog", "Enter expense type", nullptr));
        label->setText(QCoreApplication::translate("ExpenseDialog", "EXPENSE", nullptr));
        label_2->setText(QCoreApplication::translate("ExpenseDialog", "Expense Type:", nullptr));
        label_3->setText(QCoreApplication::translate("ExpenseDialog", "Expense:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpenseDialog: public Ui_ExpenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSEDIALOG_H
