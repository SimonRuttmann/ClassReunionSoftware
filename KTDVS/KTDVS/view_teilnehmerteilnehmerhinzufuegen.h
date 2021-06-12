#ifndef VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
#define VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H

#include <QWidget>
#include "View_Passwortaenderung.h"
#include "View_Teilnehmerliste.h"

namespace Ui {
class View_TeilnehmerTeilnehmerHinzufuegen;
}

class View_TeilnehmerTeilnehmerHinzufuegen : public QWidget
{
    Q_OBJECT

public:
    explicit View_TeilnehmerTeilnehmerHinzufuegen(QWidget *parent = nullptr, Teilnehmer* aktuellerTeilnehmer = nullptr, bool neuerTeilnehmer = false, bool hauptorganisatorErstellen = false);
    ~View_TeilnehmerTeilnehmerHinzufuegen();

private slots:
    void on_Versionsverlauf_clicked();
    void on_OrganisatorrechteEntfernen_clicked();
    void on_PwAndern_clicked();
    void on_Speichern_clicked();
  //  void on_zurueck_clicked();
  //  void on_logout_clicked();


    void on_zurueck_2_clicked();

    void on_logout_2_clicked();

private:
    Ui::View_TeilnehmerTeilnehmerHinzufuegen *ui;
    bool neuerTn;
    bool hauptorgErstellen;
    Teilnehmerdaten* teilnehmerdaten;
    Teilnehmer* teiln;
    QWidget* vater;
    template<typename Base, typename T>
    inline bool instanceof(const T*) {
        return std::is_base_of<Base, T>::value;
    }
};

#endif // VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
