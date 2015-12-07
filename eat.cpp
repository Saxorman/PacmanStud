#include "eat.h"

Eat::Eat()
{
    ballx=0;
    bally=0;
    ballw=5;
    ballh=5;

    generatePointPixmap();
}

QRectF Eat::boundingRect() const
{
    return QRect(0, 0, 450, 550);
}

void Eat::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    for(int i=0;i<points.size();i++){
        painter->drawPixmap( points[i].x(), points[i].y(), ballpix );
    }
}

void Eat::drawballs(QPainter *painter)
{
    for(int i=0;i<points.size();i++){
        painter->drawPixmap( points[i].x(), points[i].y(), ballpix );
    }
}

void Eat::setpoints(QVector<QPoint> points)
{
    this->points.clear();
    this->points=points;
}

void Eat::removepoint(QPoint p)
{

}

void Eat::generatePointPixmap()
{
    QRect bounds = QRect(0, 0, 3, 3);

    QPainter painter;

    ballpix = QPixmap(bounds.size());
    ballpix.fill(Qt::transparent);
    painter.begin(&ballpix);

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::white);
    painter.drawEllipse(0, 0, 3, 3);

}
