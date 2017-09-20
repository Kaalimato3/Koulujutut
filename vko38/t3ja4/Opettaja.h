#pragma once
#include <string>
using std::string;

class Opettaja
{
public:
	Opettaja();
	~Opettaja();

private:
	string otunnus_;
	string enimi_;
	string snimi_;
	float palkka_;
};

