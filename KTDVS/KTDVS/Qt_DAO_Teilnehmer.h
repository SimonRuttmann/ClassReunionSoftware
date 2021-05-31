///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.h
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
#define EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_

#include "I_DAO_Teilnehmer.h"
#include <string>
#include <list>
#include <QSqlQuery>
using namespace std;

class Qt_DAO_Teilnehmer : public I_DAO_Teilnehmer
{
private:
    //Notwendige Anfragen zur Implementierung der Methoden
    QSqlQuery   insert_query,
                last_insert_id_query,
                update_query,
                remove_query,
                search_query,
                select_query_all,
                select_query_ho;
public:
    template<typename Base, typename T>
    inline bool instanceof(const T*) { return is_base_of<Base, T>::value; }
public:
    //Konstruktor bereitet die Anfragen vor
	Qt_DAO_Teilnehmer();

    //Methoden beschrieben nach dem Interface I_DAO_Teilnehmer.h

    bool remove(int teilnehmerkey);

    bool insertTeilnehmer(Teilnehmer& teilnehmer);
    bool updateTeilnehmer(const Teilnehmer& teilnehmer);
    bool selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste);

    bool selectHo(Organisator& teilnehmer);

    bool insertOrganisator(Organisator& organisator);
    bool updateOrganisator(const Organisator& teilnehmer);
    bool searchOrganisator(Organisator& organisator);
    bool selectAllOrganisatoren(list<Organisator*>& organisatorliste);

};

#endif // !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
