#ifndef VIEW_EINLOGGEN_H
#define VIEW_EINLOGGEN_H

#include <QWidget>

//pruefen ob ich noch brauche alles
#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "Teilnehmer.h"
#include "Teilnehmerliste.h"
#include <string>
#include <QString>
#include "View_TeilnehmerTeilnehmerHinzufuegen.h"
#include "View_Teilnehmerliste.h"

namespace Ui {
class View_Einloggen;
}

class View_Einloggen : public QWidget
{
    Q_OBJECT

public:
    explicit View_Einloggen(QWidget *parent = nullptr, bool isNeu = false, bool direkterStart=false);
    ~View_Einloggen();

    Teilnehmer *subjekt;
    Teilnehmerliste *all;

    void onEinloggen();
    void onSchliessen();
    void onErstelleHauptorganisator();// buttontext
    void onInit();

    Organisator* org;
    Organisator* Haupt;

private slots:
    void on_Login_clicked();

    void on_zurueck_clicked();

private:
    QWidget* parent;
    bool isNeu;
    Ui::View_Einloggen *ui;
    QString passwort;
    QString eMail;
    string passwortString;
    string eMailString;
    Teilnehmer teilnehmer;

    };

#endif // VIEW_EINLOGGEN_H






