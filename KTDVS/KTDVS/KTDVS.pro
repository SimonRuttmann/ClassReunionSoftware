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
    View_Einloggen_test.cpp \
    View_Erstersystemstart_test.cpp \
    View_Passwortaenderung_test.cpp \
    main.cpp \
    mainwindow.cpp \
    Controller_Einloggen.cpp \
    Organisator.cpp \
    Teilnehmer.cpp \
    Teilnehmerliste.cpp \
    Teilnehmerdaten.cpp \
    view_teilnehmerliste.cpp \
    view_teilnehmerteilnehmerhinzufuegen.cpp \
    view_versionsverlauf.cpp \
    view_versionsverlaufdetailliert.cpp

HEADERS += \
    Adresse.h \
    DAO_QT_Teilnehmer.h \
    DAO_QT_Teilnehmerdaten.h \
    Datum.h \
    View_Einloggen_test.h \
    View_Erstersystemstart_test.h \
    View_Passwortaenderung_test.h \
    mainwindow.h \
    Controller_Einloggen.h \
    Organisator.h \
    Teilnehmer.h \
    Teilnehmerliste.h \
    I_DAO_Teilnehmer.h \
    I_DAO_Teilnehmerdaten.h\
    Teilnehmerdaten.h \
    view_teilnehmerliste.h \
    view_teilnehmerteilnehmerhinzufuegen.h \
    view_versionsverlauf.h \
    view_versionsverlaufdetailliert.h
FORMS += \
    View_Einloggen_test.ui \
    View_Erstersystemstart_test.ui \
    View_Passwortaenderung_test.ui \
    mainwindow.ui \
    view_teilnehmerliste.ui \
    view_teilnehmerteilnehmerhinzufuegen.ui \
    view_versionsverlauf.ui \
    view_versionsverlaufdetailliert.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
