
#include "Teilnehmerliste.h"
#include <QDebug>

Teilnehmerliste::Teilnehmerliste(){
    this->TeilnehmerDAO = new DAO_QT_Teilnehmer();
    this->TeilnehmerDAO->selectAllTeilnehmer(nurTeilnehmerliste);
    this->TeilnehmerDAO->selectAllOrganisatoren(organisatorliste);

    //Der Teilnehmerliste Teilnehmer hinzufuegen
    list<Teilnehmer*>::iterator teiln = nurTeilnehmerliste.begin();
    while (teiln != nurTeilnehmerliste.end()){
        this->teilnehmerliste.push_back( (*teiln) );
        teiln++;
    }

    //Der Organisatorliste Organisatoren hinzufuegen
    list<Organisator*>::iterator orgs = organisatorliste.begin();
    while(orgs != organisatorliste.end()){
        this->teilnehmerliste.push_back( (*orgs) );
        orgs++;
    }


    //Allen Teilnehmern (teiln + org) aktuelle Datensaetze beschaffen
    list<Teilnehmer*>::iterator it = this->teilnehmerliste.begin();
    while(it != teilnehmerliste.end()){
         (*it)->aktuelleTeilnehmerdatenVonDBErhalten();

        it++;
    }
}


Teilnehmerliste::~Teilnehmerliste(){
    delete aktiverNutzer;
    delete this->TeilnehmerDAO;
    list<Teilnehmer*>::iterator it = this->teilnehmerliste.begin();

    while(it != teilnehmerliste.end()){
        this->teilnehmerliste.erase(it);
        delete(*it);
    }


    //Organisatorliste wird nicht gelöscht, da
    //alle Organisatoren in der Teilnehmerliste sind
    //-> Liste an Nullpointern
}



Organisator* Teilnehmerliste::getAktiverNutzer(){return this->aktiverNutzer;};
void Teilnehmerliste::setAktiverNutzer(Organisator* newVal) {this->aktiverNutzer = newVal;};

Teilnehmer* Teilnehmerliste::teilnehmerErstellen(){
    Teilnehmer* teilnehmer = new Teilnehmer();

    this->TeilnehmerDAO->insertTeilnehmer(*teilnehmer);
    this->teilnehmerliste.push_back(teilnehmer);
    return teilnehmer;
};



Organisator* Teilnehmerliste::organisatorErstellen(string passwort, bool isHauptorganisator){
    Organisator* organisator = new Organisator(passwort, isHauptorganisator);

    this->TeilnehmerDAO->insertOrganisator(*organisator);
    this->teilnehmerliste.push_back(organisator);
    this->organisatorliste.push_back(organisator);
    return organisator;
};

//Statischen Member initialisieren
Teilnehmerliste* Teilnehmerliste::uniqueInstance = 0;

Teilnehmerliste* Teilnehmerliste::instance(){
    if(!uniqueInstance){
       uniqueInstance = new Teilnehmerliste();
    }
    return uniqueInstance;
};


bool Teilnehmerliste::updateOrganisator(Organisator& organisator){
    return this->TeilnehmerDAO->updateOrganisator(organisator);
};

bool Teilnehmerliste::updateTeilnehmer(Teilnehmer& teilnehmer){
    return this->TeilnehmerDAO->updateTeilnehmer(teilnehmer);
};


//Transformiert einen bestehenden Organisator zu einem Teilnehmer
Teilnehmer* Teilnehmerliste::vonOrgZuTeilnehmer(Organisator* org){

    //Datenbank auf Teilnehmer ausrichten
    org->setHauptorganisator(false);
    org->setIsSystempasswort(false);
    org->setPasswort("");
    org->setVersuch(0);
    this->TeilnehmerDAO->updateTeilnehmer(*org);

    Teilnehmer* teiln = new Teilnehmer();
    teiln->setTeilnehmerkey(org->getTeilnehmerkey());
    teiln->aktuelleTeilnehmerdatenVonDBErhalten();

    int okey = org->getTeilnehmerkey();

    //Pop in Teilnehmerliste
    list<Teilnehmer*>::iterator itTeilnehmer = this->teilnehmerliste.begin();
    while(itTeilnehmer != this->teilnehmerliste.end()){
        if( (*itTeilnehmer)->getTeilnehmerkey() == okey){
            this->teilnehmerliste.erase(itTeilnehmer);
            break;
        }
        itTeilnehmer++;
    }

    //Pop in Organisatorliste
    list<Organisator*>::iterator itOrg = this->organisatorliste.begin();
    while(itOrg != this->organisatorliste.end()){
        if( (*itOrg)->getTeilnehmerkey() == okey){
            this->organisatorliste.erase(itOrg);
            break;
        }
        itOrg++;
    }

    //Push neuen Teilnehmer
    this->teilnehmerliste.push_back(teiln);
    this->nurTeilnehmerliste.push_back(teiln);

    delete org;
    return teiln;
};

//Transformiert einen bestehenden Teilnehmer zu einem Organisator
Organisator* Teilnehmerliste::vonTeilnZuOrg(Teilnehmer* teiln, string systempasswort){

    Organisator * org = new Organisator();
    org->setHauptorganisator(false);
    org->setIsSystempasswort(true);
    org->setPasswort(systempasswort);
    org->setVersuch(0);
    org->setTeilnehmerkey(teiln->getTeilnehmerkey());


    this->TeilnehmerDAO->updateOrganisator(*org);

    //Dem Organisator die Teilnehmerdaten aus der DB holen
    org->aktuelleTeilnehmerdatenVonDBErhalten();

    int tkey = org->getTeilnehmerkey();

    //Teilnehmer aus nurTeilnehmerliste löschen
    list<Teilnehmer*>::iterator itTeilnehmer = this->nurTeilnehmerliste.begin();
    while(itTeilnehmer != this->nurTeilnehmerliste.end()){
        if( (*itTeilnehmer)->getTeilnehmerkey() == tkey){
            this->nurTeilnehmerliste.erase(itTeilnehmer);
            break;
        }
        itTeilnehmer++;
    }

    //Teilnehmer aus Teilnehmerliste löschen
    list<Teilnehmer*>::iterator itTeilnehmer2 = this->teilnehmerliste.begin();
    while(itTeilnehmer2 != this->teilnehmerliste.end()){
        if( (*itTeilnehmer2)->getTeilnehmerkey() == tkey){
            this->teilnehmerliste.erase(itTeilnehmer2);
            break;
        }
        itTeilnehmer2++;
    }

    //Push neuen Organisator
    this->organisatorliste.push_back(org);
    this->teilnehmerliste.push_back(org);

    delete teiln;
    return org;


};

list<Organisator*>* Teilnehmerliste::getOrganisatorliste(){return &(this->organisatorliste);};

list<Teilnehmer*>* Teilnehmerliste::getTeilnehmerliste(){return &(this->teilnehmerliste);};
