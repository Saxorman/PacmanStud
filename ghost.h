#ifndef GHOST_H
#define GHOST_H

#include <QPainter>
#include <QGraphicsItem>



class ghost : public QGraphicsItem
{
public:
    ghost();
    ~ghost();

    QRectF boundingRect() const;//область призрака
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void SetGhost_X(int x);//установка координаты X
    void SetGhost_Y(int y);//установка координаты Y

    QPixmap SkinGhost;
    int ghost_X,ghost_Y, x, y, height,width;
};

#endif // GHOST_H
