#ifndef PACMAN_H
#define PACMAN_H

#include <QPainter>
#include <QPixmap>
#include <QGraphicsItem>
#include <QGraphicsScene>


class pacman : public QGraphicsItem
{

public:
    pacman();
    QRectF boundingRect() const;//область пакмана
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance();//стадия анимации
    void SetPacman_X(int x);//установка координаты X
    void SetPacman_Y(int y);//установка координаты Y
    void SetDirection(int dir);//установка направления движения
    void SetDeath(int);//установка "смерти"
    bool deadBool;//флаг смерти пакмана

    QPixmap SkinLeft,SkinRight,SkinUp,SkinDown, SkinLeft2,SkinRight2,SkinUp2,SkinDown2;//картинка

    int Pacman_X,Pacman_Y,x,y,height,width;//координаты пакмана, его высота и ширина
    int direction;//направление
    int animation;//стадия анимации

    ~pacman();
};
#endif // PACMAN_H
