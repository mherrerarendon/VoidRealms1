#ifndef PLAYBACKDLG_H
#define PLAYBACKDLG_H

#include <QDialog>

namespace Ui {
class PlaybackDlg;
}

class PlaybackDlg : public QDialog
{
    Q_OBJECT

public:
    explicit PlaybackDlg(QWidget *parent = 0);
    ~PlaybackDlg();

private:
    Ui::PlaybackDlg *ui;
};

#endif // PLAYBACKDLG_H
