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
    void onTeilnehmerdatenAendern(string email);
    void onTeilnehmerHinzufuegen(Teilnehmer* teilnehmer);
    void onAlsOrganisatorHinzufuegen(string email);
    void onVersionsverlaufAnzeigen(string email);
    void onUpdate();
    void onInit();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void test(string email);

private:
    Ui::view_teilnehmerliste *ui;

    Teilnehmerliste* teilnehmerList;

    void addEingeklapptesFeld(Teilnehmerdaten* daten);
    void addAusgeklapptesFeld(Teilnehmerdaten* daten);
    void removeFeld(string email);
};

#endif // VIEW_TEILNEHMERLISTE_H
