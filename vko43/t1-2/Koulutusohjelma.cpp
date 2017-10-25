#include "Koulutusohjelma.h"



Koulutusohjelma::Koulutusohjelma()
	: nimi_(), opettajat_(), opiskelijat_()
{
}

Koulutusohjelma::Koulutusohjelma(string nimi)
	:nimi_(nimi), opettajat_(), opiskelijat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja uusOpe; // luodaan apuolio
	uusOpe.kysyTiedot(); // kysyt��n apuolion tiedot
	opettajat_.push_back(uusOpe); // lis�t�n opettaja vectoriin
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija uusOpiskelija;
	uusOpiskelija.kysyTiedot();
	opiskelijat_.push_back(uusOpiskelija);
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++)
	{
		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++)
	{
		opiskelijat_[i].tulosta();
	}
}
