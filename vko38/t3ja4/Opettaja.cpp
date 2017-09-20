#include "Opettaja.h"
#include <iostream>
using std::cout; using std::endl;


Opettaja::Opettaja() : palkka_(0)
{
}

Opettaja::Opettaja(string otunnus, string enimi, string snimi, float palkka):
	otunnus_(otunnus), enimi_(enimi), snimi_(snimi), palkka_(palkka)
{
}


Opettaja::~Opettaja()
{
}

string Opettaja::annaOtunnus()
{
	return otunnus_;
}

string Opettaja::annaEnimi()
{
	return enimi_;
}

string Opettaja::annaSnimi()
{
	return snimi_;
}

float Opettaja::annaPalkka()
{
	return palkka_;
}

void Opettaja::asetaOtunnus(string otunnus)
{
	otunnus_ = otunnus;
}

void Opettaja::asetaEnimi(string enimi)
{
	enimi_ = enimi;
}

void Opettaja::asetaSnimi(string snimi)
{
	snimi_ = snimi;
}

void Opettaja::asetaPalkka(float palkka)
{
	palkka_ = palkka;
}

void Opettaja::tulosta()
{
	cout << otunnus_ << "\t" << enimi_ << "\t" << snimi_ << "\t" << palkka_ << endl;
}
