#pragma once
#include <iostream>
#include <string>
#include "Koulu.h"

class Sovellus
{
public:
	Sovellus();
	~Sovellus();

	void aja() const;

private:
	string tulostaValikko() const;
};

