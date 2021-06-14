#ifndef VIEW_PASSWORTAENDERUNG_H
#define VIEW_PASSWORTAENDERUNG_H

#include <QWidget>
#include "Organisator.h"
#include <string>
#include <QString>
#include "Teilnehmerliste.h"

namespace Ui {
class View_Passwortaenderung;
}

class View_Passwortaenderung : public QWidget
{
    Q_OBJECT

public:
    explicit View_Passwortaenderung(QWidget *parent = nullptr, Organisator* teilnehmer =0);
    ~View_Passwortaenderung();
    explicit View_Passwortaenderung(QWidget *parent = nullptr, Teilnehmer* teilnehmer =0);
    void onInit( bool erstanmeldung);

private slots:
    void on_Zurueck_clicked();

    void on_pushButton_clicked();

private:
    Ui::View_Passwortaenderung *ui;
    Organisator* org;
    Teilnehmer* teil;
    bool erstan;
    string altPas;
    QString altPasEingabe;
    string neuPas;
    QString neuPasEingabe;
    QWidget* parent;
    int fall;
};

#endif // VIEW_PASSWORTAENDERUNG_H
