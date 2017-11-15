#pragma once
#include "Luokka.h"

class Atkluokka :
	public Luokka
{
public:
	Atkluokka();
	Atkluokka(string nimi, int pcmaara);
	~Atkluokka();

	Atkluokka & operator = (const Atkluokka & vanha);
	Atkluokka & operator ++ ();
	void tulosta() const;

private:

	int pcmaara_;
};

