#ifndef VIEW_PASSWORTAENDERUNG_H
#define VIEW_PASSWORTAENDERUNG_H

#include <QWidget>
#include "Organisator.h"
#include <string>
#include <QString>

namespace Ui {
class View_Passwortaenderung;
}

class View_Passwortaenderung : public QWidget
{
    Q_OBJECT

public:
    explicit View_Passwortaenderung(QWidget *parent = nullptr, Organisator* teilnehmer =0);
    ~View_Passwortaenderung();

    void onInit(Organisator * OrgMitNeuPas, bool erstanmeldung);

private slots:
    void on_Zurueck_clicked();

    void on_pushButton_clicked();

private:
    Ui::View_Passwortaenderung *ui;
    Organisator* org;
    bool erstan;
    string altPas;
    QString altPasEingabe;
    string neuPas;
    QString neuPasEingabe;
};

#endif // VIEW_PASSWORTAENDERUNG_H
