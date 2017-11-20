#pragma once
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"
#include <string>
#include <iostream>
#include <fstream>
using std::vector; using std::string; using std::cout; using std::getline; using std::cin;
using std::ofstream;

class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(string nimi);
	~Koulutusohjelma();

	// getters

	string annaNimi() const;

	// setters

	void asetaNimi(string nimi);

	void lisaaOpettaja();
	void lisaaOpettaja(Opettaja opettaja);
	void lisaaOpettaja(string etunimi, string sukunimi, string osoite, string puhelinnumero, string tunnus, float palkka, string opetusala);
	void lisaaOpiskelija();
	void lisaaOpiskelija(Opiskelija opiskelija);
	void lisaaOpiskelija(string etunimi, string sukunimi, string osoite, string puhelinnumero, string opiskelijanumero);
	void tulostaOpettajat() const;
	void tulostaOpiskelijat() const;

	void poistaOpiskelija();
	void poistaOpettaja();

	int etsiOpiskelija() const;
	int etsiOpettaja() const;

	void tallennaHenkilot() const;

private:
	string nimi_;
	vector <Opettaja> opettajat_;
	vector <Opiskelija> opiskelijat_;
	// <   >- template operaattori
};

