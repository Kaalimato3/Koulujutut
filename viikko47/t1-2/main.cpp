#include <vector>
#include <iostream>
#include <exception>
#include <stdexcept>
using std::vector; using std::exception;
using std::cout; using std::endl;
using std::out_of_range;

int main()
{
	int n;
	vector <int> vyector;
	try {
		for (int i = 0; i < 3; i++)
			vyector.push_back(i);
		//n = vyector.at(-1);	//Heitt�� out_of_range, exception, ...
		//n = vyector.at(5);		//Heitt�� out_of_range, exception, ...
		//throw 20;				//Heitt�� int, ...
		throw 'e';				//Heitt�� ...

	}
	catch (out_of_range e) {
		cout << "Out of range exception: " << e.what() << endl;
	}
	catch (exception e) {
		cout << "Exception: " << e.what() << endl;
	}
	catch (int e)
	{
		cout << "Virhe! :" << e << endl;
	}
	catch(...) {
		cout << "K�sittelem�t�n virhe!" << endl;
	}
	system("pause");
	return 0;
}