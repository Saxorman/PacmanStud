#ifndef BONUS_H
#define BONUS_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Bonus : public QGraphicsItem
{
public:
    Bonus();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setpoints(QVector<QPoint> points);
    void drawballs(QPainter *painter);
    void removepoint(QPoint p);

    void generatePointPixmap();
    void changeGeometry() { prepareGeometryChange(); }

    int ballx,bally;
    int ballw,ballh;
    QVector<QPoint> points;
    QPixmap pBallPix;
};

#endif // BONUS

