#pragma once
#include "Tyontekija.h"

class Opettaja :
	public Tyontekija
{
public:
	Opettaja();
	Opettaja(string etunimi, string sukunimi, string osoite, string puhelinnumero, string tunnus, float palkka, string opetusala);
	Opettaja(const Opettaja & alkup);
	~Opettaja();

	// setters:

	void asetaOpetusala(string opetusala);

	// getters:

	string annaOpetusala() const;

	void tulosta() const;
	void kysyTiedot();

private:
	string opetusala_;
};

