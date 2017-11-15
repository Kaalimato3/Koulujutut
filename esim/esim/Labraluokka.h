#pragma once
#include "Luokka.h"
class Labraluokka :
	public Luokka
{
public:
	Labraluokka();
	Labraluokka(string nimi, string l);
	~Labraluokka();

	Labraluokka & operator = (const Labraluokka & vanha);
	void tulosta() const;

private:
	string laite_;
};

