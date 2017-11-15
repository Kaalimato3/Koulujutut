#include "Labraluokka.h"



Labraluokka::Labraluokka()
	: Luokka(), laite_()
{
}

Labraluokka::Labraluokka(string nimi, string l)
	: Luokka(nimi), laite_(l)
{
}


Labraluokka::~Labraluokka()
{
}

Labraluokka & Labraluokka::operator=(const Labraluokka & vanha)
{
	if (this != &vanha)
	{
		Luokka::operator=(vanha);
		laite_ = vanha.laite_;
	}
	return *this;
}

void Labraluokka::tulosta() const
{
	Luokka::tulosta();
	cout << "Laite: " << laite_ << endl;
}
