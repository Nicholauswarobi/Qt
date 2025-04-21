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

signals:
    void PurchaseBookDetails(const QString &Pname, const QString &PQuantity);

private slots:
    void on_Purchase_Book_Fun();

private:
    Ui::PurchaseDialog *ui;
};

#endif // PURCHASEDIALOG_H
