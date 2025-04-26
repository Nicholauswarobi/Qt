#include "recorddialog.h"
#include "ui_recorddialog.h"

RecordDialog::RecordDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RecordDialog)
{
    ui->setupUi(this);
    connect(ui->Record_Fee_pushButton, &QPushButton::clicked, this,
            &RecordDialog::on_Record_Fee_Fun);
}

RecordDialog::~RecordDialog()
{
    delete ui;
}

void RecordDialog::on_Record_Fee_Fun()
{

}

