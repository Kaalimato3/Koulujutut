#include "Murtoluku.h"
#include <iostream>

using std::cout; using std::endl;

int main()
{
	Murtoluku mluku;
	int syt;

	mluku.kysyTiedot();

	mluku.print();

	syt = mluku.sievenna();

	mluku.print();

	cout << "Suurin yhteinen tekija: " << syt << endl;


	system("pause");
	return 0;
}