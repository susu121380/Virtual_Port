QT += core gui widgets serialport

TARGET = Virtual_Port
TEMPLATE = app

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Windows GUI app (no console window)
win32:CONFIG += windows
