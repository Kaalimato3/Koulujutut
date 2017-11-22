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
		//n = vyector.at(-1);	//Heittää out_of_range, exception, ...
		//n = vyector.at(5);		//Heittää out_of_range, exception, ...
		//throw 20;				//Heittää int, ...
		throw 'e';				//Heittää ...

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
		cout << "Käsittelemätön virhe!" << endl;
	}
	system("pause");
	return 0;
}