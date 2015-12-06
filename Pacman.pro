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
    highscores.cpp

HEADERS  += \
    map.h \
    gamewindow.h \
    highscores.h

FORMS    += \
    gamewindow.ui \
    highscores.ui
