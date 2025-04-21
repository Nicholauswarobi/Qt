#include "submitdialog.h"
#include "ui_submitdialog.h"

SubmitDialog::SubmitDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SubmitDialog)
{
    ui->setupUi(this);
    connect(ui->Submit_Fee_pushButton, &QPushButton::clicked, this,
            &SubmitDialog::on_Submit_Fee_Fun);
}

SubmitDialog::~SubmitDialog()
{
    delete ui;
}

void SubmitDialog::on_Submit_Fee_Fun()
{
    QString rollNo = ui->RollNo_lineEdit->text();
    QString feeAmount = ui->FeeAmount_lineEdit->text();

    emit getFeeValue(rollNo, feeAmount);
}

