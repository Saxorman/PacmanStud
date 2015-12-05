#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    //инициализация сцены
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);


    scene->setSceneRect(0,0,640,480);
    ui->graphicsView->setSceneRect(scene->sceneRect());


}

GameWindow::~GameWindow()
{
    delete ui;
}
