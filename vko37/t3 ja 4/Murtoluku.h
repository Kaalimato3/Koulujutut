#pragma once

class Murtoluku
{
public:
	void kysyTiedot();
	void print();
	void sievenna();

	// setters:
	void setDenom(int n);
	void setNom(int n);

	// getters:
	int getDenom();
	int getNom();
private:
	int denom_;
	int nom_;
};