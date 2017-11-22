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
	for (size_t i = 0; i < koulutusohjelmat_.size(); i++)
	{
		cout << koulutusohjelmat_[i].annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusohjelmien määrä: " << koulutusohjelmat_.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	int indeksi = etsiKoulutusohjelma();
	if(indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpettaja();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpettajat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].lisaaOpiskelija();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].tulostaOpiskelijat();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::poistaKoulutusohjelma()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_.erase(koulutusohjelmat_.begin() + indeksi);
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;

}

void Koulu::poistaOpettaja()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].poistaOpettaja();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

void Koulu::poistaOpiskelija()
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0)
		koulutusohjelmat_[indeksi].poistaOpiskelija();
	else
		cout << "Koulutuohjelmaa ei löytynyt" << endl;
}

int Koulu::etsiKoulutusohjelma() const
{
	string nimi;
	cout << "Anna etsittävän koulutusohjelman nimi: ";
	getline(cin, nimi);
	return etsiKoulutusohjelma(nimi); // ei löytynyt, palautetaan -1
}

int Koulu::etsiKoulutusohjelma(string s) const
{
	for (unsigned int i = 0; i<koulutusohjelmat_.size(); i++)
	{
		if (s == koulutusohjelmat_[i].annaNimi())
		{
			return i;
		}
	}
	return -1; // ei löytynyt, palautetaan -1
}

void Koulu::tallennaTiedot() const
{
	ofstream filu;

	filu.open("Opettaja.csv");
	if (filu.is_open())
	{
		for (size_t i = 0; i < koulutusohjelmat_.size(); i++)
		{
			koulutusohjelmat_[i].tallennaOpettajat(filu);
		}
	}
	else
		cout << "Tiedoston avaaminen ei onnistunut." << endl;
	filu.close();

	filu.open("Opiskelija.csv");
	if (filu.is_open())
	{
		for (size_t i = 0; i < koulutusohjelmat_.size(); i++)
		{
			koulutusohjelmat_[i].tallennaOpiskelijat(filu);
		}
	}
	else
		cout << "Tiedoston avaaminen ei onnistunut." << endl;
	filu.close();
}

void Koulu::lueTiedot()
{
	string line, column;
	stringstream sstream;
	ifstream myfile;
	string tiedotOpettaja[8];
	string tiedotOpiskelija[6];
	Koulutusohjelma uusiOhjelma;
	int i = 0, indeksi = -1;

	myfile.open("Opettaja.csv");

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			sstream << line;
			while (getline(sstream, column, ';'))
			{
				tiedotOpettaja[i] = column;
				i++;
				if (i == 8)
				{
					i = 0;
					
					indeksi = etsiKoulutusohjelma(tiedotOpettaja[0]);

					if (!(indeksi >= 0)) // Onko kyseistä koulutusohjelmaa olemassa, jos ei luodaan uusi
					{
						uusiOhjelma.asetaNimi(tiedotOpettaja[0]);
						koulutusohjelmat_.push_back(uusiOhjelma);
						indeksi = etsiKoulutusohjelma(tiedotOpettaja[0]);
						// Nyt indeksi osoittaa olemassa olevaan koulutusohjelmaan
					}

					koulutusohjelmat_[indeksi].lisaaOpettaja(tiedotOpettaja[1], tiedotOpettaja[2], tiedotOpettaja[3],
						tiedotOpettaja[4], tiedotOpettaja[5], atof(tiedotOpettaja[6].c_str()), tiedotOpettaja[7]);
				}
			}
			sstream.clear();
		}
	}
	else
		cout << "Tiedoston avaaminen ei onnistunut." << endl;
	myfile.close();

	myfile.open("Opiskelija.csv");

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			sstream << line;
			while (getline(sstream, column, ';'))
			{
				tiedotOpiskelija[i] = column;
				i++;
				if (i == 6)
				{
					i = 0;

					indeksi = etsiKoulutusohjelma(tiedotOpiskelija[0]);

					if (!(indeksi >= 0)) // Onko kyseistä koulutusohjelmaa olemassa, jos ei luodaan uusi
					{
						uusiOhjelma.asetaNimi(tiedotOpiskelija[0]);
						koulutusohjelmat_.push_back(uusiOhjelma);
						indeksi = etsiKoulutusohjelma(tiedotOpiskelija[0]);
						// Nyt indeksi osoittaa olemassa olevaan koulutusohjelmaan
					}

					koulutusohjelmat_[indeksi].lisaaOpiskelija(tiedotOpiskelija[1], tiedotOpiskelija[2], tiedotOpiskelija[3],
						tiedotOpiskelija[4], tiedotOpiskelija[5]);
				}
			}
			sstream.clear();
		}
	}
	else
		cout << "Tiedoston avaaminen ei onnistunut." << endl;
	myfile.close();
}
