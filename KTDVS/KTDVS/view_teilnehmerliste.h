#ifndef VIEW_TEILNEHMERLISTE_H
#define VIEW_TEILNEHMERLISTE_H

#include <QWidget>
#include "Teilnehmerliste.h"
#include "Teilnehmer.h"
#include "View_Versionsverlauf.h"
#include "View_TeilnehmerTeilnehmerHinzufuegen.h"


namespace Ui {
class View_Teilnehmerliste;
}

class View_Teilnehmerliste : public QWidget
{
    Q_OBJECT

public:
    explicit View_Teilnehmerliste(QWidget *parent = nullptr);
    ~View_Teilnehmerliste();

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


    void on_Teilnehmertabelle_cellClicked(int row, int column);

private:
    Ui::View_Teilnehmerliste *ui;

    QTableWidget* listeTeilnehmer;

    Teilnehmerliste* teilnehmerList;
    Teilnehmer* ausgewaehlerTeilnehmer;
    QWidget* vater;
    void addFeld(Teilnehmerdaten* daten);
};

#endif // VIEW_TEILNEHMERLISTE_H
