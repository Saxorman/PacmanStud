#include "pacman.h"

pacman::pacman()
{
    Pacman_X=200;
    Pacman_Y=200;
    x=10;
    y=10;
    height = 23;
    width = 23;
    animation = 0;

    direction=1;
   // pac = new QPixmap;
    SkinDown.load(":/images/pacdown1.png");
    SkinDown2.load(":/images/pacdown2.png");
    SkinUp.load(":/images/pacup1.png");
    SkinUp2.load(":/images/pacup2.png");
    SkinLeft.load(":/images/pacleft1.png");
    SkinLeft2.load(":/images/pacleft2.png");
    SkinRight.load(":/images/pacright1.png");
    SkinRight2.load(":/images/pacright2.png");
}

QRectF pacman::boundingRect() const
{
    return QRect(Pacman_X, Pacman_Y, height, width);
}

void pacman::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    switch(direction){
        case 1://влево
            if(animation < 1)
                painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinLeft);
            else
            {
                painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinLeft2);
                if(animation == 2)
                animation = -2;
            }
            break;
        case 4://вправо
        if(animation < 1)
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinRight);
        else
        {
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinRight2);
            if(animation == 2)
            animation = -2;
        }
            break;
        case 3://вниз
        if(animation < 1)
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinDown);
        else
        {
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinDown2);
            if(animation == 2)
            animation = -2;
        }
            break;
        case 2://вверх
        if(animation < 1)
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinUp);
        else
        {
            painter->drawPixmap(Pacman_X,Pacman_Y,height,width,SkinUp2);
            if(animation == 2)
            animation = -2;
        }
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
