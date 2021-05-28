///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.cpp
//  Implementation of the Class Qt_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Qt_DAO_Teilnehmerdaten.h"
#include <QVariant>
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

    remove_query.prepare("");
    search_query.prepare("");
    select_query_all.prepare("");
    select_query_ofTeilnehmer.prepare("");
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

bool Qt_DAO_Teilnehmerdaten:

