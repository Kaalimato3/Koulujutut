#pragma once
#include <string>
using std::string;

class Luokka
{
public:
	Luokka();
	Luokka(string nimi);
	~Luokka();

	void asetaNimi(string nimi);

	//sijoitusoperaattori
	Luokka & operator = (const Luokka & vanha);

private:
	string nimi_;
};

