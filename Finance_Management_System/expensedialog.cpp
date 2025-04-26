#include "expensedialog.h"
#include "ui_expensedialog.h"

ExpenseDialog::ExpenseDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExpenseDialog)
{
    ui->setupUi(this);
}

ExpenseDialog::~ExpenseDialog()
{
    delete ui;
}
