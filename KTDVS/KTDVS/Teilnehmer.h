///////////////////////////////////////////////////////////
//  Teilnehmer.h
//  Implementation of the Class Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
#define EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_

#include <list>
#include <string>
using namespace std;
//#include "Qt_DAO_Teilnehmer.h"
class View_VersionsverlaufDetailiert;

class Qt_DAO_Teilnehmer;
class Teilnehmerdaten;

class Teilnehmer
{

public:
	Qt_DAO_Teilnehmer *TeilnehmerDAO;
	list<Teilnehmerdaten*> *m_Teilnehmerdaten;
	View_VersionsverlaufDetailiert *m_View_VersionsverlaufDetailiert;

	Teilnehmer(Teilnehmerdaten teilnehmerdaten);
	Teilnehmer();
	~Teilnehmer();
   // Teilnehmer(int teilnehmerkey, string passwort, bool isHauptorganisator);
	Teilnehmerdaten* getTeilnehmerdaten();
	Teilnehmerdaten teilnehmerdatenErstellen();
    void TeilnehmerdatenLoeschen();
    int getTeilnehmerkey()const;
    void setTeilnehmerkey(int newVal);
    bool pruefePasswort(string passwort);
  //  void setPasswort(string pw);
 //   string getPasswort()const;
  //  void setHauptorganisator(bool ho);
 //   bool isHauptorganisator()const;
private:
  //  bool isHauptorg;
  //  string passwort;
	int teilnehmerkey;

};
#endif // !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
