#include "ghost.h"

ghost::ghost()
{

   // SkinGhost = new QPixmap;
    SkinGhost1.load(":/images/ghostleft1.png");
    SkinGhost2.load(":/images/ghostleftblue1.png");
    SkinGhost3.load(":/images/ghostleftorange1.png");
    SkinGhost4.load(":/images/ghostleftred1.png");
    ghost_X = 100;
    ghost_Y = 150;
    height = 30;
    width = 30;
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
     painter->drawPixmap(ghost_X,ghost_Y,height,width,SkinGhost1);
}

void ghost::SetGhost_X(int x)
{
    ghost_X = x;
}

void ghost::SetGhost_Y(int y)
{
    ghost_Y = y;
}

