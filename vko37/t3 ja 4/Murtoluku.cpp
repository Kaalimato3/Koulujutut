#include "Murtoluku.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

void Murtoluku::kysyTiedot()
{
	cout << "Anna osoittaja: ";
	cin >> nom_;
	cout << "Anna nimittaja: ";
	cin >> denom_;
}

void Murtoluku::print()
{
	cout << nom_ << "/" << denom_ << endl;
}

int Murtoluku::sievenna()
{
	int r1 = 0, r2 = 0, r3;
	if (denom_ == nom_)
	{
		denom_ = 1;
		nom_ = 1;
		return 0;
	}

	if (nom_ > denom_)
	{
		r1 = nom_;
		r2 = denom_;
		r3 = r1 % r2;
		while (r3 != 0)
		{
			r1 = r2;
			r2 = r3;
			r3 = r1 % r2;
		}
		nom_ /= r2;
		denom_ /= r2;
	}

	if (denom_ > nom_)
	{
		r1 = nom_;
		r2 = denom_;
		r3 = r1 % r2;
		while (r3 != 0)
		{
			r1 = r2;
			r2 = r3;
			r3 = r1 % r2;
		}
		denom_ /= r2;
		nom_ /= r2;
	}
	return r2;
}

void Murtoluku::setDenom(int n)
{
	denom_ = n;
}

void Murtoluku::setNom(int n)
{
	nom_ = n;
}

int Murtoluku::getDenom()
{
	return denom_;
}

int Murtoluku::getNom()
{
	return nom_;
}
