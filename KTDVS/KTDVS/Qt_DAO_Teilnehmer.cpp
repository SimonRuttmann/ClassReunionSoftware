///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.cpp
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Qt_DAO_Teilnehmer.h"
#include <QVariant>


Qt_DAO_Teilnehmer::Qt_DAO_Teilnehmer(){
    insert_query.prepare
    (
    "INSERT INTO Teilnehmer (passwort, isHauptorganisator)"
    "VALUES (:passwort, :isHauptorganistor);"
    );

    last_insert_id_query.prepare
    (
    "SELECT last_rowid();"
    );

    update_query.prepare
    (
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




bool Qt_DAO_Teilnehmer::insertTeilnehmer(Teilnehmer& teilnehmer){

    insert_query.bindValue(":passwort", "");
    insert_query.bindValue(":isHauptorganisator",false);

    if(!insert_query.exec()) return false;

    if(!last_insert_id_query.exec()) return false;
    if(!last_insert_id_query.next()) return false;

    teilnehmer.setTeilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
};


bool Qt_DAO_Teilnehmer::updateTeilnehmer(const Teilnehmer& teilnehmer){
    update_query.bindValue(":passwort", "");
    update_query.bindValue(":isHauptorganisator",false);
    update_query.bindValue(":teilenhmerkey", teilnehmer.getTeilnehmerkey());

    return update_query.exec();
};



bool Qt_DAO_Teilnehmer::selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste){
    if(!select_query_all.exec()) return false;

    while(select_query_all.next()){
        int teilnehmerkey = select_query_all.value(0).toInt();
        Teilnehmer* teilnehmer = new Teilnehmer();
        teilnehmer->setTeilnehmerkey(teilnehmerkey);
        teilnehmerliste.push_front(teilnehmer);
    }
    return  true;
};



bool Qt_DAO_Teilnehmer::insertOrganisator(Organisator &organisator){

    QString passwort;
    bool isHauptorganisator;

    passwort = QString::fromStdString(organisator.getPasswort());
    isHauptorganisator = organisator.isHauptorganisator();

    insert_query.bindValue(":passwort", passwort);
    insert_query.bindValue(":isHauptorganisator",isHauptorganisator);


    if(!insert_query.exec()) return false;

    if(!last_insert_id_query.exec()) return false;
    if(!last_insert_id_query.next()) return false;

    organisator.setTeilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
}


bool Qt_DAO_Teilnehmer::updateOrganisator(const Organisator &organisator){
    QString passwort = QString::fromStdString(organisator.getPasswort());

    update_query.bindValue(":passwort", passwort);
    update_query.bindValue(":isHauptorganisator",organisator.isHauptorganisator());
    update_query.bindValue(":teilenhmerkey", organisator.getTeilnehmerkey());

    return update_query.exec();
}


bool Qt_DAO_Teilnehmer::searchOrganisator(Organisator &organisator){
    search_query.bindValue(":teilnehmerkey", organisator.getTeilnehmerkey());

    if(!search_query.exec()) return false;
    if(!search_query.next()) return false;

    string passwort = search_query.value(0).toString().toStdString();
    bool ho = search_query.value(1).toBool();

    organisator.setPasswort(passwort);
    organisator.setHauptorganisator(ho);
    return true;
}


bool Qt_DAO_Teilnehmer::remove(int teilnehmerkey){
    remove_query.bindValue(":teilnehmerkey", teilnehmerkey);
    return remove_query.exec();
}

bool Qt_DAO_Teilnehmer::selectHo(Organisator &teilnehmer){
    if(!select_query_ho.exec()) return false;
    if(!select_query_ho.next()) return false;
    teilnehmer.setHauptorganisator(true);
    teilnehmer.setTeilnehmerkey(select_query_ho.value(0).toInt());
    teilnehmer.setPasswort(select_query_ho.value(1).toString().toStdString());
    return true;
}

bool Qt_DAO_Teilnehmer::selectAllOrganisatoren(list<Organisator*>& organisatorliste){
    if(!select_query_all.exec()) return false;

    while(select_query_all.next()){
        int teilnehmerkey = select_query_all.value(0).toInt();
        string passwort = select_query_all.value(1).toString().toStdString();
        bool isHauptorganistor = select_query_all.value(2).toBool();
        Organisator* organisator = new Organisator();
        organisator->setTeilnehmerkey(teilnehmerkey);
        organisator->setHauptorganisator(isHauptorganistor);
        organisator->setPasswort(passwort);
        organisatorliste.push_front(organisator);
    }
    return  true;
}

