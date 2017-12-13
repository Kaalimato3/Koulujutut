#include "Sovellus.h"
#include <iostream>
#include <exception>

using std::cin; using std::cout; using std::getline; using std::endl;
using std::exception;

Sovellus::Sovellus()
{
}


Sovellus::~Sovellus()
{

}

void Sovellus::aja() const
{
	Koulu koulu;
	string valinta = "";

	while (valinta != "0")
	{
		valinta = tulostaValikko();

		if (valinta == "0")
		{

		}
		else if (valinta == "1")
		{
			koulu.lisaaKoulutusohjelma();
		}
		else if (valinta == "2")
		{
			koulu.tulostaKoulutusohjelmat();
		}
		else if (valinta == "3")
		{
			koulu.tulostaKoulutusohjelmienMaara();
		}
		else if (valinta == "4")
		{
			koulu.lisaaKoulutusohjelmaanOpettaja();
		}
		else if (valinta == "5")
		{
			koulu.tulostaKoulutusohjelmanOpettajat();
		}
		else if (valinta == "6")
		{
			koulu.lisaaKoulutusohjelmaanOpiskelija();
		}
		else if (valinta == "7")
		{
			koulu.tulostaKoulutusohjelmanOpiskelijat();
		}
		else if (valinta == "8")
		{
			koulu.poistaKoulutusohjelma();
		}
		else if (valinta == "9")
		{
			koulu.poistaOpettaja();
		}
		else if (valinta == "10")
		{
			koulu.poistaOpiskelija();
		}
		else if (valinta == "11")
		{
			koulu.vaihdaKoulutusohjelmanNimi();
		}
		else if (valinta == "12")
		{
			koulu.paivitaOpettajanTiedot();
		}
		else if (valinta == "13")
		{
			koulu.paivitaOpiskelijanTiedot();
		}
		else if (valinta == "14")
		{
			koulu.lueTiedot();
		}
		else if (valinta == "15")
		{
			koulu.tallennaTiedot();
		}
		else
			cout << "Virheellinen syöttö" << endl;
	}

}

string Sovellus::tulostaValikko() const
{
	string valinta = "";
	cout << "\n\tValikko:" << endl;
	cout << "0. Lopeta" << endl;
	cout << "1. Lisää koulutusohjelma" << endl;
	cout << "2. Tulosta koulutusohjelmat" << endl;
	cout << "3. Tulosta koulutusohjelmien lukumäärä" << endl;
	cout << "4. Lisää opettaja koulutusohjelmaan" << endl;
	cout << "5. Tulosta koulutusohjelman opettajat" << endl;
	cout << "6. Lisää opiskelija koulutusohjelmaan" << endl;
	cout << "7. Tulosta koulutusohjelman opiskelijat" << endl;
	cout << "8. Poista koulutusohjelma" << endl;
	cout << "9. Poista opettaja koulutusohjelmasta" << endl;
	cout << "10. Poista opiskelija koulutusohjelmasta" << endl;
	cout << "11. Muuta koulutusohjelman nimi" << endl;
	cout << "12. Muuta opettajan tietoja" << endl;
	cout << "13. Muuta opiskelijan tietoja" << endl;
	cout << "14. Lue tiedot tiedostosta" << endl;
	cout << "15. Tallenna tiedostoon" << endl;

	cout << "Valintasi: ";
	getline(cin, valinta);

	return valinta;
}
