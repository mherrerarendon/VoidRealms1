#include "addingbuttonsdlg.h"
#include "ui_addingbuttonsdlg.h"

AddingButtonsDlg::AddingButtonsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddingButtonsDlg)
{
    ui->setupUi(this);
}

AddingButtonsDlg::~AddingButtonsDlg()
{
    delete ui;
}
