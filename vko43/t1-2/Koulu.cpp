#include "Koulu.h"
#include <iostream>

using std::cin; using std::cout; using std::getline; using std::endl;

Koulu::Koulu()
	:nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(string nimi)
	:nimi_(nimi), koulutusohjelmat_()
{
}


Koulu::~Koulu()
{
}

string Koulu::annaNimi() const
{
	return nimi_;
}

void Koulu::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

void Koulu::lisaaKoulutusohjelma()
{
	string nimi;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, nimi);
	Koulutusohjelma uusKoulutusohjelma(nimi);
	koulutusohjelmat_.push_back(uusKoulutusohjelma);
}

void Koulu::tulostaKoulutusohjelmat() const
{
	for (int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		cout << koulutusohjelmat_[i].annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusohjelmien määrä: " << koulutusohjelmat_.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	int indeksi = etsiKoulutusohjelma();
	if(indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpettaja();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpettajat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpiskelija();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpiskelijat();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

int Koulu::etsiKoulutusohjelma() const
{
	string nimi;
	cout << "Anna etsittävän koulutusohjelman nimi: ";
	getline(cin, nimi);
	for (unsigned int i = 0; i<koulutusohjelmat_.size(); i++)
	{
		if (nimi == koulutusohjelmat_[i].annaNimi())
		{
			return i;
		}
	}
	return -1; // ei löytynyt, palautetaan -1
}