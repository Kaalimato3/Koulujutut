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
	uusOpe.kysyTiedot(); // kysyt��n apuolion tiedot
	opettajat_.push_back(uusOpe); // lis�t�n opettaja vectoriin
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija uusOpiskelija;
	uusOpiskelija.kysyTiedot();
	opiskelijat_.push_back(uusOpiskelija);
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
		cout << "Opiskelijaa ei l�ydy" << endl;
}

void Koulutusohjelma::poistaOpettaja()
{
	int indeksi = etsiOpettaja();
	if (indeksi >= 0)
		opettajat_.erase(opettajat_.begin() + indeksi);
	else
		cout << "Opettajaa ei l�ydy" << endl;
}

int Koulutusohjelma::etsiOpiskelija() const
{
	string nro;
	cout << "Anna etsitt�v�n opiskelijan opiskelijanumero: ";
	getline(cin, nro);
	for (unsigned int i = 0; i<opiskelijat_.size(); i++)
	{
		if (nro == opiskelijat_[i].annaOpiskelijanumero())
		{
			return i;
		}
	}
	return -1; // ei l�ytynyt, palautetaan -1
}

int Koulutusohjelma::etsiOpettaja() const
{
	string nro;
	cout << "Anna etsitt�v�n opettajan tunnus: ";
	getline(cin, nro);
	for (unsigned int i = 0; i<opettajat_.size(); i++)
	{
		if (nro == opettajat_[i].annaTunnus())
		{
			return i;
		}
	}
	return -1; // ei l�ytynyt, palautetaan -1
}
