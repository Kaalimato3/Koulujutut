#include "Kalenterimerkinta.h"
#include <iostream>


int main()
{
	Kalenterimerkinta kal(Paivays(2017, 9, 27), Kellonaika(35, 53, 13), "ebin suprdo", true);

	kal.tulostaMerkinta();

	system("pause");
	return 0;
}