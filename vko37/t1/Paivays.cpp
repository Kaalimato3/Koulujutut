#include "Paivays.h"
#include <iostream>

using std::cout; using std::endl;

void Paivays::asetaPaiva(int paiva)
{
	paiva_ = paiva;
}

void Paivays::asetaKuukausi(int kk)
{
	kk_ = kk;
}

Paivays::Paivays()
{
	cout << "Paivays: oletus rakentaja." << endl;

	vuosi_ = 1970;
	kk_ = 1;
	paiva_ = 1;
}

Paivays::Paivays(int vuosi, int kk, int paiva)
{
	cout << "Paivays: parametrillinen rakentaja" << endl;

	vuosi_ = vuosi;
	kk_ = kk;
	paiva_ = paiva;
}

Paivays::~Paivays()
{
	cout << "Paivays: oletuspurkaja" << endl;
	system("pause");
}

void Paivays::asetaVuosi(int vuosi)
{
	vuosi_ = vuosi;
}

int Paivays::annaPaiva()
{
	return paiva_;
}

int Paivays::annaKuukausi()
{
	return kk_;
}

int Paivays::annaVuosi()
{
	return vuosi_;
}

void Paivays::tulosta()
{
	cout << paiva_ << "." << kk_ << "." << vuosi_ << endl;
}