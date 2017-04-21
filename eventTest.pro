#-------------------------------------------------
#
# Project created by QtCreator 2017-04-10T10:26:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = eventTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myevnet.cpp \
    userthread.cpp

HEADERS  += mainwindow.h \
    myevnet.h \
    userthread.h

FORMS    += mainwindow.ui
