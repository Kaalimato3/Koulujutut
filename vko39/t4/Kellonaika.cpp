#include "Kellonaika.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

Kellonaika::Kellonaika() : hh_(0), mm_(0), ss_(0)
{
	cout << "Kellonaika: Oletusrakentaja" << endl;
}

Kellonaika::Kellonaika(int hh, int mm, int ss) : hh_(hh), mm_(mm), ss_(ss)
{

	cout << "Kellonaika: Parametrillinen rakentaja" << endl;
}

Kellonaika::Kellonaika(const Kellonaika & alkup) : hh_(alkup.hh_), mm_(alkup.mm_), ss_(alkup.ss_)
{

	cout << "Kellonaika: Kopiorakentaja" << endl;
}

Kellonaika::~Kellonaika()
{

	cout << "Kellonaika: Oletuspurkaja" << endl;
	system("pause");
}

int Kellonaika::annaTunnit() const
{
	return hh_;
}

int Kellonaika::annaMinuutit() const
{
	return mm_;
}

int Kellonaika::annaSekunnit() const
{
	return ss_;
}

void Kellonaika::asetaTunnit(int hh)
{
	hh_ = hh;
}

void Kellonaika::asetaMinuutit(int mm)
{
	mm_ = mm;
}

void Kellonaika::asetaSekunnit(int ss)
{
	ss_ = ss;
}

void Kellonaika::asetaAika(int hh, int mm, int ss)
{
	ss_ = ss;
	mm_ = mm;
	hh_ = hh;
	tarkistaYlivuoto();
}

void Kellonaika::tulosta() const
{
	cout << hh_ << ":" << mm_ << ":" << ss_ << endl;
}

void Kellonaika::askellaSekunteja(int ss)
{
	ss_ += ss;
	tarkistaYlivuoto();
}

void Kellonaika::kysyAika()
{
}

void Kellonaika::tarkistaYlivuoto()
{
	while (ss_ >= 60 || mm_ >= 60)
	{
		mm_ += ss_ / 60;
		ss_ %= 60;
		while (mm_ >= 60)
		{
			hh_ += mm_ / 60;
			mm_ %= 60;
		}
	}
}
