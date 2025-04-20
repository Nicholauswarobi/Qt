#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStringList"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , AddBox(new AddDialog(this))
{
    ui->setupUi(this);
    connect(ui->Add_pushButton, &QPushButton::clicked, this,
                &MainWindow::on_Add_pushButton_clicked);

    connect(AddBox, &AddDialog::BookDetails, this, &MainWindow::OnAddBook);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete AddBox;
}

// To Show the Dialog When Add Button Clicked
void MainWindow::on_Add_pushButton_clicked()
{
    AddBox->show();
}

// Book details List
QStringList BookList;
QStringList PriceList;

// functions to add book
void MainWindow::OnAddBook(const QString &name, const QString &price){

}

