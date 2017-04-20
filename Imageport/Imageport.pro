#-------------------------------------------------
#
# Project created by QtCreator 2017-02-19T22:59:11
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Imageport

TEMPLATE = app


SOURCES += main.cpp\
    widget.cpp \
    rgb565_1.cpp

HEADERS  += widget.h \
    rgb2bmp.h

FORMS    += widget.ui

RESOURCES += \
    ico.qrc

RC_FILE=icon.rc
