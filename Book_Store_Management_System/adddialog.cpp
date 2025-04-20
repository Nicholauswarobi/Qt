#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDialog)
{
    ui->setupUi(this);

    connect(ui->Add_Book_Button, &QPushButton::clicked, this,
            &AddDialog::on_Add_Book_Button_clicked);
}

AddDialog::~AddDialog()
{
    delete ui;
}



void AddDialog::on_Add_Book_Button_clicked()
{

}

