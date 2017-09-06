#include "Paivays.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	Paivays tanaan;
	int syote;

	cout << "Anna paiva: ";
	cin >> syote;
	tanaan.asetaPaiva(syote);


	cout << "Anna kuukausi: ";
	cin >> syote;
	tanaan.asetaKuukausi(syote);

	cout << "Anna vuosi: ";
	cin >> syote;
	tanaan.asetaVuosi(syote);

	cout << tanaan.annaKuukausi() << "/" << tanaan.annaPaiva() << "/" << tanaan.annaVuosi() << endl;

	tanaan.tulosta();

	system("pause");
	return 0;
}