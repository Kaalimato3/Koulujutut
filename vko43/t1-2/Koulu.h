#pragma once
#include <vector>
#include <string>
#include "Koulutusohjelma.h"
using std::vector; using std::string;
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
	int etsiKoulutusohjelma() const;

private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

