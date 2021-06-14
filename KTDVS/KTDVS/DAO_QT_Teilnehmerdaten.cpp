///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.cpp
//  Implementation of the Class Qt_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "DAO_QT_Teilnehmerdaten.h"
#include <QVariant>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <QDebug>

using namespace std;
DAO_QT_Teilnehmerdaten::DAO_QT_Teilnehmerdaten(){
    insert_query.prepare
        (
         "INSERT INTO Teilnehmerdaten "
         "(teilnehmerkey, vorname, nachname, schulname, "
         "email, datum, postleitzahl, hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
         "VALUES (:teilnehmerkey, :vorname, :nachname, :schulname,"
         ":email, :datum, :postleitzahl, :hausnummer, :stadt, :strasse, :land, :kommentar, :erstellerkey);"
         );
    insert_query_tel.prepare
         (
          "INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer)"
          "VALUES (:teilnehmerdatenkey, :isHaupttelefonnummer, :telefonnummer);"
          );

    last_insert_id_query.prepare
         (
          "SELECT last_insert_rowid();"
          );
    //(
    // "SELECT last_rowid();"
    // );

    remove_query.prepare
         (
          "DELETE FROM Teilnehmerdaten WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
          );

    remove_query_tel.prepare
         (
           "DELETE FROM Telefonnummer WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
          );

    select_telefonNr_ofTeilnehmerdaten.prepare
         (
          "SELECT * FROM Telefonnummer WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
          );

    select_query_all.prepare
            (
              "SELECT * FROM Teilnehmerdaten;"
            );
    select_query_ofTeilnehmer.prepare
          (
           "SELECT * FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey;"
           );
    select_query_first.prepare
          (
              "SELECT * FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey AND teilnehmerdatenkey = :tdErst;"
           );

    select_query_first_subselect.prepare
          (
              "SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey;"
           );
    // Läuft auf sqlite db, aber nicht bei exec();
   // "SELECT * FROM Teilnehmerdaten WHERE teilnehmerkey = 30 AND teilnehmerdatenkey = (SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = 30);"



    //"SELECT * FROM Teilnehmerdaten"
    //"WHERE teilnehmerkey = 30 AND teilnehmerdatenkey >=  "
    //"(SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = 30);"

    // "SELECT * FROM Teilnehmerdaten"
   // "WHERE teilnehmerkey = :teilnehmerkey AND teilnehmerdatenkey >=  "
   // "(SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey2);"
}




//Teilnehmerdaten werden nicht geloescht -> Wirkungslos
//bool Qt_DAO_Teilnehmerdaten::remove(int teilnehmerkey){return false;};

bool DAO_QT_Teilnehmerdaten::insert(Teilnehmerdaten& teilnehmerdaten){

    qDebug()<<"1";
    insert_query.bindValue(":teilnehmerkey", teilnehmerdaten.getTeilnehmerkey());
    insert_query.bindValue(":vorname", QString::fromStdString(teilnehmerdaten.getVorname()));
    insert_query.bindValue(":nachname", QString::fromStdString(teilnehmerdaten.getNachname()));
    insert_query.bindValue(":schulname", QString::fromStdString(teilnehmerdaten.getSchulname()));
    insert_query.bindValue(":email", QString::fromStdString(teilnehmerdaten.getEMail()));
    insert_query.bindValue(":datum", QString::fromStdString(teilnehmerdaten.getDatum().toString()));
    insert_query.bindValue(":postleitzahl", teilnehmerdaten.getAdresse().postleitzahl);
    insert_query.bindValue(":hausnummer", teilnehmerdaten.getAdresse().haussnummer);
    insert_query.bindValue(":stadt", QString::fromStdString(teilnehmerdaten.getAdresse().stadt));
    insert_query.bindValue(":strasse", QString::fromStdString(teilnehmerdaten.getAdresse().strasse));
    insert_query.bindValue(":land", QString::fromStdString(teilnehmerdaten.getAdresse().land));
    insert_query.bindValue(":kommentar", QString::fromStdString(teilnehmerdaten.getKommentar()));
    insert_query.bindValue(":erstellerkey", teilnehmerdaten.getErstellerKey());
    qDebug()<<"2";
    if(!insert_query.exec()) return false;
    qDebug()<<"3";
    if(!last_insert_id_query.exec())return false;
    qDebug()<<"4";
    if(!last_insert_id_query.next())return false;
    qDebug()<<"5";
    int teilnehmerdatenkey = last_insert_id_query.value(0).toInt();

    qDebug()<<"TeilnehmerDATENkey"<<teilnehmerdatenkey;

    //Haupttelefonnummer
    insert_query_tel.bindValue(":teilnehmerdatenkey", teilnehmerdatenkey);
    insert_query_tel.bindValue(":telefonnummer", QString::fromStdString(teilnehmerdaten.getHaupttelefonnummer()));
    insert_query_tel.bindValue(":isHaupttelefonnummer", true);

    if(!insert_query_tel.exec()) return false;

    //weitere Telefonnummern
    list<string> weitereTel = teilnehmerdaten.getWeitereTelefonnummern();
    list<string>::iterator iterator;

    for (iterator=weitereTel.begin(); iterator != weitereTel.end(); ++iterator){

        string aktuelleTelefon = *iterator;
        insert_query_tel.bindValue(":teilnehmerdatenkey", teilnehmerdatenkey);
        insert_query_tel.bindValue(":telefonnummer", QString::fromStdString(aktuelleTelefon));
        insert_query_tel.bindValue(":isHaupttelefonnummer", false);

        if(!insert_query_tel.exec()) return false;
    }



    return true;
}



bool DAO_QT_Teilnehmerdaten::selectFirstOfTeilnehmer(int teilnehmerkey, Teilnehmerdaten& teilnehmerdaten){

//    QSqlQuery test;
//    test.prepare("SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = 62;");
//    test.exec();
//    //test.first();
//    qDebug() << test.first();

    //"SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey;"
    qDebug() <<"TK: " << teilnehmerkey;
    select_query_first_subselect.bindValue(":teilnehmerkey", teilnehmerkey);

    if(!select_query_first_subselect.exec()){
        qDebug()<<"Select query first Subselect scheitert";
        return false;
    }
    if(!select_query_first_subselect.first()){
        qDebug()<<"Select query first Subselect NEXT scheitert";
        return false;
    }

    int tdErst = select_query_first_subselect.value(0).toInt();
    qDebug()<<"Erhalte tdErst: " << tdErst;

    //Keine Teilnehmerdaten zu diesem Teilnehmer erhalten
    if(tdErst == 0) return false;
    //"SELECT * FROM Teilnehmerdaten WHERE teilnehmerkey = :teilnehmerkey AND teilnehmerdatenkey = :tdErst;"
    select_query_first.bindValue(":teilnehmerkey", teilnehmerkey);
    select_query_first.bindValue(":tdErst", tdErst);


    if(!select_query_first.exec()){
        qDebug()<<"Select query first scheitert";
        return false;
    }

    if(!select_query_first.next()){
        qDebug()<<"Select query first scheitert";
        return false;
    }

    teilnehmerdaten.setTeilnehmerkey(teilnehmerkey);

    int teilnehmerdatenkey = select_query_first.value(0).toInt();
    teilnehmerdaten.setTeilnehmerdatenkey(teilnehmerdatenkey);

    string vorname = select_query_first.value(2).toString().toStdString();
    teilnehmerdaten.setVorname(vorname);

    string nachname = select_query_first.value(3).toString().toStdString();
    teilnehmerdaten.setNachname(nachname);

    string schulname = select_query_first.value(4).toString().toStdString();
    teilnehmerdaten.setSchulname(schulname);

    string email = select_query_first.value(5).toString().toStdString();
    teilnehmerdaten.setEmail(email);

    string datumString = select_query_first.value(6).toString().toStdString();


    QString datumQString = QString::fromStdString(datumString);
    QStringList data = datumQString.split(" ");

    Datum* datum = new Datum();
    datum->tag = data[0].toInt();
    datum->monat = data[1].toInt();
    datum->jahr = data[2].toInt();
    datum->stunde = data[3].toInt();
    datum->min = data[4].toInt();
    datum->sekunde = data[5].toInt();

    teilnehmerdaten.setDatum(*datum);

    int postleitzahl = select_query_first.value(7).toInt();
    Adresse* adresse = new Adresse();
    adresse->postleitzahl = postleitzahl;

    int hausnummer = select_query_first.value(8).toInt();
    adresse->haussnummer = hausnummer;

    string stadt = select_query_first.value(9).toString().toStdString();
    adresse->stadt = stadt;

    string strasse = select_query_first.value(10).toString().toStdString();
    adresse->strasse = strasse;

    string land = select_query_first.value(11).toString().toStdString();
    adresse->land = land;
    teilnehmerdaten.setAdresse(*adresse);

    string kommentar = select_query_first.value(12).toString().toStdString();
    teilnehmerdaten.setKommentar(kommentar);

    int erstellerkey = select_query_first.value(13).toInt();
    teilnehmerdaten.setErstellerKey(erstellerkey);

    //"SELECT * FROM Telefonnummer WHERE teilnehmerdatenkey = :teilnehmerdatenkey;"
    qDebug()<<"Telefonnummern mit TDK: " << teilnehmerdatenkey;
    select_telefonNr_ofTeilnehmerdaten.bindValue(":teilnehmerdatenkey", teilnehmerdatenkey);

    if(!select_telefonNr_ofTeilnehmerdaten.exec()){
        qDebug()<<"Telenummerselect scheitert";
        return false;
    }

    list<string>* telefonnummerliste = new list<string>();

    while(select_telefonNr_ofTeilnehmerdaten.next()){
        qDebug()<<"Hole Telefonnummern";
        bool hauptnummer = select_telefonNr_ofTeilnehmerdaten.value(2).toBool();
        string nummer = select_telefonNr_ofTeilnehmerdaten.value(3).toString().toStdString();

        if(!hauptnummer){
            telefonnummerliste->push_front(nummer);
        }
        else{
            teilnehmerdaten.setHaupttelefonnummer(nummer);
        }
    }

    teilnehmerdaten.setWeitereTelefonnummern(*telefonnummerliste);
    return true;
};

//Leere Liste an Teilnehmerdaten wird übergeben
bool DAO_QT_Teilnehmerdaten::selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste){
    select_query_ofTeilnehmer.bindValue(":teilnehmerkey", teilnehmerkey);
    if(!select_query_ofTeilnehmer.exec()) return false;

    while(select_query_ofTeilnehmer.next()){
        Teilnehmerdaten* teilnehmerdaten = new Teilnehmerdaten();
        teilnehmerdaten->setTeilnehmerkey(teilnehmerkey);

        int teilnehmerdatenkey = select_query_ofTeilnehmer.value(0).toInt();
        teilnehmerdaten->setTeilnehmerdatenkey(teilnehmerdatenkey);

        string vorname = select_query_ofTeilnehmer.value(2).toString().toStdString();
        teilnehmerdaten->setVorname(vorname);

        string nachname = select_query_ofTeilnehmer.value(3).toString().toStdString();
        teilnehmerdaten->setNachname(nachname);

        string schulname = select_query_ofTeilnehmer.value(4).toString().toStdString();
        teilnehmerdaten->setSchulname(schulname);

        string email = select_query_ofTeilnehmer.value(5).toString().toStdString();
        teilnehmerdaten->setEmail(email);

        string datumString = select_query_ofTeilnehmer.value(6).toString().toStdString();
        QString datumQString = QString::fromStdString(datumString);
        QStringList data = datumQString.split(" ");

        Datum* datum = new Datum();
        datum->tag = data[0].toInt();
        datum->monat = data[1].toInt();
        datum->jahr = data[2].toInt();
        datum->stunde = data[3].toInt();
        datum->min = data[4].toInt();
        datum->sekunde = data[5].toInt();


        teilnehmerdaten->setDatum(*datum);

        int postleitzahl = select_query_ofTeilnehmer.value(7).toInt();
        Adresse* adresse = new Adresse();
        adresse->postleitzahl = postleitzahl;

        int hausnummer = select_query_ofTeilnehmer.value(8).toInt();
        adresse->haussnummer = hausnummer;

        string stadt = select_query_ofTeilnehmer.value(9).toString().toStdString();
        adresse->stadt = stadt;

        string strasse = select_query_ofTeilnehmer.value(10).toString().toStdString();
        adresse->strasse = strasse;

        string land = select_query_ofTeilnehmer.value(11).toString().toStdString();
        adresse->land = land;
        teilnehmerdaten->setAdresse(*adresse);

        string kommentar = select_query_first.value(12).toString().toStdString();
        teilnehmerdaten->setKommentar(kommentar);

        int erstellerkey = select_query_ofTeilnehmer.value(13).toInt();
        teilnehmerdaten->setErstellerKey(erstellerkey);

        select_telefonNr_ofTeilnehmerdaten.bindValue(":teilnehmerdaten", teilnehmerdatenkey);

        if(!select_telefonNr_ofTeilnehmerdaten.exec()) return false;

        list<string>* telefonnummerliste = new list<string>();

        //Telefonnummern erhalten
        while(select_telefonNr_ofTeilnehmerdaten.next()){
            bool hauptnummer = select_telefonNr_ofTeilnehmerdaten.value(2).toBool();
            string nummer = select_telefonNr_ofTeilnehmerdaten.value(3).toString().toStdString();

            if(!hauptnummer){
                telefonnummerliste->push_front(nummer);
            }
            else{
                teilnehmerdaten->setHaupttelefonnummer(nummer);
            }
        }

        teilnehmerdaten->setWeitereTelefonnummern(*telefonnummerliste);
        teilnehmerdatenliste.push_front(teilnehmerdaten);
    }
    return true;
};

//Nicht verwenden, ist nur um zu testen was passieren kann!
//Heftiger Select, ladet praktisch die gesammte Datenbank in den Hauptspeicher
bool DAO_QT_Teilnehmerdaten::selectAll(list<Teilnehmerdaten*>& teilnehmerdatenliste){
    if(select_query_all.exec()) return false;

    while(select_query_all.next()){
        Teilnehmerdaten* teilnehmerdaten = new Teilnehmerdaten();


        int teilnehmerdatenkey = select_query_all.value(0).toInt();
        teilnehmerdaten->setTeilnehmerdatenkey(teilnehmerdatenkey);

        int teilnehmerkey = select_query_all.value(1).toInt();
        teilnehmerdaten->setTeilnehmerkey(teilnehmerkey);

        string vorname = select_query_all.value(2).toString().toStdString();
        teilnehmerdaten->setVorname(vorname);

        string nachname = select_query_all.value(3).toString().toStdString();
        teilnehmerdaten->setNachname(nachname);

        string schulname = select_query_all.value(4).toString().toStdString();
        teilnehmerdaten->setSchulname(schulname);

        string email = select_query_all.value(5).toString().toStdString();
        teilnehmerdaten->setEmail(email);

        string datumString = select_query_all.value(6).toString().toStdString();
        QString datumQString = QString::fromStdString(datumString);
        QStringList data = datumQString.split(" ");

        Datum* datum = new Datum();
        datum->tag = data[0].toInt();
        datum->monat = data[1].toInt();
        datum->jahr = data[2].toInt();
        datum->stunde = data[3].toInt();
        datum->min = data[4].toInt();
        datum->sekunde = data[5].toInt();


        teilnehmerdaten->setDatum(*datum);

        int postleitzahl = select_query_all.value(7).toInt();
        Adresse* adresse = new Adresse();
        adresse->postleitzahl = postleitzahl;

        int hausnummer = select_query_all.value(8).toInt();
        adresse->haussnummer = hausnummer;

        string stadt = select_query_all.value(9).toString().toStdString();
        adresse->stadt = stadt;

        string strasse = select_query_all.value(10).toString().toStdString();
        adresse->strasse = strasse;

        string land = select_query_all.value(11).toString().toStdString();
        adresse->land = land;
        teilnehmerdaten->setAdresse(*adresse);

        string kommentar = select_query_first.value(12).toString().toStdString();
        teilnehmerdaten->setKommentar(kommentar);

        int erstellerkey = select_query_ofTeilnehmer.value(13).toInt();
        teilnehmerdaten->setErstellerKey(erstellerkey);

        select_telefonNr_ofTeilnehmerdaten.bindValue(":teilnehmerdaten", teilnehmerdatenkey);

        if(select_telefonNr_ofTeilnehmerdaten.exec()) return false;

        list<string>* telefonnummerliste = new list<string>();

        while(select_telefonNr_ofTeilnehmerdaten.next()){
            bool hauptnummer = select_telefonNr_ofTeilnehmerdaten.value(2).toBool();
            string nummer = select_telefonNr_ofTeilnehmerdaten.value(3).toString().toStdString();

            if(!hauptnummer){
                telefonnummerliste->push_front(nummer);
            }
            else{
                teilnehmerdaten->setHaupttelefonnummer(nummer);
            }
        }

        teilnehmerdaten->setWeitereTelefonnummern(*telefonnummerliste);
        teilnehmerdatenliste.push_front(teilnehmerdaten);

    }
    return true;
};


