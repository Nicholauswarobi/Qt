#ifndef EXPENSEDIALOG_H
#define EXPENSEDIALOG_H

#include <QDialog>

namespace Ui {
class ExpenseDialog;
}

class ExpenseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExpenseDialog(QWidget *parent = nullptr);
    ~ExpenseDialog();

private:
    Ui::ExpenseDialog *ui;
};

#endif // EXPENSEDIALOG_H
