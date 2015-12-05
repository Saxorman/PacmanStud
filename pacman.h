#ifndef PACMAN_H
#define PACMAN_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
class pacman : public QGraphicsItem
{

public:
    pacman();
  //  QRectF boundingRect() const;//область пакмана
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance();//стадия анимации
    void SetPacman_X(int);//установка координаты X
    void SetPacman_Y(int);//установка координаты Y
    void SetDirection(int dir);//установка направления движения
    void SetDeath(int);//установка "смерти"
    bool deadBool;//флаг смерти пакмана

    QPixmap *pac;//картинка

    int Pacman_X,Pancman_Y,x,y,height,width;//координаты пакмана, его высота и ширина
    int direction;//направление
    int animation;//стадия анимации

    ~pacman();
};
#endif // PACMAN_H
