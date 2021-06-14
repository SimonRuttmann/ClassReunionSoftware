///////////////////////////////////////////////////////////
//  Teilnehmer.cpp
//  Implementation of the Class Teilnehmer
///////////////////////////////////////////////////////////

#include "Teilnehmer.h"
#include "I_DAO_Teilnehmer.h"
#include "DAO_QT_Teilnehmer.h"
#include "DAO_QT_Teilnehmerdaten.h"
#include "Teilnehmerliste.h"
#include <QDebug>

    Teilnehmer::Teilnehmer(Teilnehmerdaten* teilnehmerdaten){
        this->aktuelleTeilnehmerdaten = teilnehmerdaten;
        this->TeilnehmerdatenDAO = new DAO_QT_Teilnehmerdaten();
    };

    Teilnehmer::Teilnehmer(){
        this->TeilnehmerdatenDAO = new DAO_QT_Teilnehmerdaten();
        this->aktuelleTeilnehmerdaten = new Teilnehmerdaten();

    };

    Teilnehmer::~Teilnehmer(){

        delete this->aktuelleTeilnehmerdaten;
        list<Teilnehmerdaten*>::iterator it = this->Teilnehmerdatenliste.begin();

        while(it != Teilnehmerdatenliste.end()){
            this->Teilnehmerdatenliste.erase(it);
            delete(*it);
            //it++;
        }
    };

    Teilnehmerdaten* Teilnehmer::getAktuelleTeilnehmerdaten(){
        return this->aktuelleTeilnehmerdaten;
    };

    Teilnehmerdaten* Teilnehmer::aktuelleTeilnehmerdatenVonDBErhalten(){
        qDebug()<<"Hole Teilnehmerdaten mit Teilnehmerkey: " << this->teilnehmerkey << " ";
        this->TeilnehmerdatenDAO->selectFirstOfTeilnehmer(this->teilnehmerkey, *this->aktuelleTeilnehmerdaten);
        qDebug()<<"Erhalte TD mit Email: " << QString::fromStdString(aktuelleTeilnehmerdaten->getEMail()) << "teilnehmerkey: "<< getAktuelleTeilnehmerdaten()->getTeilnehmerkey();
        return this->aktuelleTeilnehmerdaten;

    };

    list<Teilnehmerdaten*>* Teilnehmer::getAlleTeilnehmerdaten(){
        return &(this->Teilnehmerdatenliste);
    };


    list<Teilnehmerdaten*>* Teilnehmer::alleTeilnehmerdatenErstellen(){
         this->TeilnehmerdatenDAO->selectAllOfTeilnehmer(this->teilnehmerkey, this->Teilnehmerdatenliste);
         return &(this->Teilnehmerdatenliste);
    };


    int Teilnehmer::getTeilnehmerkey()const{
        return this->teilnehmerkey;
    };

    void Teilnehmer::setTeilnehmerkey(int neuerTeilnehmerkey){
        this->teilnehmerkey = neuerTeilnehmerkey;
    };

    void Teilnehmer::neuenTDEintragEinfuegen(Teilnehmerdaten* td){
        qDebug() << "Teilnehmerdaten werden eingefuegt: Vorname: " << QString::fromStdString(td->getVorname() )<< "Email: " << QString::fromStdString(td->getEMail()) ;
        int erstellerkey = Teilnehmerliste::instance()->aktiverNutzer->getTeilnehmerkey();
        td->setTeilnehmerkey(this->teilnehmerkey);
        td->setErstellerKey(erstellerkey);
        this->aktuelleTeilnehmerdaten = td;
        this->Teilnehmerdatenliste.push_front(td);
        this->TeilnehmerdatenDAO->insert(*td);

    };





