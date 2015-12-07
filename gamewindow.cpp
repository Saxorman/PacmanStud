#include "gamewindow.h"
#include "ui_gamewindow.h"



GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    /////////////@@///////////////инициализация сцены
    /////////////@@///////////////Zamyatin
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);


    scene->setSceneRect(0,0,450,480);
    ui->graphicsView->setSceneRect(scene->sceneRect());

    PACMAN = new pacman;
//    GHOST_1 = new ghost;


    scene->addItem(GHOST_1);
 //   scene->addItem(PACMAN);

    ui->graphicsView->show();
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this, SLOT(update()));
    moving = false;
    timer->start(60);
    /////////////@@////////////////
    /////////////@@////////////////
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::pacman_move()
{
    //изменение координат пакмана в зависимости от его направления
    switch(PACMAN->direction){

    case 1:
            PACMAN->SetPacman_X(PACMAN->Pacman_X-5);
            PACMAN->SetPacman_Y(PACMAN->Pacman_Y);
        break;
    case 2:
            PACMAN->SetPacman_X(PACMAN->Pacman_X);
            PACMAN->SetPacman_Y(PACMAN->Pacman_Y-5);
        break;
    case 3:
            PACMAN->SetPacman_X(PACMAN->Pacman_X);
            PACMAN->SetPacman_Y(PACMAN->Pacman_Y+5);
        break;
    case 4:
            PACMAN->SetPacman_X(PACMAN->Pacman_X+5);
            PACMAN->SetPacman_Y(PACMAN->Pacman_Y);
        break;
    }
}

void GameWindow::update()
{
    //обновление игрового поля
    pacman_move();
    scene->update();
    this->setFocus();
}

void GameWindow::keyPressEvent(QKeyEvent *event)
{
        switch(event->key())
        {
        case Qt::Key_Left:
            if(!moving)
               PACMAN->direction = 1;
            break;

        case Qt::Key_Right:

            if(!moving)
                PACMAN->direction = 4;
            break;

        case Qt::Key_Down:
            if(!moving)
                PACMAN->direction = 3;
            break;

        case Qt::Key_Up:
            if(!moving)
                PACMAN->direction = 2;
            break;
        }
}
