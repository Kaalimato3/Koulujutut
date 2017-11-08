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

private:

	int pcmaara_;
};

