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
	Paivays(const Paivays & alkup); // const & on vakioviittaus, voi vain lukea viitattua oliota

	// setters: (kirjoitusrutiinit)

	void asetaVuosi(int vuosi);
	void asetaKuukausi(int kk);
	void asetaPaiva(int paiva);

	// getters: (lukurutiinit)

	int annaPaiva() const;
	int annaKuukausi() const;
	int annaVuosi() const;


	void tulosta() const;
	void lisaaPaiva();
	int montakoPaivaaKuukaudessa() const;

private:

	int pp_;
	int kk_;
	int vv_;
	// alaviivalla tunnistetaan attribuutit

	void tarkista();

};

/*
#endif // tämä jos muussa kuin visual ympäristössä
*/