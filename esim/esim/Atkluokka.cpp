#include "Atkluokka.h"



Atkluokka::Atkluokka()
	: Luokka(), pcmaara_()
{
}

Atkluokka::Atkluokka(string nimi, int pcmaara)
	: Luokka(nimi), pcmaara_(pcmaara)
{
}


Atkluokka::~Atkluokka()
{
}

Atkluokka & Atkluokka::operator=(const Atkluokka & vanha)
{
	if (this != &vanha)
	{
		Luokka::operator=(vanha);
		pcmaara_ = vanha.pcmaara_;
	}
	return *this;
}

Atkluokka & Atkluokka::operator++()
{
	pcmaara_++;
	return *this;
}
