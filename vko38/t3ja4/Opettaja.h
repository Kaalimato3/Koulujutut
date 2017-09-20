#pragma once
#include <string>
using std::string;

class Opettaja
{
public:

	Opettaja();
	Opettaja(string otunnus, string enimi, string snimi, float palkka);
	~Opettaja();

	// getters:

	string annaOtunnus();
	string annaEnimi();
	string annaSnimi();
	float annaPalkka();

	// setters:

	void asetaOtunnus(string otunnus);
	void asetaEnimi(string enimi);
	void asetaSnimi(string snimi);
	void asetaPalkka(float palkka);

	void tulosta();

private:
	string otunnus_;
	string enimi_;
	string snimi_;
	float palkka_;
};

