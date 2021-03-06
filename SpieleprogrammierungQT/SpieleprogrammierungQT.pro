QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    combineitemsstate.cpp \
    dropstate.cpp \
    fasttravelstate.cpp \
    field.cpp \
    game.cpp \
    idlestate.cpp \
    initialLoadGameState.cpp \
    inputparser.cpp \
    inventory.cpp \
    item.cpp \
    level.cpp \
    loadgamestate.cpp \
    main.cpp \
    mainwindow.cpp \
    newgamestate.cpp \
    pickupstate.cpp \
    player.cpp \
    savegamestate.cpp \
    savepoint.cpp \
    states.cpp \
    testhelper.cpp \
    useitemstate.cpp

HEADERS += \
    combineitemsstate.h \
    dropstate.h \
    fasttravelstate.h \
    field.h \
    game.h \
    idlestate.h \
    initialLoadGameState.h \
    inputparser.h \
    inventory.h \
    istates.h \
    item.h \
    level.h \
    loadgamestate.h \
    mainwindow.h \
    newgamestate.h \
    pickupstate.h \
    player.h \
    savegamestate.h \
    savepoint.h \
    states.h \
    testhelper.h \
    useitemstate.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
