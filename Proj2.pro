#-------------------------------------------------
#
# Project created by QtCreator 2016-12-02T16:06:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proj2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    readrite.cpp

HEADERS  += mainwindow.h \
    vector.h \
    readrite.h

FORMS    += mainwindow.ui \

OTHER_FILES += users.txt

RESOURCES += \
    images.qrc
