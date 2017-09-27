#include <iostream>
#include "Kellonaika.h"
using std::endl; using std::cout;

int main()
{
	Kellonaika* k1_ptr = new Kellonaika;
	Kellonaika* k2_ptr = new Kellonaika(12, 40, 35);
	Kellonaika* k3_ptr = new Kellonaika(*k2_ptr); // kopiorak
	if (k1_ptr)
	{
		k1_ptr->printTime();
		delete k1_ptr;
		k1_ptr = 0;
	}

	if (k2_ptr)
	{
		k2_ptr->printTime();
		delete k2_ptr;
		k2_ptr = 0;
	}

	if (k3_ptr)
	{
		k3_ptr->printTime();
		delete k3_ptr;
		k3_ptr = 0;
	}

	system("pause");
	return 0;
}