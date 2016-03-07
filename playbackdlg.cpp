#include "playbackdlg.h"
#include "ui_playbackdlg.h"

PlaybackDlg::PlaybackDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaybackDlg)
{
    ui->setupUi(this);
}

PlaybackDlg::~PlaybackDlg()
{
    delete ui;
}
