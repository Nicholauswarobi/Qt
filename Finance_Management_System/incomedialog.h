#ifndef INCOMEDIALOG_H
#define INCOMEDIALOG_H

#include <QDialog>

namespace Ui {
class IncomeDialog;
}

class IncomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit IncomeDialog(QWidget *parent = nullptr);
    ~IncomeDialog();

signals:
    void getIncomeValue(const QString &Itype, const QString &IAmount);

private slots:
    void on_Income_Done_Fun();

private:
    Ui::IncomeDialog *ui;
};

#endif // INCOMEDIALOG_H
