QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DAO_QT_Teilnehmer.cpp \
    DAO_QT_Teilnehmerdaten.cpp \
    View_Einloggen.cpp \
    View_Erstersystemstart.cpp \
    View_Passwortaenderung.cpp \
    View_TeilnehmerTeilnehmerHinzufuegen.cpp \
    View_Teilnehmerliste.cpp \
    View_Versionsverlauf.cpp \
    View_VersionsverlaufDetailliert.cpp \
    main.cpp \
    mainwindow.cpp \
    Controller_Einloggen.cpp \
    Organisator.cpp \
    Teilnehmer.cpp \
    Teilnehmerliste.cpp \
    Teilnehmerdaten.cpp

HEADERS += \
    Adresse.h \
    DAO_QT_Teilnehmer.h \
    DAO_QT_Teilnehmerdaten.h \
    Datum.h \
    View_Einloggen.h \
    View_Erstersystemstart.h \
    View_Passwortaenderung.h \
    View_TeilnehmerTeilnehmerHinzufuegen.h \
    View_Teilnehmerliste.h \
    View_Versionsverlauf.h \
    View_VersionsverlaufDetailliert.h \
    mainwindow.h \
    Controller_Einloggen.h \
    Organisator.h \
    Teilnehmer.h \
    Teilnehmerliste.h \
    I_DAO_Teilnehmer.h \
    I_DAO_Teilnehmerdaten.h\
    Teilnehmerdaten.h
FORMS += \
    View_Einloggen.ui \
    View_Erstersystemstart.ui \
    View_Passwortaenderung.ui \
    View_TeilnehmerTeilnehmerHinzufuegen.ui \
    View_Teilnehmerliste.ui \
    View_Versionsverlauf.ui \
    View_VersionsverlaufDetailliert.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
