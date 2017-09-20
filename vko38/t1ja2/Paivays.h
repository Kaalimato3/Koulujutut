#pragma once
/*
// #pragma once toimii Visual-ympäristössä,
// jossain muussa ympäristössä käytä kommentoitua menetelmää
#ifndef PAIVAYS_H
#define PAIVAYS_H
// Lopussa #endif
*/
class Paivays
{
public:

	Paivays();
	Paivays(int vuosi, int kk, int paiva);
	~Paivays();

	// setters: (kirjoitusrutiinit)

	void asetaVuosi(int vuosi);
	void asetaKuukausi(int kk);
	void asetaPaiva(int paiva);

	// getters: (lukurutiinit)

	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();

	void tulosta();
	void lisaaPaiva();
	int montakoPaivaaKuukaudessa();

private:

	int pp_;
	int kk_;
	int vv_;
	// alaviivalla tunnistetaan attribuutit

	void tarkista();

};

//#endif