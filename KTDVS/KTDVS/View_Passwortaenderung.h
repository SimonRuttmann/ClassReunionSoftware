#ifndef VIEW_PASSWORTAENDERUNG_H
#define VIEW_PASSWORTAENDERUNG_H

#include <QMainWindow>
#include <QLineEdit>
#include <QButtonGroup>
#include <string>

#include "Organisator.h" // für passworabfrage
using namespace std;

namespace Ui {
class View_Passwortaenderung;
}

class View_Passwortaenderung : public QMainWindow
{
    Q_OBJECT

public:
    explicit View_Passwortaenderung(QWidget *parent = nullptr);
    ~View_Passwortaenderung();

    void onAbbrechen();

    void onInit();
    bool erstesAnmelden = false;

private slots:
    void on_pushButton_clicked(); // Zurück

    void on_pushButton_2_clicked(); //Speichern

    void on_Zueck_Button_clicked();

    void on_Speichern_Button_clicked();

private:
    Ui::View_Passwortaenderung *ui;
    //QLineEdit* altesPasswort;
    //QLineEdit* neuesPasswort;
    //QButtonGroup speichern;
    string altespassNormString;
    QString altesPasswortEingabe;
    QString altesPasswortDatenbank;
    QString neuesPasswort;
    Organisator angemeldeterOrganisator;
    void Fensterwechsel(Organisator org, string zurueckZu);
};

#endif // VIEW_PASSWORTAENDERUNG_H
