#include "Kalenterimerkinta.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;


Kalenterimerkinta::Kalenterimerkinta() : aika_(), pvm_(), asia_(), muistutus_(false)
{
	cout << "Kalenterimerkinta: Oletusrakentaja" << endl;
}

Kalenterimerkinta::Kalenterimerkinta(const Paivays & paivays, const Kellonaika & aika, const string & asia, bool muistutus)
	: pvm_(paivays), aika_(aika), asia_(asia), muistutus_(muistutus)
{

	cout << "Kalenterimerkinta: Parametrillinen rakentaja" << endl;
}

Kalenterimerkinta::Kalenterimerkinta(const Kalenterimerkinta & alkup)
	: pvm_(alkup.pvm_), aika_(alkup.aika_), asia_(alkup.asia_), muistutus_(alkup.muistutus_)
{

	cout << "Kalenterimerkinta: Kopiorakentaja" << endl;
}


Kalenterimerkinta::~Kalenterimerkinta()
{

	cout << "Kalenterimerkinta: Oletuspurkaja" << endl;
	//system("pause");
}

void Kalenterimerkinta::asetaKellonaika(const Kellonaika & aika)
{
	aika_.asetaAika(aika.annaTunnit(), aika.annaMinuutit(), aika.annaSekunnit());
}

void Kalenterimerkinta::asetaPaivays(const Paivays & paivays)
{
	pvm_.asetaKuukausi(paivays.annaKuukausi());
	pvm_.asetaPaiva(paivays.annaPaiva());
	pvm_.asetaVuosi(paivays.annaVuosi());
}

void Kalenterimerkinta::asetaAsia(const string & asia)
{
	asia_ = asia;
}

void Kalenterimerkinta::asetaMuistutus()
{

}

Kellonaika Kalenterimerkinta::annaKellonaika() const
{
	return aika_;
}

Paivays Kalenterimerkinta::annaPaivays() const
{
	return pvm_;
}

string Kalenterimerkinta::annaAsia() const
{
	return asia_;
}

bool Kalenterimerkinta::annaMuistutus() const
{
	return muistutus_;
}

void Kalenterimerkinta::tulostaMerkinta() const
{
	cout << "- - - - -" << endl;
	pvm_.tulosta();
	aika_.tulosta();
	cout << asia_ << endl;
	if (muistutus_)
		cout << "Muistutus on paalla" ;
	cout << endl;
	cout << "- - - - -" << endl;
	
}

void Kalenterimerkinta::kysyTiedot()
{
	string muistutus;
	pvm_.kysyPvm();
	aika_.kysyAika();
	cin.clear();
	cout << "Anna asia: \n";
	getline(cin, asia_);
	cout << "Haluatko muistutuksen? (K/E)";
	getline(cin, muistutus);
	if (muistutus == "K" || muistutus == "k")
		muistutus_ = true;
	else
		muistutus_ = false;

}
