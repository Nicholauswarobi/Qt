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

// Book details List
QStringList BookList;
QStringList PriceList;

void MainWindow::on_Add_pushButton_clicked()
{
    AddBox->show();
}

// functions to add book
void MainWindow::OnAddBook(const QString &name, const QString &price){

}

