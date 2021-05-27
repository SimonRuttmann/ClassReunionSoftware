///////////////////////////////////////////////////////////
//  Teilnehmerdaten.h
//  Implementation of the Class Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
#define EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_

#include "Qt_DAO_Teilnehmerdaten.h"

class Teilnehmerdaten
{

public:
	Teilnehmerdaten();
	Qt_DAO_Teilnehmerdaten *TeilnehmerdatenDao;

	Teilnehmerdaten(int teilnehmerdatenkey, int teilnehmerkey);
	~Teilnehmerdaten();
	int getTeilnehmerdatenkey();
	String Getnachname();
	void Setnachname(String newVal);
	int Getteilnehmerdatenkey();
	void Setteilnehmerdatenkey(int newVal);
	String Gete-mail();
	void Sete-mail(String newVal);
	Adresse Getadresse();
	void Setadresse(Adresse newVal);
	String Getvorname();
	void Setvorname(String newVal);
	int Getschulname();
	void Setschulname(int newVal);
	Datum Getdatum();
	void Setdatum(Datum newVal);
	String Getweitere_telefonnummern();
	void Setweitere_telefonnummern(String newVal);
	int Gethaupttelefonnummer();
	void Sethaupttelefonnummer(int newVal);

private:
	int teilnehmerdatenkey;
	String e-mail;
	Adresse adresse;
	String vorname;
	String nachname;
	int schulname;
	Datum datum;
	String weitere_telefonnummern;
	String haupttelefonnummer;
	int teilnehmerKey;

};
#endif // !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
