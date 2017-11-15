#pragma once
#include "Kortti.h"
class LaivaKortti :
	public Kortti
{
public:
	LaivaKortti();
	~LaivaKortti();
private:
	int arvo_;
	int miekat_;
	char vari_;
};

