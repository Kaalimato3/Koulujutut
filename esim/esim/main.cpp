#include "Luokka.h"
#include "Atkluokka.h"

int main()
{
	Luokka b220("B2-20");
	Luokka uusib220;
	Luokka kumma;
	Atkluokka eka("B2-22", 20);
	Atkluokka toka;
	Atkluokka oddball;
	uusib220 = b220;
	b220.asetaNimi("Uusinimi");
	toka = eka;
	eka.asetaNimi("Uusi B2-22");
	kumma = eka;
	eka++;

	return 0;
}