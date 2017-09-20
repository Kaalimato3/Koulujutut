#include "Opettaja.h"
#include "Opiskelija.h"
#include <iostream>


int main()
{
	Opiskelija ossi;
	Opiskelija oona("123456", "Oona", "Opiskelija", "oona@koulu.fi");

	ossi.tulosta();

	oona.tulosta();
	ossi.asetaEnimi("Ossi");

	ossi.tulosta();

	system("pause");
	return 0;
}