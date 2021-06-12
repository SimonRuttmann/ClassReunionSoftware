#ifndef VIEW_EINLOGGEN_H
#define VIEW_EINLOGGEN_H

#include <QWidget>

//prÃƒÂ¼fen ob ich noch brauche alles
#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "Teilnehmer.h"
#include "Teilnehmerliste.h"
#include <string>
#include <QString>

namespace Ui {
class View_Einloggen;
}

class View_Einloggen : public QWidget
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
    bool neuesSystem=true; // !!! wie ÃƒÂ¼bergreifend?
    Organisator* org;
    Organisator* Haupt;


private slots:
    void on_pushButton_clicked();

    void on_Login_clicked();

private:
    Ui::View_Einloggen *ui;
    QString passwort;
    QString eMail;
    string passwortString;
    string eMailDatenbank;
    Teilnehmer teilnehmer;

    };

#endif // VIEW_EINLOGGEN_H






