#include <iostream>
#include "Paivays.h"
using std::cout; using std::endl;

int main()
{
	Paivays pvm(1999, 12, 20);

	pvm.tulosta();
	while (true)
	{
		for (int i = 0; i < 365; i++)
		{
			pvm.lisaaPaiva();
			pvm.tulosta();
		}
		system("pause");
	}

	system("pause");
	return 0;
}