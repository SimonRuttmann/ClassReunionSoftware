#ifndef VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
#define VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H

#include <QWidget>
#include "View_Passwortaenderung.h"
class View_Teilnehmerliste;

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
    void on_AddPhoneNumber_clicked();
  //  void on_zurueck_clicked();
  //  void on_logout_clicked();


    void on_zurueck_2_clicked();

    void on_logout_2_clicked();

private:
    Ui::View_TeilnehmerTeilnehmerHinzufuegen *ui;
    bool neuerTn;
    bool hauptorgErstellen;
    QString addnumber = "";
    int addnumberamount = 0;
    Teilnehmerdaten* teilnehmerdaten;
    Teilnehmer* teiln;
    QWidget* vater;
    template<typename Base, typename T>
    inline bool instanceof(const T*) {
        return std::is_base_of<Base, T>::value;
    }
    bool intcheck(string teststr);
};

#endif // VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
