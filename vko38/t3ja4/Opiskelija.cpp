#include "Opiskelija.h"
#include <iostream>
using std::cout; using std::endl;


Opiskelija::Opiskelija() // string-luokka alustaa itsensä
{
}

Opiskelija::Opiskelija(string num, string enimi, string snimi, string email) : 
	num_(num), enimi_(enimi), snimi_(snimi), email_(email)
{
}


Opiskelija::~Opiskelija()
{
}

string Opiskelija::annaNum()
{
	return num_;
}

string Opiskelija::annaEnimi()
{
	return enimi_;
}

string Opiskelija::annaSnimi()
{
	return snimi_;
}

string Opiskelija::annaEmail()
{
	return email_;
}

void Opiskelija::asetaNum(string num)
{
	num_ = num;
}

void Opiskelija::asetaEnimi(string enimi)
{
	enimi_ = enimi;
}

void Opiskelija::asetaSnimi(string snimi)
{
	snimi_ = snimi;
}

void Opiskelija::asetaEmail(string email)
{
	email_ = email;
}

void Opiskelija::tulosta()
{
	cout << num_ << " " << enimi_ << " " << snimi_ << " " << email_ << endl;
}
