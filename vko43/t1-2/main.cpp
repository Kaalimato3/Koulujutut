#include "Koulu.h"
#include <iostream>

int main()
{
	Koulu tamk("tamk");
	tamk.lisaaKoulutusohjelma();
	tamk.lisaaKoulutusohjelmaanOpettaja();
	tamk.lisaaKoulutusohjelmaanOpiskelija();
	tamk.tulostaKoulutusohjelmanOpettajat();
	tamk.tulostaKoulutusohjelmanOpiskelijat();
	tamk.tulostaKoulutusohjelmienMaara();
	system("pause");
	return 0;
}