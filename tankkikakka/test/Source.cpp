#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x = 0;
	for (int i = 0; i < 21; i++)
	{
		cout << -(sqrt(1 - pow(x, 2))) + (double) (sqrt(1 * 2 - 1) / 2 + 1 / 2) << endl;
		x = i * 0.05;
		
	}

	system("pause");
	return 0;
}