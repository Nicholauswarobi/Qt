#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , AddBox(new AddDialog(this))
    , PurchaseBox(new PurchaseDialog(this))
{
    ui->setupUi(this);

    // Connecting to AddBook PushButton
    connect(ui->Add_pushButton, &QPushButton::clicked, this,
                &MainWindow::on_Add_BookFun);

    // Connecting to AddBook PushButton
    connect(ui->Purchase_pushButton, &QPushButton::clicked, this,
            &MainWindow::on_PurchaseFun);

    // Connecting to AddBookDialog
    connect(AddBox, &AddDialog::BookDetails, this, &MainWindow::OnAddBook);

    // Connecting to PurchaseBookDialog
    connect(PurchaseBox, &PurchaseDialog::PurchaseBookDetails, this,
            &MainWindow::OnPurchaseBook);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete AddBox;
    delete PurchaseBox;
}

// To Show the Dialog When Add Button Clicked
void MainWindow::on_Add_BookFun()
{
    AddBox->show();
}

// To Show the Dialog When Add Button Clicked
void MainWindow::on_PurchaseFun(){

    PurchaseBox->show();
}

// Book details List
QStringList BookList;
QStringList PriceList;
bool found = false;

// functions to add book
void MainWindow::OnAddBook(const QString &name, const QString &price){
    BookList.append(name);
    PriceList.append(price);

    QString msg = "New Book Added Successfully!!";
    QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);


}


// functions to purchase book
void MainWindow::OnPurchaseBook(const QString &Pname, const QString &PQuantity){
    for(int i = 0; i < BookList.length(); i++){
        if (Pname == BookList[i]){
            found = true;

            int Purchase_quantity = PQuantity.toInt();
            QString BPrice = PriceList[i];
            int Book_Price = BPrice.toInt();

            int Bill = Book_Price * Purchase_quantity;
            QString Total_bill = QString::number(Bill);

            QString msg = "Purchased Book Successfully!!" + "\n" + "Total Bill: " +
                            Total_bill;
            QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);

        }
    }
    if (!found){
        QString msg = "Purchasing failed or Book not found!!";
        QMessageBox::warning(this, "Success Message", msg, QMessageBox::Ok);
    }

}



