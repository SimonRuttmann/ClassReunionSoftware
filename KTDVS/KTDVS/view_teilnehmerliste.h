#ifndef VIEW_TEILNEHMERLISTE_H
#define VIEW_TEILNEHMERLISTE_H

#include <QWidget>
#include "Teilnehmerliste.h"

namespace Ui {
class View_Teilnehmerliste;
}

class View_Teilnehmerliste : public QWidget
{
    Q_OBJECT

public:
    explicit View_Teilnehmerliste(QWidget *parent = nullptr, Teilnehmerliste* teilnehmerliste = nullptr);
    ~View_Teilnehmerliste();

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
    Ui::View_Teilnehmerliste *ui;

    Teilnehmerliste* teilnehmerList;

    void addEingeklapptesFeld(Teilnehmerdaten* daten);
    void addAusgeklapptesFeld(Teilnehmerdaten* daten);
    void addAusgeklapptesFeld(string test);
};

#endif // VIEW_TEILNEHMERLISTE_H
