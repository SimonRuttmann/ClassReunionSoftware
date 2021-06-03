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
    Organisator.cpp \
    Qt_DAO_Teilnehmer.cpp \
    Qt_DAO_Teilnehmerdaten.cpp \
    Teilnehmer.cpp \
    Teilnehmerliste.cpp \
    Teilnehmerdaten.cpp \
    View_Einloggen.cpp \
    View_ErsterSystemstart.cpp \
    View_Passwortänderung.cpp \
    View_TeilnehmerTeilnehmerHinzufügen.cpp \
    view_teilnehmerliste.cpp \
    view_versionsverlauf.cpp \
    view_versionsverlauf.cpp \
    view_versionsverlaufdetailliert.cpp

HEADERS += \
    Adresse.h \
    Datum.h \
    mainwindow.h \
    Controller_Einloggen.h \
    Organisator.h \
    Qt_DAO_Teilnehmer.h \
    Qt_DAO_Teilnehmerdaten.h \
    Teilnehmer.h \
    Teilnehmerliste.h \
    View_Einloggen.h \
    View_ErsterSystemstart.h \
    View_Passwortänderung.h \
    View_TeilnehmerTeilnehmerHinzufügen.h \
    I_DAO_Teilnehmer.h \
    I_DAO_Teilnehmerdaten.h\
    Teilnehmerdaten.h \
    view_teilnehmerliste.h \
    view_versionsverlauf.h \
    view_versionsverlauf.h \
    view_versionsverlaufdetailliert.h
FORMS += \
    mainwindow.ui \
    view_teilnehmerliste.ui \
    view_versionsverlauf.ui \
    view_versionsverlaufdetailliert.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
