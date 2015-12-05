#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>

namespace Ui {
class StartScreen;
}

class StartScreen : public QDialog
{
    Q_OBJECT

public:
    explicit StartScreen(QWidget *parent = 0);
    ~StartScreen();

private slots:
    void on_Button_StartGame_clicked();

private:
    Ui::StartScreen *ui;
};

#endif // STARTSCREEN_H
