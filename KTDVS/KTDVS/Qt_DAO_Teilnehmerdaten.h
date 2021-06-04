///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.h
//  Implementation of the Class Qt_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_)
#define EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_

#include "I_DAO_Teilnehmerdaten.h"
class Teilnehmer;
#include <string>
#include <list>
#include <QSqlQuery>

using namespace std;
class Qt_DAO_Teilnehmerdaten : public I_DAO_Teilnehmerdaten
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
                select_query_first;
public:
    //Konstruktor bereitet die Anfragen vor
	Qt_DAO_Teilnehmerdaten();


    //Methoden beschrieben nach dem Interface I_DAO_Teilnehmerdaten
    bool insert(Teilnehmerdaten& teilnehmerdaten);
    bool selectFirstOfTeilnehmer(int teilnehmerkey, Teilnehmerdaten& teilnehmerdaten);
    bool selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste);
    bool selectAll(list<Teilnehmerdaten*>& teilnehmerdatenliste);
};
#endif // !defined(EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_)
