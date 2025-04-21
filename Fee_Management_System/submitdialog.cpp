#include "submitdialog.h"
#include "ui_submitdialog.h"

SubmitDialog::SubmitDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SubmitDialog)
{
    ui->setupUi(this);
}

SubmitDialog::~SubmitDialog()
{
    delete ui;
}
