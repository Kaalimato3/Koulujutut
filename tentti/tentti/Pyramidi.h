#pragma once
#include "Kappale.h"
class Pyramidi :
	public Kappale
{
public:
	Pyramidi();
	Pyramidi(double korkeus, double sarma);
	Pyramidi(const Pyramidi & alkup);
	~Pyramidi();

	void asetaKorkeus(double korkeus);
	void asetaSarma(double sarma);

	double annaKorkeus() const;
	double annaSarma() const;

	double tilavuus();

private:
	double korkeus_;
	double sarma_;
};

