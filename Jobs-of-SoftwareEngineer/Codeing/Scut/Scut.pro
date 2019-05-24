#-------------------------------------------------
#
# Project created by QtCreator 2019-05-23T20:05:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scut
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    signup.cpp \
    student.cpp \
    teacher.cpp \
    studentab.cpp \
    interface.cpp

HEADERS  += login.h \
    signup.h \
    student.h \
    teacher.h \
    studentab.h \
    interface.h

FORMS    += login.ui \
    signup.ui \
    student.ui \
    teacher.ui

RESOURCES += \
    resource.qrc