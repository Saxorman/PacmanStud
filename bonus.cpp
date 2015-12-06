#include "bonus.h"

Bonus::Bonus()
{
    ballx=0;
    bally=0;
    ballw=5;
    ballh=5;

    generatePointPixmap();
}

QRectF Bonus::boundingRect() const
{
    return QRect(0, 0, 450, 550);
}

void Bonus::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

// drawing each independat ball
    for(int i=0;i<points.size();i++){
        painter->drawPixmap(points[i].x()-5, points[i].y()-5, pBallPix);
    }
}

void Bonus::setpoints(QVector<QPoint> points)
{
    // clears the points the creates new so there isn't double the amount
    this->points.clear();
    this->points=points;
}

void Bonus::drawballs(QPainter *painter)
{
    //Draws the Powerballs onto the screen
    for(int i=0;i<points.size();i++){
        painter->drawPixmap(points[i].x()-5, points[i].y()-5, pBallPix);
    }
}

void Bonus::generatePointPixmap()
{
    QRect bounds = QRect(0, 0, 10, 10);
    QPainter painter;


    pBallPix = QPixmap(bounds.size());
    pBallPix.fill(Qt::transparent);
    painter.begin(&pBallPix);

    QPen pen=QPen(Qt::yellow);

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(pen);
    painter.setBrush(Qt::red);
    painter.drawEllipse(0, 0, 10, 10);
}
