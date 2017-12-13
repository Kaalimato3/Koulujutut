#include "Pallo.h"
#include "Pyramidi.h"
#include <iostream>

using std::cout; using std::endl;

int main()
{
	Pallo pallo(5.6);
	Pyramidi pyramidi(2.5, 4.2);
	Kappale * pallop = &Pallo(pallo);
	Kappale * pyramidip = &pyramidi;

	cout << "Pallon tilavuus: " << pallop->tilavuus() << endl;
	cout << "Pyramidin tilavuus: " << pyramidip->tilavuus() << endl;

	return 0;
}