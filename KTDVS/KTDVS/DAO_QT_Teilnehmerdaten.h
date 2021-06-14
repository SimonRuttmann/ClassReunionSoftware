///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.h
//  Implementation of the Class DAO_QT_Teilnehmerdaten
///////////////////////////////////////////////////////////

#ifndef DAO_QT_TEILNEHMERDATEN_H
#define DAO_QT_TEILNEHMERDATEN_H

#include "I_DAO_Teilnehmerdaten.h"
class Teilnehmer;
#include <string>
#include <list>
#include <QSqlQuery>

using namespace std;
class DAO_QT_Teilnehmerdaten : public I_DAO_Teilnehmerdaten
{
private:
    //Notwendige Anfragen zur Implementierung der Methoden
    QSqlQuery   insert_query,
                insert_query_tel,
                last_insert_id_query,
                remove_query,
                remove_query_tel,
                search_query,
                select_telefonNr_ofTeilnehmerdaten,
                select_query_all,
                select_query_ofTeilnehmer,
                select_query_first,
                select_query_first_subselect;
public:
    //Konstruktor bereitet die Anfragen vor
    DAO_QT_Teilnehmerdaten();


    //Methoden beschrieben nach dem Interface I_DAO_Teilnehmerdaten
    bool insert(Teilnehmerdaten& teilnehmerdaten);
    bool selectFirstOfTeilnehmer(int teilnehmerkey, Teilnehmerdaten& teilnehmerdaten);
    bool selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste);
    bool selectAll(list<Teilnehmerdaten*>& teilnehmerdatenliste);
};
#endif // DAO_QT_TEILNEHMERDATEN_H
