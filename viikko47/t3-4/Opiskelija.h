#pragma once
#include "Henkilo.h"

class Opiskelija :
	public Henkilo
{
public:
	Opiskelija();
	Opiskelija(string etunimi, string sukunimi, string osoite, string puhelinnumero, string opiskelijanumero);
	Opiskelija(const Opiskelija & alkup);
	~Opiskelija();

	// setters:

	void asetaOpiskelijanumero(string opiskelijanumero);

	// getters:

	string annaOpiskelijanumero() const;

	//operators:

	Opiskelija & operator = (const Opiskelija vanha);

	void kysyTiedot();
	void tulosta() const;

private:
	string opiskelijanumero_;
};

