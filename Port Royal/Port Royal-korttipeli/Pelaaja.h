#pragma once
#include "Kortti.h"
#include <vector>
#include <string>
using std::string;
using std::vector;

class Pelaaja
{
public:
	Pelaaja();
	Pelaaja(string nimi);
	~Pelaaja();
private:
	int pisteet_;
	int rahat_;
	string nimi_;
	vector <Kortti> kortit;
};

