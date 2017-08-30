// viikko 35 tehtävä 2
#include <iostream>

using std::cout; using std::endl;

int main()
{
	const int KOKO = 6;
	double kulutus[KOKO] = { 7.8, 8.1, 8.05, 7.7, 7.9, 8.21 };
	for (int i = 0; i < KOKO; i++)
	{
		cout << kulutus[i] << endl;
	}
	system("pause");
	return 0;
}