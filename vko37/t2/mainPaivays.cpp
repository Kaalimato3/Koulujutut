#include "Paivays.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	Paivays tanaan, huomenna;

	tanaan.asetaPaiva(6);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2017);

	huomenna.asetaPaiva(7);
	huomenna.asetaKuukausi(9);
	huomenna.asetaVuosi(2017);

	cout << "Tanaan on: " << endl;
	cout << tanaan.annaKuukausi() << "/" << tanaan.annaPaiva() << "/" << tanaan.annaVuosi() << endl;
	tanaan.tulosta();

	cout << "Huomenna on: " << endl;
	cout << huomenna.annaKuukausi() << "/" << huomenna.annaPaiva() << "/" << huomenna.annaVuosi() << endl;
	huomenna.tulosta();

	system("pause");
	return 0;
}