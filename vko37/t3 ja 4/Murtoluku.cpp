#include "Murtoluku.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

void Murtoluku::kysyTiedot()
{
	cout << "Anna nimittaja: ";
	cin >> denom_;
	cout << "Anna osoittaja: ";
	cin >> nom_;
}

void Murtoluku::print()
{
	cout << nom_ << "/" << denom_ << endl;
}

void Murtoluku::sievenna()
{
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
