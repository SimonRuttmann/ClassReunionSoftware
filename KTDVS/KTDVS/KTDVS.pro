QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    Controller_Einloggen.cpp \
    Hauptorganisator.cpp \
    Organisator.cpp \
    Qt_DAO_Teilnehmer.cpp \
    Qt_DAO_Teilnehmerdaten.cpp \
    Teilnehmer.cpp \
    Teilnehmerliste.cpp \
    View_Einloggen.cpp \
    View_ErsterSystemstart.cpp \
    View_Passwortänderung.cpp \
    View_Teilnehmerliste.cpp \
    View_TeilnehmerTeilnehmerHinzufügen.cpp \
    View_Versionsverlauf.cpp \
    View_VersionsverlaufDetailiert.cpp

HEADERS += \
    mainwindow.h \
    Controller_Einloggen.h \
    Hauptorganisator.h \
    Organisator.h \
    Qt_DAO_Teilnehmer.h \
    Qt_DAO_Teilnehmerdaten.h \
    Teilnehmer.h \
    Teilnehmerliste.h \
    View_Einloggen.h \
    View_ErsterSystemstart.h \
    View_Passwortänderung.h \
    View_Teilnehmerliste.h \
    View_TeilnehmerTeilnehmerHinzufügen.h \
    View_Versionsverlauf.h \
    View_VersionsverlaufDetailiert.h \
    I_DAO_Teilnehmer.h \
    I_DAO_Teilnehmerdaten.h
FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
