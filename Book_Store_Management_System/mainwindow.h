#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adddialog.h"
#include "purchasedialog.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // For Adding book
    void on_Add_BookFun();
    void OnAddBook(const QString &name, const QString &price);

    // For Purchasing book
    void on_PurchaseFun();
    void OnPurchaseBook(const QString &Pname, const QString &PQuantity);

private:
    Ui::MainWindow *ui;
    AddDialog *AddBox;
    PurchaseDialog *PurchaseBox;

};
#endif // MAINWINDOW_H
