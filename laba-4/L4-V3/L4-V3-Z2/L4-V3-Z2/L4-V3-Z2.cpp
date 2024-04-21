#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a = 5, b = 10;
	cout << "Изначальное Условие" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	a = a + b; b = a - b; a = a - b;
	cout << "\nУсловие после" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}
