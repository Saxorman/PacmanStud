#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "highscores.h"

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    QDialog::setWindowFlags(Qt::WindowCloseButtonHint);
    ui->setupUi(this);
    //инициализация сцены
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);


    scene->setSceneRect(0,0,640,480);
    ui->graphicsView->setSceneRect(scene->sceneRect());
    ui->frame->hide();
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_start_button_2_clicked()
{
    ui->frame->show();
    ui->frame_2->hide();
}

void GameWindow::on_stop_button_clicked()
{
    ui->frame_2->show();
    ui->frame->hide();
}

void GameWindow::on_pushButton_clicked()
{
    HighScores *scores = new HighScores;
    scores->show();
}
