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
        startscreen.cpp \
    gamewindow.cpp \
    map.cpp

HEADERS  += startscreen.h \
    gamewindow.h \
    map.h

FORMS    += startscreen.ui
