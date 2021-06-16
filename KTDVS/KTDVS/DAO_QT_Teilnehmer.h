
#ifndef DAO_QT_TEILNEHMER_H
#define DAO_QT_TEILNEHMER_H

#include "I_DAO_Teilnehmer.h"
#include <string>
#include <list>
#include <QSqlQuery>
using namespace std;

class DAO_QT_Teilnehmer : public I_DAO_Teilnehmer
{
private:
    //Notwendige Anfragen zur Implementierung der Methoden
    QSqlQuery   insert_query,
                last_insert_id_query,
                update_query,
                remove_query,
                search_query,
                select_query_all,
                select_query_allOrg,
                select_query_ho;
public:
    template<typename Base, typename T>
    inline bool instanceof(const T*) { return is_base_of<Base, T>::value; }
public:
    //Konstruktor bereitet die Anfragen vor
    DAO_QT_Teilnehmer();

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

#endif //DAO_QT_TEILNEHMER_H
