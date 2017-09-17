#include "Kellonaika.h"
#include <iostream>
#include <Windows.h>

using std::cout; using std::endl;

int main()
{
	Kellonaika nyt(1, 1, 30);
	Kellonaika nolla;

	nyt.printTime();
	nolla.printTime();

	for (int i = 0; i < 100; i++)
	{
		nyt.stepSecs(1);
		nyt.printTime();
		nolla.stepSecs(1);
		nolla.printTime();
		Sleep(1000);
	}

	system("pause");
	return 0;
}