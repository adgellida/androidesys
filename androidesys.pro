#-------------------------------------------------
#
# Project created by QtCreator 2014-12-17T12:13:28
#
#-------------------------------------------------

QT       += core gui
QT       += opengl
#QT += androidextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = androidesys
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
#  toolbartab.cpp \
#    repairtab.cpp \
#   systemtab.cpp \
    tweakstab.cpp \
#    installtab.cpp \
    about.cpp \
#    services.cpp \
    updatezone.cpp \
    tutorial.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    androidesys.qrc

DISTFILES += \
    android-sources/AndroidManifest.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources
