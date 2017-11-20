#include "Koulu.h"

using std::cin; using std::cout; using std::getline; using std::endl;

Koulu::Koulu()
	:nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(string nimi)
	:nimi_(nimi), koulutusohjelmat_()
{
}


Koulu::~Koulu()
{
}

string Koulu::annaNimi() const
{
	return nimi_;
}

void Koulu::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

void Koulu::lisaaKoulutusohjelma()
{
	string nimi;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, nimi);
	Koulutusohjelma uusKoulutusohjelma(nimi);
	koulutusohjelmat_.push_back(uusKoulutusohjelma);
}

void Koulu::tulostaKoulutusohjelmat() const
{
	for (int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		cout << koulutusohjelmat_[i].annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusohjelmien m��r�: " << koulutusohjelmat_.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	int indeksi = etsiKoulutusohjelma();
	if(indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpettaja();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpettajat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpiskelija();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpiskelijat();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

void Koulu::poistaKoulutusohjelma()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_.erase(koulutusohjelmat_.begin() + indeksi);
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;

}

void Koulu::poistaOpettaja()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].poistaOpettaja();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

void Koulu::poistaOpiskelija()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].poistaOpiskelija();
	else
		cout << "Koulutuohjelmaa ei l�ytynyt" << endl;
}

int Koulu::etsiKoulutusohjelma() const
{
	string nimi;
	cout << "Anna etsitt�v�n koulutusohjelman nimi: ";
	getline(cin, nimi);
	for (unsigned int i = 0; i<koulutusohjelmat_.size(); i++)
	{
		if (nimi == koulutusohjelmat_[i].annaNimi())
		{
			return i;
		}
	}
	return -1; // ei l�ytynyt, palautetaan -1
}

void Koulu::tallennaTiedot() const
{
	for (size_t i = 0; i < koulutusohjelmat_.size(); i++)
	{
		koulutusohjelmat_[i].tallennaHenkilot();
	}
}

void Koulu::lueTiedot()
{
	string line;
	ifstream myfile("Opettaja.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
	}
	myfile.close();

	myfile.open("Opiskelija.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
	}

}
