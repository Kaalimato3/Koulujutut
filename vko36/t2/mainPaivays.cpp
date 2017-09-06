#include "Paivays.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	Paivays tanaan, huomenna;

	tanaan.asetaPaiva(6);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2017);

	cout << tanaan.annaKuukausi() << "/" << tanaan.annaPaiva() << "/" << tanaan.annaVuosi() << endl;

	tanaan.tulosta();

	system("pause");
	return 0;
}