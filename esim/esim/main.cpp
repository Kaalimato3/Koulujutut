#include "Luokka.h"
#include "Atkluokka.h"
#include "Labraluokka.h"
#include <vector>
using std::vector;

int main()
{
	vector <Luokka *> luokat;
	Luokka b220("B2-20");
	Atkluokka eka("B2-22", 20);
	Labraluokka lab("B3-15", "Oskilloskooppi");
	luokat.push_back(&eka);
	luokat.push_back(&b220);
	luokat.push_back(&lab);

	for (size_t i = 0; i < luokat.size(); i++)
	{
		luokat[i]->tulosta();
	}

	return 0;
}