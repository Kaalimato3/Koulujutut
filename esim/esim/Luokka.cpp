#include "Luokka.h"

Luokka::Luokka() : nimi_("")
{
}

Luokka::Luokka(string nimi) : nimi_(nimi)
{
}


Luokka::~Luokka()
{
}

void Luokka::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

Luokka & Luokka::operator=(const Luokka & vanha)
{
	if (this != &vanha)
	{
		nimi_ = vanha.nimi_;
	}
	return *this;
}

void Luokka::tulosta() const
{
	cout << "Luokka: " << nimi_ << endl;
}
