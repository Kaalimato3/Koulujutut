#include <vector>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <fstream>
#include <string>
using std::vector; using std::exception;
using std::cout; using std::endl;
using std::out_of_range; using std::fstream;
using std::string; using std::getline;
using std::ios_base;

int main()
{
	int n = 1;
	fstream filu1, filu2;
	vector <int> vyector;
	string s;
	filu2.exceptions(std::fstream::eofbit | std::fstream::badbit | std::fstream::failbit | std::fstream::goodbit); // fstream objektille t‰ytyy m‰‰r‰t‰ mit‰ exceptioneja se heitt‰‰
	try {
		for (int i = 0; i < 3; i++)
			vyector.push_back(i);
		//n = vyector.at(-1);	//Heitt‰‰ out_of_range, exception, ...
		//n = vyector.at(5);		//Heitt‰‰ out_of_range, exception, ...
		//throw 20;				//Heitt‰‰ int, ...
		//throw 'e';				//Heitt‰‰ ...
		filu1.open("Tiedosto.txt", std::fstream::out | std::fstream::app);
		filu2.open("Tiedosto.txt", std::fstream::in);
		filu1 << "juu ";
		//while(true) getline(filu2, s); // heitt‰‰ Exception, std::ios:failure, ..., koska eofbitin on kerrottu aiheuttavan exceptionin
		filu1.setstate(ios_base::badbit | ios_base::failbit); // Ei heit‰ mit‰‰n koska filu1:st‰ ei ole kerrottu heitt‰m‰‰n
		cout << s << endl;
		//filu2.setstate(ios_base::badbit | ios_base::failbit); // Heitt‰‰ exception, std::ios:failure, ...
		cout << s << endl;
		filu1.close();
		filu2.close();
	}
	catch (out_of_range e) {
		cout << "Out of range exception: " << e.what() << endl;
	}
	catch (std::ios::failure e)
	{
		cout << "Exception type: failure: " << e.what() << endl;
	}
	catch (exception e) {
		cout << "Exception: " << e.what() << endl;
	}
	catch (int e)
	{
		cout << "Virhe! :" << e << endl;
	}
	catch(...) {
		cout << "K‰sittelem‰tˆn virhe!" << endl;
	}
	system("pause");
	return 0;
}