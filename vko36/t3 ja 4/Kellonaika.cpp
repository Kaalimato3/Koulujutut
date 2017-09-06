#include "Kellonaika.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

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
	cout << endl << hh_ << ":" << mm_ << ":" << ss_ << endl;
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
