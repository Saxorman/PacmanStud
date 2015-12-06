#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "map.h"
#include "pacman.h"
#include <QKeyEvent>


namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    pacman *PACMAN;
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

    QTimer *timer;


    bool moving;
    void pacman_move();

public slots:
    void update();

protected:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::GameWindow *ui;
    QGraphicsScene *scene;
};

#endif // GAMEWINDOW_H
