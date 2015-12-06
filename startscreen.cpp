#include "startscreen.h"
#include "ui_startscreen.h"
#include "gamewindow.h"

StartScreen::StartScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScreen)
{
    ui->setupUi(this);
}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::on_Button_StartGame_clicked()
{
    GameWindow *GameW = new GameWindow;
    GameW->show();
    this->close();
}
