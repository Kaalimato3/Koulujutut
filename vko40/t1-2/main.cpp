#include "Tyontekija.h"
#include "Opettaja.h"
#include "Opiskelija.h"


int main()
{
	Opiskelija oppilas;
	Opettaja ope;
	oppilas.kysyTiedot();
	oppilas.tulosta();
	ope.kysyTiedot();
	ope.tulosta();

	system("pause");
	return 0;
}