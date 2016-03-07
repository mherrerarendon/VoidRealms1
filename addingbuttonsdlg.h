#ifndef ADDINGBUTTONSDLG_H
#define ADDINGBUTTONSDLG_H

#include <QDialog>

namespace Ui {
class AddingButtonsDlg;
}

class AddingButtonsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddingButtonsDlg(QWidget *parent = 0);
    ~AddingButtonsDlg();

private:
    Ui::AddingButtonsDlg *ui;
};

#endif // ADDINGBUTTONSDLG_H
