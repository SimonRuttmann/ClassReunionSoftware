#ifndef VIEW_TEILNEHMERLISTE_H
#define VIEW_TEILNEHMERLISTE_H

#include <QWidget>
#include "Teilnehmerliste.h"

namespace Ui {
class view_teilnehmerliste;
}

class view_teilnehmerliste : public QWidget
{
    Q_OBJECT

public:
    explicit view_teilnehmerliste(QWidget *parent = nullptr, Teilnehmerliste* teilnehmerliste = nullptr);
    ~view_teilnehmerliste();

    void onAusloggen();
    void onTeilnehmerdatenAendern();
    void onTeilnehmerHinzufuegen();
    void onAlsOrganisatorHinzufuegen();
    void onVersionsverlaufAnzeigen();
    void onUpdate();
    void onInit();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

private:
    Ui::view_teilnehmerliste *ui;

    Teilnehmerliste* teilnehmerList;

    void addEingeklapptesFeld(string name, string email);
    void addAusgeklapptesFeld(string name, string email, string schulname, string adresse, string land, string telefonnummer, string kommentar);
    void removeEingeklapptesFeld(string email);
    void removeAusgeklapptesFeld(string email);
};

#endif // VIEW_TEILNEHMERLISTE_H
