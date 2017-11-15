#pragma once
#include <string>
#include <iostream>
using std::string; using std::cout; using std::endl;

class Luokka
{
public:
	Luokka();
	Luokka(string nimi);
	~Luokka();

	void asetaNimi(string nimi);

	//sijoitusoperaattori
	Luokka & operator = (const Luokka & vanha);

	virtual void tulosta() const;
private:
	string nimi_;
};

