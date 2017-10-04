#include "Tyontekija.h"
#include "Opettaja.h"
#include "Opiskelija.h"


int main()
{
	Opiskelija oppilas;
	Opettaja ope;
	Opettaja pena("Pena", "Penttilä", "Katu 4", "040567876", "Pena", 1200, "TITE");
	Opiskelija taru("Taru", "Turunen", "Katu 6", "030543234", "1234");
	Opettaja pena2(pena);
	Opiskelija taru2(taru);

	oppilas.tulosta();
	ope.tulosta();
	pena.tulosta();
	taru.tulosta();
	pena2.tulosta();
	taru2.tulosta();

	oppilas.kysyTiedot();
	ope.kysyTiedot();
	oppilas.tulosta();
	ope.tulosta();
	system("pause");
	return 0;
}