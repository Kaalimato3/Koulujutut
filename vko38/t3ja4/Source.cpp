#include "Opettaja.h"
#include "Opiskelija.h"
#include <iostream>


int main()
{
	Opiskelija ossi;
	Opiskelija oona("123456", "Oona", "Opiskelija", "oona@koulu.fi");
	Opettaja petri;
	Opettaja saana("654321", "Saana", "Toivonen", 15.5);

	ossi.tulosta();

	oona.tulosta();
	ossi.asetaEnimi("Ossi");

	ossi.tulosta();

	petri.tulosta();
	saana.tulosta();

	petri.asetaEnimi("Petri");
	petri.asetaPalkka(14.5);

	petri.tulosta();

	system("pause");
	return 0;
}