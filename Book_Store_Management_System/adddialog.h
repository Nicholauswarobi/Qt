#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = nullptr);
    ~AddDialog();

    void BookDetails(const QString &name, const QString &price);

private slots:
    void on_pushButton_clicked();

    void on_Add_Book_Button_clicked();

private:
    Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
