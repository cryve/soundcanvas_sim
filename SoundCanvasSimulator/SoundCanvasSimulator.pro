#-------------------------------------------------
#
# Project created by QtCreator 2016-01-08T10:37:22
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SoundCanvasSimulator
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    protonectsim.cpp \
    soundcanvas.cpp \

HEADERS += \
    protonectsim.h \
    soundcanvas.h \

include(../drumstick/drumstick.pro)
