#include "Paivays.h"
#include <iostream>

using std::cout; using std::endl;

// public

Paivays::Paivays(): pp_(1), kk_(1), vv_(1970) 
// Oletusrakentaja
{
	cout << "Paivays: Oletusrakentaja." << endl;
}

Paivays::Paivays(int vuosi, int kk, int paiva) : pp_(paiva), kk_(kk), vv_(vuosi)
// Parametrilinen rakentaja
{
	cout << "Paivays: Parametrillinen rakentaja" << endl;
}

Paivays::~Paivays()
// Oletuspurkaja
{
	cout << "Paivays: Oletuspurkaja" << endl;
	//system("pause");
}

Paivays::Paivays(const Paivays & alkup) : pp_(alkup.pp_), kk_(alkup.kk_), vv_(alkup.vv_)
// Kopiorakentaja
{
	cout << "Paivays: Kopiorakentaja" << endl;
}

// setterit

void Paivays::asetaPaiva(int paiva)
{
	pp_ = paiva;
}

void Paivays::asetaKuukausi(int kk)
{
	kk_ = kk;
}

void Paivays::asetaVuosi(int vuosi)
{
	vv_ = vuosi;
}

// getterit

int Paivays::annaPaiva() const
{
	return pp_;
}

int Paivays::annaKuukausi() const
{
	return kk_;
}

int Paivays::annaVuosi() const
{
	return vv_;
}


void Paivays::tulosta() const
{
	cout << pp_ << "." << kk_ << "." << vv_ << endl;
}

void Paivays::lisaaPaiva()
{
	pp_++;
	if (pp_ > montakoPaivaaKuukaudessa())
	{
		kk_++;
		pp_ = 1;
		if (kk_ > 12)
		{
			vv_++;
			kk_ = 1;
		}
	}
}

int Paivays::montakoPaivaaKuukaudessa() const
{
	if (kk_ == 1 || kk_ == 3 || kk_ == 5 || kk_ == 7 || kk_ == 8 || kk_ == 10 || kk_ == 12)
		return 31;
	else if (kk_ == 4 || kk_ == 6 || kk_ == 9 || kk_ == 11)
		return 30;
	else if (vv_ % 4 == 0 && (vv_ % 100 != 0 || vv_ % 400 == 0))
		return 29; // karkausvuoden helmikuu
	else
		return 28;
}

// private:

void Paivays::tarkista()
{
	
}
