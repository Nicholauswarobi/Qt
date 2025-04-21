#include "purchasedialog.h"
#include "ui_purchasedialog.h"

PurchaseDialog::PurchaseDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PurchaseDialog)
{
    ui->setupUi(this);
    connect(ui->Purchase_Book_Button, &QPushButton::clicked, this,
            &PurchaseDialog::on_Purchase_Book_Fun);
}

PurchaseDialog::~PurchaseDialog()
{
    delete ui;
}

void PurchaseDialog::on_Purchase_Book_Fun()
{
    QString PurBookName = ui->Purchase_BookName_lineEdit->text();
    QString PurQuantity = ui->BookQuantity_lineEdit->text();

    emit PurchaseBookDetails(PurBookName, PurQuantity);
}

