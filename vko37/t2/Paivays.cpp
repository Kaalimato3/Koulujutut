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