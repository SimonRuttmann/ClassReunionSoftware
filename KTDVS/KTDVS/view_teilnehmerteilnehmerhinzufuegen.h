#ifndef VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
#define VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H

#include <QWidget>
#include "View_Passwortaenderung.h"

namespace Ui {
class View_TeilnehmerTeilnehmerHinzufuegen;
}

class View_TeilnehmerTeilnehmerHinzufuegen : public QWidget
{
    Q_OBJECT

public:
    explicit View_TeilnehmerTeilnehmerHinzufuegen(QWidget *parent = nullptr, Teilnehmerdaten *daten, boolean neuer Teilnehmer);
    ~View_TeilnehmerTeilnehmerHinzufuegen();

private slots:
    void on_Versionsverlauf_clicked();
    void on_OrganisatorrechteEntfernen_clicked();
    void on_PwAndern_clicked();
    void on_Speichern_clicked();
    void on_zurueck_clicked();
    void on_logout_clicked();

private:
    Ui::View_TeilnehmerTeilnehmerHinzufuegen *ui;
};

#endif // VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
