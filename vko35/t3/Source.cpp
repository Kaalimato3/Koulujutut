// Viikko 35 tehtävä 3

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	int arvosana = 0, arvosanat[6] = { 0 };
	int summa = 0, opmaara = 0;
	double ka;

	while (arvosana > -1)
	{
		do
		{
			cout << "Anna arvosana: ";

			cin >> arvosana;
			if (arvosana > 5)
				cout << "Arvosanan täytyy olla väliltä 0-5";
		} while (arvosana > 5);

		arvosanat[arvosana]++;
	}

	for (int i = 0; i < 6; i++)
	{
		opmaara += arvosanat[i];
	}

	for (int i = 0; i < 6; i++)
	{
		summa += arvosanat[i] * i;
	}

	ka = (double) summa / opmaara;

	for (int i = 0; i < 6; i++)
	{
		cout << i << " " << arvosanat[i] << " ";
		for (int j = 0; j < arvosanat[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Oppilaiden maara: " << opmaara << " Summa: " << summa << " Keskiarvo: " << ka << endl;

	system("pause");
	return 0;
}