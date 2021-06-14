///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.cpp
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "DAO_QT_Teilnehmer.h"
#include <QVariant>
#include <QtSql>
#include <QDebug>
#include <iostream>
DAO_QT_Teilnehmer::DAO_QT_Teilnehmer(){
    insert_query.prepare
    (
    "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES (:passwort, :isHauptorganisator, :versuch, :isSystempasswort);"
    );

    last_insert_id_query.prepare
    (
    "SELECT last_insert_rowid();"
    );
    //(
   // "SELECT last_rowid();"
   // );

    update_query.prepare
    (
    "UPDATE Teilnehmer SET passwort = :passwort, isHauptorganisator = :isHauptorganisator, "
    "versuch = :versuch, isSystempasswort = :isSystempasswort WHERE teilnehmerkey = :teilnehmerkey;"
    );

    remove_query.prepare
    (
    "DELETE FROM Teilnehmer WHERE teilnehmerkey = :teilnehmerkey;"
    );

    search_query.prepare
    (
    "SELECT * FROM teilnehmer "
    "WHERE teilnehmerkey = :teilnehmerkey;"
    );

    select_query_ho.prepare(
    "SELECT teilnehmerkey FROM teilnehmer WHERE isHauptorganisator = true;"
    );

    select_query_all.prepare(
    "SELECT * FROM teilnehmer WHERE passwort IS NULL OR passwort = '';"
    );

    select_query_allOrg.prepare(
    "SELECT * FROM teilnehmer WHERE passwort IS NOT NULL AND passwort != '' ;"
    );
}




bool DAO_QT_Teilnehmer::insertTeilnehmer(Teilnehmer& teilnehmer){

    insert_query.bindValue(":passwort", "");
    insert_query.bindValue(":isHauptorganisator",false);
    insert_query.bindValue(":versuch", 0);
    insert_query.bindValue(":isSystempasswort", false);

    if(!insert_query.exec()) return false;

    if(!last_insert_id_query.exec()) return false;
    if(!last_insert_id_query.next()) return false;

    teilnehmer.setTeilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
};


bool DAO_QT_Teilnehmer::updateTeilnehmer(const Teilnehmer& teilnehmer){
    update_query.bindValue(":passwort", "");
    update_query.bindValue(":isHauptorganisator",false);
    update_query.bindValue(":teilenhmerkey", teilnehmer.getTeilnehmerkey());
    update_query.bindValue(":versuch", 0);
    update_query.bindValue(":isSystempasswort", false);

    return update_query.exec();
};


//NUR TEILNEHMER!
bool DAO_QT_Teilnehmer::selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste){
    if(!select_query_all.exec()){
        qDebug() << "Fehler" ;
        return false;
    };

    while(select_query_all.next()){
        qDebug()<<"Wert erhalten!!!!!!!!!!!!";
        int teilnehmerkey = select_query_all.value(0).toInt();
        Teilnehmer* teilnehmer = new Teilnehmer();
        teilnehmer->setTeilnehmerkey(teilnehmerkey);
        teilnehmerliste.push_front(teilnehmer);
    }
    return  true;
};



bool DAO_QT_Teilnehmer::insertOrganisator(Organisator &organisator){


    QString passwort = QString::fromStdString(organisator.getPasswort());
    bool isHauptorganisator = organisator.isHauptorganisator();
    int versuch = organisator.getVersuch();
    bool isSystempasswort = organisator.isSystempasswort();

    qDebug()<< "INSERT MIT pw: "+passwort+" isHaupt: " + isHauptorganisator + " versuch: "+ versuch +" Systempw: "+ isSystempasswort;

    insert_query.bindValue(":passwort", passwort);
    insert_query.bindValue(":isHauptorganisator",isHauptorganisator);
    insert_query.bindValue(":versuch", versuch);
    insert_query.bindValue(":isSystempasswort", isSystempasswort);

    //qDebug("Test"); //<< "INSERT MIT pw: "; // << passwort.toStdString() << " isHaupt: " << isHauptorganisator << " versuch: " << versuch <<" Systempw: "<< isSystempasswort;

    if(!insert_query.exec()) {
        qDebug("insert fehlgeschlagen");
        return false;
    }

    if(!last_insert_id_query.exec()) return false;
    if(!last_insert_id_query.next()) return false;

    organisator.setTeilnehmerkey(last_insert_id_query.value(0).toInt());

   return true;
}


bool DAO_QT_Teilnehmer::updateOrganisator(const Organisator &organisator){
    QString passwort = QString::fromStdString(organisator.getPasswort());

    update_query.bindValue(":passwort", passwort);
    update_query.bindValue(":isHauptorganisator",organisator.isHauptorganisator());
    update_query.bindValue(":teilnehmerkey", organisator.getTeilnehmerkey());
    update_query.bindValue(":versuch", organisator.getVersuch());
    update_query.bindValue(":isSystempasswort", organisator.isSystempasswort());

    return update_query.exec();
}


bool DAO_QT_Teilnehmer::searchOrganisator(Organisator &organisator){
    search_query.bindValue(":teilnehmerkey", organisator.getTeilnehmerkey());

    if(!search_query.exec()) return false;
    if(!search_query.next()) return false;

    string passwort = search_query.value(1).toString().toStdString();
    bool ho = search_query.value(2).toBool();
    int versuch = search_query.value(3).toInt();
    bool isSys = search_query.value(4).toBool();

    organisator.setPasswort(passwort);
    organisator.setHauptorganisator(ho);
    organisator.setVersuch(versuch);
    organisator.setIsSystempasswort(isSys);

    return true;
}


bool DAO_QT_Teilnehmer::remove(int teilnehmerkey){
    remove_query.bindValue(":teilnehmerkey", teilnehmerkey);
    return remove_query.exec();
}

bool DAO_QT_Teilnehmer::selectHo(Organisator &hauptorg){
    if(!select_query_ho.exec()) return false;
    if(!select_query_ho.next()) return false;

    int teilnehmerkey = select_query_ho.value(0).toInt();
    string passwort = select_query_ho.value(1).toString().toStdString();
    bool ho = select_query_ho.value(2).toBool();
    int versuch = select_query_ho.value(3).toInt();
    bool isSys = select_query_ho.value(4).toBool();

    hauptorg.setTeilnehmerkey(teilnehmerkey);
    hauptorg.setPasswort(passwort);
    hauptorg.setHauptorganisator(ho);
    hauptorg.setVersuch(versuch);
    hauptorg.setIsSystempasswort(isSys);

    return true;
}

bool DAO_QT_Teilnehmer::selectAllOrganisatoren(list<Organisator*>& organisatorliste){
    if(!select_query_allOrg.exec()) return false;

    while(select_query_allOrg.next()){
        int teilnehmerkey = select_query_allOrg.value(0).toInt();
        string passwort = select_query_allOrg.value(1).toString().toStdString();
        bool isHauptorganistor = select_query_allOrg.value(2).toBool();
        int versuch = select_query_allOrg.value(3).toInt();
        bool isSys = select_query_allOrg.value(4).toBool();


        Organisator* organisator = new Organisator();
        organisator->setTeilnehmerkey(teilnehmerkey);
        organisator->setHauptorganisator(isHauptorganistor);
        organisator->setPasswort(passwort);
        organisator->setVersuch(versuch);
        organisator->setIsSystempasswort(isSys);

        organisatorliste.push_front(organisator);
    }
    return  true;
}

