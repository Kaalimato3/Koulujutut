#pragma once
#include <string>
using std::string;

class Henkilo
{
public:

	Henkilo();
	Henkilo(string etunimi, string sukunimi, string osoite, string puhelinnumero);
	Henkilo(const Henkilo & alkup);
	~Henkilo();

	// setters:

	void asetaEtunimi(string etunimi);
	void asetaSukunimi(string sukunimi);
	void asetaOsoite(string osoite);
	void asetaPuhelinnumero(string puhelinnumero);

	// getters:

	string annaEtunimi() const;
	string annaSukunimi() const;
	string annaOsoite() const;
	string annaPuhelinnumero() const;

	void tulosta() const;
	void kysyTiedot();

private:
	string etunimi_;
	string sukunimi_;
	string osoite_;
	string puhelinnumero_;
};

