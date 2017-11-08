#include "Sovellus.h"

int main()
{
	Opiskelija mie("sio", "bruo", "sao", "04567", "123456");
	Opiskelija myo;
	Opettaja ope1("Matti", "Saari", "Kuntokatu 4", "0405321", "838383", 12.5, "Kodaus");
	Opettaja ope2;
	ope2 = ope1;
	myo = mie;
	ope1.tulosta();
	ope2.tulosta();
	myo.tulosta();
	mie.tulosta();

	system("pause");
	return 0;
}