#pragma once

class Kellonaika
{
public:
	int getHours();
	int getMins();
	int getSecs();

	void setHours(int hh);
	void setMins(int mm);
	void setSecs(int ss);
	void setTime(int hh, int mm, int ss);

	void printTime();
	void stepSecs(int ss);
	void askTime();
private:

	int hh_;
	int mm_;
	int ss_;
	void checkOverflow();
};