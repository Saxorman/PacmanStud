#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "map.h"
#include "pacman.h"
#include "ghost.h"
#include <QKeyEvent>
#include "eat.h"
#include "bonus.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    pacman *PACMAN;
    ghost *GHOST_1, *GHOST_2, *GHOST_3, *GHOST_4;
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    Map *map_p;
    Eat *eat;
    Bonus *bonus;

private slots:
    void on_start_button_2_clicked();

    void on_stop_button_clicked();

    void on_pushButton_clicked();

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
