#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , AddBox(new AddDialog(this))
{
    ui->setupUi(this);

    // Connecting to AddBook PushButton
    connect(ui->Add_pushButton, &QPushButton::clicked, this,
                &MainWindow::on_Add_BookFun);

    // Connecting to AddBook PushButton
    connect(ui->Purchase_pushButton, &QPushButton::clicked, this,
                &MainWindow::on_PurchaseFun)

    // Connecting to AddBookDialog
    connect(AddBox, &AddDialog::BookDetails, this, &MainWindow::OnAddBook);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete AddBox;
}

// To Show the Dialog When Add Button Clicked
void MainWindow::on_Add_BookFun()
{
    AddBox->show();
}

// Book details List
QStringList BookList;
QStringList PriceList;

// functions to add book
void MainWindow::OnAddBook(const QString &name, const QString &price){
    BookList.append(name);
    PriceList.append(price);

    QString msg = "New Book Added Successfully!!";
    QMessageBox::information(this, "Success Message", msg, QMessageBox::Ok);


}

// Purchase Function

