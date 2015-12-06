//#include "startscreen.h"
#include "gamewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //StartScreen w;
    //w.show();
    GameWindow w;
    w.show();


    return a.exec();
}
