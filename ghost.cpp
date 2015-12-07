#include "ghost.h"

ghost::ghost()
{

   // SkinGhost = new QPixmap;
    SkinGhost.load(":/images/pacLeft.png");

    ghost_X = 100;
    ghost_Y = 150;
    height = 23;
    width = 23;
}

ghost::~ghost()
{

}

QRectF ghost::boundingRect() const
{
    return QRect(ghost_X, ghost_Y, height, width);
}

void ghost::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
     painter->drawPixmap(ghost_X,ghost_Y,height,width,SkinGhost);
}

void ghost::SetGhost_X(int x)
{

}

void ghost::SetGhost_Y(int y)
{

}

