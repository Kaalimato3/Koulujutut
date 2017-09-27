#pragma once
#include "Kellonaika.h"
#include "Paivays.h"
#include <string>
using std::string;

class Kalenterimerkinta
{
public:
	Kalenterimerkinta();
	Kalenterimerkinta(const Paivays & paivays, const Kellonaika & aika, const string & asia, bool muistutus);
	Kalenterimerkinta(const Kalenterimerkinta & alkup);
	~Kalenterimerkinta();

	// setters:

	void asetaKellonaika(const Kellonaika & aika);
	void asetaPaivays(const Paivays & paivays);
	void asetaAsia(const string & asia);
	void asetaMuistutus();

	// getters:

	Kellonaika annaKellonaika() const;
	Paivays annaPaivays() const;
	string annaAsia() const;
	bool annaMuistutus() const;

	void tulostaMerkinta() const;
	void kysyTiedot();

private:
	Kellonaika aika_;
	Paivays pvm_;
	string asia_;
	bool muistutus_;
};

