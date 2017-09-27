#include <iostream>
#include "Paivays.h"

int main()
{
	Paivays tanaan;
	Paivays huomenna(2017, 9, 28);
	Paivays ylihuomenna(huomenna);

	tanaan.tulosta();
	huomenna.tulosta();
	ylihuomenna.tulosta();
	ylihuomenna.lisaaPaiva();
	ylihuomenna.tulosta();

	system("pause");
	return 0;
}