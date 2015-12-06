#include "pacman.h"

pacman::pacman()
{
    Pacman_X=200;
    Pacman_Y=200;
    x=10;
    y=10;
    height = 23;
    width = 23;
    animation = 4;

// This will load pacman images
    direction=4;
   // pac = new QPixmap;
    SkinDown.load(":/images/pacDown.png");
    SkinUp.load(":/images/pacUp.png");
    SkinLeft.load(":/images/pacLeft.png");
    SkinRight.load(":/images/pacRight.png");
}

QRectF pacman::boundingRect() const
{
    return QRect(Pacman_X, Pacman_Y, height, width);
}

void pacman::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    switch(direction){
        case 1://влево
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinLeft);
            break;
        case 4://вправо
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinRight);
            break;
        case 3://вниз
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinDown);
            break;
        case 2://вверх
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinUp);
            break;
    }
}

void pacman::advance()
{

}

void pacman::SetPacman_X(int x)
{
    Pacman_X = x;
}

void pacman::SetPacman_Y(int y)
{
    Pacman_Y = y;
}

void pacman::SetDirection(int dir)
{

}

void pacman::SetDeath(int)
{

}

pacman::~pacman()
{

}
