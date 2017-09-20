#include <iostream>
#include <cmath>

using namespace std;

double function(double x, int y);

int main()
{
	int kerroin = -2;

	for (int i = 0; i < 101; i++)
	{
		cout << (double)i * 0.01 << "\t" << function((double) i * 0.01, kerroin) << endl;
	}

	system("pause");
	return 0;
}

double function(double x, int y)
{
	double offsetX;
	double offsetY;

	if (y > 0)
	{
		offsetX = ((sqrt(y * 2 - 1) - 1) / 2);
		offsetY = ((sqrt(y * 2 - 1) / 2) + 0.5);
		return -(sqrt(y - (pow(x + offsetX, 2) ) ) ) + offsetY ;
	}

	if (y < 0)
	{
		y = -y;
		offsetX = (-(sqrt(y * 2 - 1) + 1 ) / 2);
		offsetY = (-(sqrt(y * 2 - 1) - 1 ) / 2);
		return sqrt(y - (pow(x + offsetX, 2))) + offsetY;

	}

	return x;
}