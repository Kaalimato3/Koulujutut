#include <iostream>
#include <cmath>

using namespace std;

double function(double x, int y);

int main()
{
	char k;
	int kerroin = 0;

	for (double i = 0; i < 1; i += 0.01)
	{
		cout << i << " " << function(i, kerroin)i << endl;
	}

	cin >> k;
	return 0;
}

double function(double x, int y)
{
	if (y == 0)
		return x;

	if (y > 0)
	{

		return -(sqrt(y - pow(x + ( (sqrt(2 * y - 1) - 1) / 2), 2) ) ) + (sqrt(y * 2 - 1) ) / 2 + 1 / 2 ;
	}

	if (y < 0)
	{

		return sqrt(y - pow(x + ( -(sqrt(2 * y - 1) - 1) / 2), 2)) - (sqrt(y * 2 - 1)) / 2 + 1 / 2 ;
	}

	
}