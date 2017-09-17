#pragma once
/* 
// #pragma once toimii Visual-ymp�rist�ss�, 
// jossain muussa ymp�rist�ss� k�yt� kommentoitua menetelm��
#ifndef PAIVAYS_H
#define PAIVAYS_H
// Lopussa #endif
*/
class Paivays
{
public:

	// setters: (kirjoitusrutiinit)

	void asetaVuosi(int vuosi);
	void asetaKuukausi(int kk);
	void asetaPaiva(int paiva);

	// getters: (lukurutiinit)

	int annaPaiva();
	int annaKuukausi();
	int annaVuosi();

	void tulosta();

private:

	int paiva_;
	int kk_;
	int vuosi_;
	// alaviivalla tunnistetaan attribuutit

};

//#endif