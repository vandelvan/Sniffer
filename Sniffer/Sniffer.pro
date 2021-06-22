QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    conversor.cpp \
    main.cpp \
    mainwindow.cpp \
    reader.cpp \
    splitter.cpp

HEADERS += \
    conversor.h \
    mainwindow.h \
    reader.h \
    splitter.h

FORMS += \
    mainwindow.ui

RC_FILE = SnifferIco.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


LIBS += -L$$PWD/npcap-sdk-1.07/Lib/x64 -lwpcap -lPacket

INCLUDEPATH += $$PWD/npcap-sdk-1.07/Include
DEPENDPATH += $$PWD/npcap-sdk-1.07/Include
