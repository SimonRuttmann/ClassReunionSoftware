///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.h
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
#define EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_

#include "Teilnehmer.h"
#include "I_DAO_Teilnehmer.h"
#include <string>
#include <list>
#include <QSqlQuery>
using namespace std;


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
class Qt_DAO_Teilnehmer : public I_DAO_Teilnehmer
{
private:
    QSqlQuery   insert_query,
                last_insert_id_query,
                insert_select_query,
                update_query,
                remove_query,
                search_query,
                select_query;
public:
    template<typename Base, typename T>
    inline bool instanceof(const T*) { return is_base_of<Base, T>::value; }
public:
	Qt_DAO_Teilnehmer();
	virtual ~Qt_DAO_Teilnehmer();

    bool insert(Teilnehmer& teilnehmer);
    bool update(const Teilnehmer& teilnehmer);
    bool search(Teilnehmer& teilnehmer);
    bool remove(int teilnehmerkey);
    bool select(string name, list<Teilnehmer*>& teilnehmerliste);

};



#endif // !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
