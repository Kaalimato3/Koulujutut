#include "Kellonaika.h"
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <time.h>

using std::cout; using std::endl;

int main()
{
	Kellonaika nyt;

	nyt.setTime(12, 58, 58);

	nyt.printTime();

	for (int i = 0; i < 100; i++)
	{
		nyt.stepSecs(1);
		nyt.printTime();
		Sleep(10);
	}

	system("pause");
	return 0;
}