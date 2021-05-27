///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.cpp
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Qt_DAO_Teilnehmer.h"
#include "Hauptorganisator.h"
#include "Teilnehmer.h"
#include "Organisator.h"
#include <QVariant>

/*

CREATE TABLE Teilnehmer{

teilnehmerkey        SERIAL PRIMARY KEY,
passwort             varchar(50),
isHauptorganisator   boolean
};

passwort = NULL                         -> Teilnehmer
passwort != NULL && !isHauptorganisator -> Organisator
passwort != NULL && isHauptroganisator  -> Hauptorganisator
*/

//Anfragen vorbereiten
Qt_DAO_Teilnehmer::Qt_DAO_Teilnehmer(){
    insert_query.prepare
        (
        "INSERT INTO Teilnehmer (passwort, isHauptorganisator)"
        "VALUES (:passwort, :isHauptorganistor);"
        );

    last_insert_id_query.prepare
        ("SELECT last_rowid();");


    insert_select_query.prepare
        (
        "SELECT teilnehmerkey FROM Teilnehmer "
        "WHERE passwort = :passwort AND isHauptorganisator = :isHauptorganisator;"
        );

    update_query.prepare(
    "......"
    );

    remove_query.prepare
    (
    "DELETE FROM Teilnehmer WHERE teilnehmerkey = :teilnehmerkey;"
    );

    search_query.prepare
    (
    "SELECT gname, name FROM Person "
    "WHERE id = :id;"
    );

    select_query.prepare(
    "......"
    );
}



Qt_DAO_Teilnehmer::~Qt_DAO_Teilnehmer(){}

bool Qt_DAO_Teilnehmer::insert(Teilnehmer& teilnehmer){

//Spalten der Tabelle Teilnehmer
QString passwort = "NULL";
bool isHauptorganisator = false;

    //Hauptorganisator
    if (this->instanceof<Hauptorganisator>(&teilnehmer) ){
        isHauptorganisator = true;

        Teilnehmer* teilnehmerptr = &teilnehmer;
        Organisator* hauptorganisator = (Organisator*)teilnehmerptr;
        passwort = QString::fromStdString(hauptorganisator->getPasswort());
    }
    //Organisator
    else if( this->instanceof<Organisator>(&teilnehmer)){

        Teilnehmer* teilnehmerptr = &teilnehmer;
        Organisator* organisator = (Organisator*)teilnehmerptr;
        passwort = QString::fromStdString(organisator->getPasswort());

    }

    //Formale Parameter zuweisen
    insert_query.bindValue(":passwort", passwort);
    insert_query.bindValue(":isHauptorganisator",isHauptorganisator);

    //Insert Query ausführen
    if(!insert_query.exec()) return false;

    //zugewiesenen Teilnehmerkey erhalten
    if(!last_insert_id_query.exec()) return false;

    //Ergebnis holen
    if(!last_insert_id_query.next()) return false;

    //Teilnehmerkey setzen
    teilnehmer.Setteilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
}


bool Qt_DAO_Teilnehmer::update(const Teilnehmer& teilnehmer){

	return  NULL;
}


bool Qt_DAO_Teilnehmer::search(Teilnehmer& teilnehmer){

	return  NULL;
}


bool Qt_DAO_Teilnehmer::remove(int teilnehmerkey){

	return  NULL;
}


bool Qt_DAO_Teilnehmer::select(string name, list<Teilnehmer*>& teilnehmerdatenliste){

	return  NULL;
}

