///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.cpp
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Qt_DAO_Teilnehmer.h"
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


  //  insert_select_query.prepare
   //     (
   //     "SELECT teilnehmerkey FROM Teilnehmer "
   //     "WHERE passwort = :passwort AND isHauptorganisator = :isHauptorganisator;"
   //     );

    update_query.prepare(
    "UPDATE Teilnehmer SET passwort = :passwort, isHauptorganisator = :isHauptorganisator WHERE teilnehmerkey = :teilnehmerkey;"
    );

    remove_query.prepare
    (
    "DELETE FROM Teilnehmer WHERE teilnehmerkey = :teilnehmerkey;"
    );

    search_query.prepare
    (
    "SELECT passwort, isHauptorganisator FROM teilnehmer "
    "WHERE teilnehmerkey = :teilnehmerkey;"
    );

    select_query_ho.prepare(
    "SELECT teilnehmerkey FROM teilnehmer WHERE isHauptorganisator = true;"
    );

    select_query_all.prepare(
    "SELECT * FROM teilnehmer;"
    );
}



Qt_DAO_Teilnehmer::~Qt_DAO_Teilnehmer(){}

bool Qt_DAO_Teilnehmer::insert(Teilnehmer& teilnehmer){

//Spalten der Tabelle Teilnehmer
QString passwort = "NULL";
bool isHauptorganisator = false;

/*
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

    */
    passwort = QString::fromStdString(teilnehmer.getPasswort());
    isHauptorganisator = teilnehmer.isHauptorganisator();

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
    teilnehmer.setTeilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
}


bool Qt_DAO_Teilnehmer::update(const Teilnehmer& teilnehmer){
    QString passwort = QString::fromStdString(teilnehmer.getPasswort());

    update_query.bindValue(":passwort", passwort);
    update_query.bindValue(":isHauptorganisator",teilnehmer.isHauptorganisator());
    update_query.bindValue(":teilenhmerkey", teilnehmer.getTeilnehmerkey());

    return update_query.exec();
}


bool Qt_DAO_Teilnehmer::search(Teilnehmer& teilnehmer){
    search_query.bindValue(":teilnehmerkey", teilnehmer.getTeilnehmerkey());

    if(!search_query.exec()) return false;
    if(!search_query.next()) return false;

    string passwort = search_query.value(0).toString().toStdString();
    bool ho = search_query.value(1).toBool();

    teilnehmer.setPasswort(passwort);
    teilnehmer.setHauptorganisator(ho);
    return true;
}


bool Qt_DAO_Teilnehmer::remove(int teilnehmerkey){
    remove_query.bindValue(":teilnehmerkey", teilnehmerkey);
    return remove_query.exec();
}

bool Qt_DAO_Teilnehmer::selectHo(Teilnehmer &teilnehmer){
    if(!select_query_ho.exec()) return false;
    if(!select_query_ho.next()) return false;
    teilnehmer.setHauptorganisator(true);
    teilnehmer.setTeilnehmerkey(select_query_ho.value(0).toInt());
    teilnehmer.setPasswort(select_query_ho.value(1).toString().toStdString());
    return true;
}

bool Qt_DAO_Teilnehmer::selectAll(list<Teilnehmer*>& teilnehmerliste){
    if(!select_query_all.exec()) return false;

    while(select_query_all.next()){
        int teilnehmerkey = select_query_all.value(0).toInt();
        string passwort = select_query_all.value(1).toString().toStdString();
        bool isHauptorganistor = select_query_all.value(2).toBool();
        teilnehmerliste.push_front(new Teilnehmer(teilnehmerkey, passwort, isHauptorganistor));
    }
    return  true;
}

