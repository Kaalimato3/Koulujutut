#pragma once

class Kellonaika
{
public:

	Kellonaika();
	Kellonaika(int ss, int mm, int hh);
	Kellonaika(const Kellonaika & alkup);
	~Kellonaika();

	int annaTunnit() const;
	int annaMinuutit() const;
	int annaSekunnit() const;

	void asetaTunnit(int hh);
	void asetaMinuutit(int mm);
	void asetaSekunnit(int ss);
	void asetaAika(int hh, int mm, int ss);

	void tulosta() const;
	void askellaSekunteja(int ss);
	void kysyAika();
private:

	int hh_;
	int mm_;
	int ss_;
	void tarkistaYlivuoto();
};