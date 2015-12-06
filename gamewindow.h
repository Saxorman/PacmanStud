#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include "map.h"
#include "eat.h"
#include "bonus.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    Map *map_p;
    Eat *eat;
    Bonus *bonus;

private slots:
    void on_start_button_2_clicked();

    void on_stop_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::GameWindow *ui;
    QGraphicsScene *scene;
};

#endif // GAMEWINDOW_H
