#-------------------------------------------------
#
# Project created by QtCreator 2021-01-08T21:44:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hotel_management_System
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        hotel_management_system.cpp \
    basic_info.cpp \
    system_management.cpp \
    guest_room_management.cpp \
    guest_management.cpp \
    report_management.cpp \
    consumption_management.cpp

HEADERS += \
        hotel_management_system.h \
    basic_info.h \
    system_management.h \
    guest_room_management.h \
    guest_management.h \
    report_management.h \
    consumption_management.h

FORMS += \
        hotel_management_system.ui \
    basic_info.ui \
    system_management.ui \
    guest_room_management.ui \
    guest_management.ui \
    report_management.ui \
    consumption_management.ui

QT += sql
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    buttonimage.qrc
