#include "Pyramidi.h"
#include <cmath>

Pyramidi::Pyramidi()
	: korkeus_(0.0), sarma_(0.0)
{
}

Pyramidi::Pyramidi(double korkeus, double sarma)
	: korkeus_(korkeus), sarma_(sarma)
{
}


Pyramidi::Pyramidi(const Pyramidi & alkup)
	: korkeus_(alkup.korkeus_), sarma_(alkup.sarma_)
{
}

Pyramidi::~Pyramidi()
{
}

void Pyramidi::asetaKorkeus(double korkeus)
{
	korkeus_ = korkeus;
}

void Pyramidi::asetaSarma(double sarma)
{
	sarma_ = sarma;
}

double Pyramidi::annaKorkeus() const
{
	return korkeus_;
}

double Pyramidi::annaSarma() const
{
	return sarma_;
}

double Pyramidi::tilavuus()
{
	return (sarma_ * sarma_ * korkeus_) / 3;
}
