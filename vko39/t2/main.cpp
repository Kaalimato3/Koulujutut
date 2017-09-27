#include <iostream>
#include "Kellonaika.h"

int main()
{
	Kellonaika nyt(12, 27, 30);
	Kellonaika kohta(nyt);

	nyt.printTime();
	kohta.printTime();

	system("pause");
	return 0;
}