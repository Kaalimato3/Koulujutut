#include "Pallo.h"
#include <cmath>

Pallo::Pallo()
	: sade_(0.0)
{
}

Pallo::Pallo(double sade)
	: sade_(sade)
{
}

Pallo::Pallo(const Pallo & alkup)
	: sade_(alkup.sade_)
{
}


Pallo::~Pallo()
{
}

void Pallo::asetaSade(double sade)
{
	sade_ = sade;
}

double Pallo::annaSade() const
{
	return sade_;
}

double Pallo::tilavuus()
{
	return (4 * 4 * atan(1.0) * pow(sade_, 3) ) / 3;
}
