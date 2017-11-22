#include "Opiskelija.h"
#include <iostream>
using std::cout; using std::cin; using std::getline; using std::endl;



Opiskelija::Opiskelija() : Henkilo(), opiskelijanumero_()
{
}

Opiskelija::Opiskelija(string etunimi, string sukunimi, string osoite, string puhelinnumero, string opiskelijanumero)
	: Henkilo(etunimi, sukunimi, osoite, puhelinnumero), opiskelijanumero_(opiskelijanumero)
{
}

Opiskelija::Opiskelija(const Opiskelija & alkup)
	: Henkilo(alkup), opiskelijanumero_(alkup.opiskelijanumero_)
{
}


Opiskelija::~Opiskelija()
{
}

void Opiskelija::asetaOpiskelijanumero(string opiskelijanumero)
{
	opiskelijanumero_ = opiskelijanumero;
}

string Opiskelija::annaOpiskelijanumero() const
{
	return opiskelijanumero_;
}

Opiskelija & Opiskelija::operator=(const Opiskelija vanha)
{
	if (this != &vanha)
	{
		Henkilo::operator=(vanha);
		opiskelijanumero_ = vanha.opiskelijanumero_;
	}
	return *this;
}

void Opiskelija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna opiskelijanumero: ";
	getline(cin, opiskelijanumero_);
}

void Opiskelija::tulosta() const
{
	Henkilo::tulosta();
	cout << opiskelijanumero_ << endl;
}
