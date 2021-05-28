///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.cpp
//  Implementation of the Class Qt_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Qt_DAO_Teilnehmerdaten.h"
#include <QVariant>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>


using namespace std;
Qt_DAO_Teilnehmerdaten::Qt_DAO_Teilnehmerdaten(){
    insert_query.prepare
        (
         "INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, hausnummer, stadt, strasse, land)"
         "VALUES (:teilnehmerkey, :vorname, :nachname, :schulname, :email, :datum, :postleitzahl, :hausnumemr, :stadt, :strasse, :land);"
         );
    insert_query_tel.prepare
         (
          "INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer)"
          "VALUES (:teilnehmerdatenkey, :isHaupttelefonnummer, :telefonnummer);"
          );

    last_insert_id_query.prepare
         (
          "SELECT last_rowid();"
          );

    remove_query.prepare
         (
          "DELETE FROM Teilnehmerdaten WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
          );

    remove_query_tel.prepare
         (
           "DELETE FROM Telefonnummer WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
          );

    search_query.prepare
         (
          ""
          );

    select_query_all.prepare("");
    select_query_ofTeilnehmer.prepare
          (
           "SELECT FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey"
           );
    select_query_first.prepare("");

}

Qt_DAO_Teilnehmerdaten::~Qt_DAO_Teilnehmerdaten(){

}

bool Qt_DAO_Teilnehmerdaten::insert(Teilnehmerdaten& teilnehmerdaten){
    insert_query.bindValue(":teilnehmerkey", teilnehmerdaten.getTeilnehmerkey());
    insert_query.bindValue(":vorname", QString::fromStdString(teilnehmerdaten.getVorname()));
    insert_query.bindValue(":nachname", QString::fromStdString(teilnehmerdaten.getNachname()));
    insert_query.bindValue(":schulname", QString::fromStdString(teilnehmerdaten.getSchulname()));
    insert_query.bindValue(":email", QString::fromStdString(teilnehmerdaten.getEMail()));
    insert_query.bindValue(":datum", QString::fromStdString(teilnehmerdaten.getDatum().toString()));
    insert_query.bindValue(":postleitzahl", QString::fromStdString(teilnehmerdaten.getPostleitzahl()));
    insert_query.bindValue(":hausnummer", teilnehmerdaten.getAdresse().haussnummer);
    insert_query.bindValue(":stadt", QString::fromStdString(teilnehmerdaten.getAdresse().stadt));
    insert_query.bindValue(":strasse", QString::fromStdString(teilnehmerdaten.getAdresse().strasse));
    insert_query.bindValue(":land", QString::fromStdString(teilnehmerdaten.getAdresse().land));

    if(insert_query.exec()) return false;
    if(last_insert_id_query.exec())return false;
    if(last_insert_id_query.next())return false;
    int teilnehmerdatenkey = last_insert_id_query.value(0).toInt();


    list<string> weitereTel = *teilnehmerdaten.getWeitereTelefonnummern();
    list<string>::iterator iterator;

    for (iterator=weitereTel.begin(); iterator != weitereTel.end(); ++iterator){

        string aktuelleTelefon = *iterator;
        insert_query_tel.bindValue(":teilnehmerdatenkey", teilnehmerdatenkey);
        insert_query_tel.bindValue(":telefonnummer", QString::fromStdString(aktuelleTelefon));
        insert_query_tel.bindValue(":isHaupttelefonnummer", false);

        if(insert_query_tel.exec()) return false;
    }


    insert_query_tel.bindValue(":teilnehmerdatenkey", teilnehmerdatenkey);
    insert_query_tel.bindValue(":telefonnummer", QString::fromStdString(teilnehmerdaten.getHaupttelefonnummer()));
    insert_query_tel.bindValue(":isHaupttelefonnummer", true);

    if(insert_query_tel.exec()) return false;

    return true;
}

bool Qt_DAO_Teilnehmerdaten::search(Teilnehmerdaten& teilnehmerdaten){};


bool Qt_DAO_Teilnehmerdaten::remove(int teilnehmerkey){
   // remove_query.bindValue(":teilnehmerdatenkey", teil)
};


bool Qt_DAO_Teilnehmerdaten::selectFirstOfTeilnehmer(Teilnehmerdaten& teilnehmerdaten){};

//Leere Liste an Teilnehmerdaten wird übergeben
bool Qt_DAO_Teilnehmerdaten::selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste){
    select_query_ofTeilnehmer.bindValue(":teilnehmerkey", teilnehmerkey);
    if(select_query_ofTeilnehmer.exec()) return false;

    while(select_query_ofTeilnehmer.next()){
        Teilnehmerdaten* teilnehmerdaten = new Teilnehmerdaten();
        teilnehmerdaten->setTeilnehmerkey(teilnehmerkey);

        int teilnehmerdatenkey = select_query_ofTeilnehmer.value(0).toInt();
        teilnehmerdaten->setTeilnehmerdatenkey(teilnehmerdatenkey);

        string vorname = select_query_ofTeilnehmer.value(1).toString().toStdString();
        teilnehmerdaten->setVorname(vorname);

        string nachname = select_query_ofTeilnehmer.value(1).toString().toStdString();
        teilnehmerdaten->setNachname(nachname);

        string schulname = select_query_ofTeilnehmer.value(2).toString().toStdString();
        teilnehmerdaten->setSchulname(schulname);

        string email = select_query_ofTeilnehmer.value(3).toString().toStdString();
        teilnehmerdaten->setEmail(email);

        string datumString = select_query_ofTeilnehmer.value(4).toString().toStdString();

        char leer = ' ';
        istringstream iss(datumString);
        string item;

        getline(iss,item, leer); string tag = item;
        getline(iss,item, leer); string monat = item;
        getline(iss,item, leer); string jahr = item;
        getline(iss,item, leer); string stunde = item;
        getline(iss,item, leer); string min = item;
        getline(iss,item, leer); string sekunde = item;
        Datum* datum = new Datum();
        datum->tag = stoi(tag);
        datum->monat = stoi(monat);
        datum->jahr = stoi(jahr);
        datum->stunde = stoi(stunde);
        datum->min = stoi(min);
        datum->sekunde = stoi(sekunde);

        teilnehmerdaten->setDatum(*datum);

        int postleitzahl = select_query_ofTeilnehmer.value(5).toInt();
        Adresse* adresse = new Adresse();
        adresse->postleitzahl = postleitzahl;

        int hausnummer = select_query_ofTeilnehmer.value(6).toInt();
        adresse->haussnummer = hausnummer;

        string stadt = select_query_ofTeilnehmer.value(7).toString().toStdString();
        adresse->stadt = stadt;

        string strasse = select_query_ofTeilnehmer.value(8).toString().toStdString();
        adresse->strasse = strasse;

        string land = select_query_ofTeilnehmer.value(9).toString().toStdString();
        adresse->land = land;
        teilnehmerdaten->setAdresse(*adresse);

        teilnehmerdatenliste.push_front(teilnehmerdaten);
    }
    return true;
};


bool Qt_DAO_Teilnehmerdaten::selectAll(list<Teilnehmerdaten*>& teilnehmerdatenliste){};


