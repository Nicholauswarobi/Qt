#ifndef PURCHASEDIALOG_H
#define PURCHASEDIALOG_H

#include <QDialog>

namespace Ui {
class PurchaseDialog;
}

class PurchaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseDialog(QWidget *parent = nullptr);
    ~PurchaseDialog();

private slots:
    void on_Purchase_Book_Button_clicked();

private:
    Ui::PurchaseDialog *ui;
};

#endif // PURCHASEDIALOG_H
