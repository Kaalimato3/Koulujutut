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

int Kellonaika::getHours()
{
	return hh_;
	return 0;
}

int Kellonaika::getMins()
{
	return mm_;
	return 0;
}

int Kellonaika::getSecs()
{
	return ss_;
	return 0;
}

void Kellonaika::setHours(int hh)
{
	hh_ = hh;
}

void Kellonaika::setMins(int mm)
{
	mm_ = mm;
}

void Kellonaika::setSecs(int ss)
{
	ss_ = ss;
}

void Kellonaika::setTime(int hh, int mm, int ss)
{
	ss_ = ss;
	mm_ = mm;
	hh_ = hh;
	checkOverflow();
}

void Kellonaika::printTime()
{
	cout << hh_ << ":" << mm_ << ":" << ss_ << endl;
}

void Kellonaika::stepSecs(int ss)
{
	ss_ += ss;
	checkOverflow();
}

void Kellonaika::askTime()
{
}

void Kellonaika::checkOverflow()
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
