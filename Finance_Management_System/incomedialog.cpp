#include "incomedialog.h"
#include "ui_incomedialog.h"

IncomeDialog::IncomeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncomeDialog)
{
    ui->setupUi(this);
    connect(ui->Income_Done_pushButton, &QPushButton::clicked, this,
            &IncomeDialog::on_Income_Done_Fun);
}

IncomeDialog::~IncomeDialog()
{
    delete ui;
}

void IncomeDialog::on_Income_Done_Fun()
{
    QString IncomeType = ui->Income_Type_lineEdit->text();
    QString IncomeAmount = ui->Income_Amount_lineEdit->text();

    emit getIncomeValue(IncomeType, IncomeAmount);
}

