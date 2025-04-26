#include "expensedialog.h"
#include "ui_expensedialog.h"

ExpenseDialog::ExpenseDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExpenseDialog)
{
    ui->setupUi(this);
    connect(ui->Expense_Submit_pushButton, &QPushButton::clicked, this,
            &ExpenseDialog::on_Expense_Submit_Fun);
}

ExpenseDialog::~ExpenseDialog()
{
    delete ui;
}

void ExpenseDialog::on_Expense_Submit_Fun()
{
    QString ExpenseType = ui->Expense_Type_lineEdit->text();
    QString ExpenseAmount = ui->Expense_Amount_lineEdit->text();

    emit getExpenseValue(ExpenseType, ExpenseAmount);

    ui->Expense_Type_lineEdit->clear();
    ui->Expense_Amount_lineEdit->clear();
}

