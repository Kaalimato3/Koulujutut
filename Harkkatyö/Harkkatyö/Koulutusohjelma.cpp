#include "Koulutusohjelma.h"
using std::vector; using std::endl; using std::cout;



Koulutusohjelma::Koulutusohjelma()
	: nimi_(), opettajat_(), opiskelijat_()
{
}

Koulutusohjelma::Koulutusohjelma(string nimi)
	:nimi_(nimi), opettajat_(), opiskelijat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja uusOpe; // luodaan apuolio
	uusOpe.kysyTiedot(); // kysyt‰‰n apuolion tiedot
	opettajat_.push_back(uusOpe); // lis‰t‰n opettaja vectoriin
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija uusOpiskelija;
	uusOpiskelija.kysyTiedot();
	opiskelijat_.push_back(uusOpiskelija);
}

void Koulutusohjelma::lisaaOpettaja(Opettaja opettaja)
{
	opettajat_.push_back(opettaja);
}

void Koulutusohjelma::lisaaOpettaja(string etunimi, string sukunimi, string osoite, string puhelinnumero, string tunnus, float palkka, string opetusala)
{
	Opettaja opettaja(etunimi, sukunimi, osoite, puhelinnumero, tunnus, palkka, opetusala);
	opettajat_.push_back(opettaja);
}

void Koulutusohjelma::lisaaOpiskelija(Opiskelija opiskelija)
{
	opiskelijat_.push_back(opiskelija);
}

void Koulutusohjelma::lisaaOpiskelija(string etunimi, string sukunimi, string osoite, string puhelinnumero, string opiskelijanumero)
{
	Opiskelija opiskelija(etunimi, sukunimi, osoite, puhelinnumero, opiskelijanumero);
	opiskelijat_.push_back(opiskelija);
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++)
	{
		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++)
	{
		opiskelijat_[i].tulosta();
	}
}

void Koulutusohjelma::poistaOpiskelija()
{
	int indeksi = etsiOpiskelija();
	if (indeksi >= 0)
		opiskelijat_.erase(opiskelijat_.begin() + indeksi);
	else
		cout << "Opiskelijaa ei lˆydy" << endl;
}

void Koulutusohjelma::poistaOpettaja()
{
	int indeksi = etsiOpettaja();
	if (indeksi >= 0)
		opettajat_.erase(opettajat_.begin() + indeksi);
	else
		cout << "Opettajaa ei lˆydy" << endl;
}

void Koulutusohjelma::paivitaOpettajanTiedot()
{
	int indeksi = etsiOpettaja();
	if (indeksi >= 0)
		opettajat_[indeksi].kysyTiedot();
}

void Koulutusohjelma::paivitaOpiskelijanTiedot()
{
	int indeksi = etsiOpiskelija();
	if (indeksi >= 0)
		opiskelijat_[indeksi].kysyTiedot();
}

int Koulutusohjelma::etsiOpiskelija() const
{
	string nro;
	cout << "Anna etsitt‰v‰n opiskelijan opiskelijanumero: ";
	getline(cin, nro);
	for (unsigned int i = 0; i<opiskelijat_.size(); i++)
	{
		if (nro == opiskelijat_[i].annaOpiskelijanumero())
		{
			return i;
		}
	}
	return -1; // ei lˆytynyt, palautetaan -1
}

int Koulutusohjelma::etsiOpettaja() const
{
	string nro;
	cout << "Anna etsitt‰v‰n opettajan tunnus: ";
	getline(cin, nro);
	for (unsigned int i = 0; i<opettajat_.size(); i++)
	{
		if (nro == opettajat_[i].annaTunnus())
		{
			return i;
		}
	}
	return -1; // ei lˆytynyt, palautetaan -1
}

void Koulutusohjelma::tallennaOpettajat(ofstream& filu) const
{
	// Kirjoitetaan opettajat tiedostoon
	for (size_t i = 0; i < opettajat_.size(); i++)
	{
		filu << nimi_ << ";"
			<< opettajat_[i].annaEtunimi() << ";"
			<< opettajat_[i].annaSukunimi() << ";"
			<< opettajat_[i].annaOsoite() << ";"
			<< opettajat_[i].annaPuhelinnumero() << ";"
			<< opettajat_[i].annaTunnus() << ";"
			<< opettajat_[i].annaPalkka() << ";"
			<< opettajat_[i].annaOpetusala() << ";"
			<< endl;
	}
}

void Koulutusohjelma::tallennaOpiskelijat(ofstream& filu) const
{
	// Kirjoitetaan opiskelijat tiedostoon
	for (size_t i = 0; i < opiskelijat_.size(); i++)
	{
		filu << nimi_ << ";"
			<< opiskelijat_[i].annaEtunimi() << ";"
			<< opiskelijat_[i].annaSukunimi() << ";"
			<< opiskelijat_[i].annaOsoite() << ";"
			<< opiskelijat_[i].annaPuhelinnumero() << ";"
			<< opiskelijat_[i].annaOpiskelijanumero() << ";"
			<< endl;
	}
}
