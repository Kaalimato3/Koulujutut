#pragma once
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"
#include <string>
using std::vector; using std::string;

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
	void lisaaOpiskelija();
	void tulostaOpettajat() const;
	void tulostaOpiskelijat() const;

private:
	string nimi_;
	vector <Opettaja> opettajat_;
	vector <Opiskelija> opiskelijat_;
	// <   >- template operaattori
};

