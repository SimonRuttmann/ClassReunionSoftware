
#ifndef ORGANISATOR_H
#define ORGANISATOR_H

#include "Teilnehmer.h"
#include <string>
class Organisator : public Teilnehmer
{
public:
    //Enum, verwendet als Ruckgabe der Methode pruefePasswort
    enum Pruefung {EMailFalsch, EmailZutreffendPwFalsch, EMailZutreffendPwRichtig};

    Organisator(){};
    Organisator(string passwort, bool isHauptorganisator);

    //Vergleicht die uebergebene Email/Passwort mit den eigenen Daten
    //und gibt eine Wert aus der oben definierten Enum zurueck
    Pruefung pruefePasswort(string pw, string email);

    void setPasswort(string pw);
    string getPasswort()const;

    void setHauptorganisator(bool ho);
    bool isHauptorganisator()const;

    void incVersuch();
    void setVersuch(int newVal);
    int getVersuch()const;

    void setIsSystempasswort(bool newVal);
    bool isSystempasswort()const;

private:
    string passwort;
    bool hauptorganisator;
    int versuch;
    bool systempasswort;

};
#endif // ORGANISATOR_H
