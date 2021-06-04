#ifndef VIEW_EINLOGGEN_H
#define VIEW_EINLOGGEN_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "Teilnehmer.h"
#include "Teilnehmerliste.h"
#include <string>

namespace Ui {
class View_Einloggen;
}

class View_Einloggen : public QMainWindow
{
    Q_OBJECT

public:
    explicit View_Einloggen(QWidget *parent = nullptr);
    ~View_Einloggen();
    Teilnehmer *subjekt;
    Teilnehmerliste *all;

    void onEinloggen();
    void onSchliessen();
    void onErstelleHauptorganisator();// buttontext
    void onInit();
    bool neuesSystem=true; // !!! wie übergreifend?


private:
    Ui::View_Einloggen *ui;
    //QLineEdit* email;
    //QLineEdit* passwort;
    //QPushButton login;
    //QPushButton zurueck;
    QString passwort;
    QString eMail;
    string passwortString;
    string eMailDatenbank;
    Teilnehmer teilnehmer;

};

#endif // VIEW_EINLOGGEN_H



