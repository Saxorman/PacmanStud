#-------------------------------------------------
#
# Project created by QtCreator 2015-12-05T19:44:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pacman
TEMPLATE = app


SOURCES += main.cpp\
    map.cpp \
    gamewindow.cpp \
    pacman.cpp \
    ghost.cpp\
    highscores.cpp \
    eat.cpp \
    bonus.cpp

HEADERS  += \
    map.h \
    gamewindow.h \
    pacman.h \
    ghost.h\
    highscores.h \
    eat.h \
    bonus.h

FORMS    += startscreen.ui \
    gamewindow.ui\
    highscores.ui

RESOURCES += \
    images.qrc
