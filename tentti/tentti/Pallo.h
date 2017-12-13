#pragma once
#include "Kappale.h"
class Pallo :
	public Kappale
{
public:
	Pallo();
	Pallo(double sade);
	Pallo(const Pallo & alkup);
	~Pallo();

	void asetaSade(double sade);

	double annaSade() const;

	double tilavuus();

private:
	double sade_;
};

