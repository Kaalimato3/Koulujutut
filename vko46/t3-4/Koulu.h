#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Koulutusohjelma.h"
using std::vector; using std::string;
using std::ifstream; using std::stringstream;
class Koulu
{
public:
	Koulu();
	Koulu(string nimi);
	~Koulu();

	// getters

	string annaNimi() const;

	// setters

	void asetaNimi(string nimi);

	void lisaaKoulutusohjelma();
	void tulostaKoulutusohjelmat() const;
	void tulostaKoulutusohjelmienMaara() const;
	void lisaaKoulutusohjelmaanOpettaja();
	void tulostaKoulutusohjelmanOpettajat() const;
	void lisaaKoulutusohjelmaanOpiskelija();
	void tulostaKoulutusohjelmanOpiskelijat() const;

	void poistaKoulutusohjelma();
	void poistaOpettaja();
	void poistaOpiskelija();

	int etsiKoulutusohjelma() const;
	int etsiKoulutusohjelma(string s) const;

	void tallennaTiedot() const;
	void lueTiedot();

private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

