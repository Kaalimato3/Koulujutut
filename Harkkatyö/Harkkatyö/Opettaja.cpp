#include "Opettaja.h"
#include <iostream>
using std::cout; using std::cin; using std::getline; using std::endl;



Opettaja::Opettaja() : Tyontekija(), opetusala_()
{
}

Opettaja::Opettaja(string etunimi, string sukunimi, string osoite, string puhelinnumero, string tunnus, float palkka, string opetusala)
	: Tyontekija(etunimi, sukunimi, osoite, puhelinnumero, tunnus, palkka), opetusala_(opetusala)
{
}

Opettaja::Opettaja(const Opettaja & alkup)
	: Tyontekija(alkup), opetusala_(alkup.opetusala_)
{
}


Opettaja::~Opettaja()
{
}

void Opettaja::asetaOpetusala(string opetusala)
{
	opetusala_ = opetusala;
}

string Opettaja::annaOpetusala() const
{
	return opetusala_;
}

Opettaja & Opettaja::operator=(const Opettaja & vanha)
{
	if (this != &vanha)
	{
		Tyontekija::operator=(vanha);
		opetusala_ = vanha.opetusala_;
	}
	return *this;
}

void Opettaja::tulosta() const
{
	Tyontekija::tulosta();
	cout << opetusala_ << endl;
}

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	cout << "Anna opetusala: ";
	getline(cin, opetusala_);
}
