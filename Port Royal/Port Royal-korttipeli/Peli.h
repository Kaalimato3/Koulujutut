#pragma once
#include "Pelaaja.h"
#include <vector>
using std::vector;

class Peli
{
public:
	Peli();
	Peli(int pelaajat_lkm);
	~Peli();
private:
	vector <Kortti> poyta_;
	vector <Pelaaja> pelaajat_;
};

