#include <iostream> 
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(7) << setfill(probel) << probel << setw(2) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel << setw(4) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel << setw(4) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel << setw(6) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(1) << setfill(probel) << probel << setw(14) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel << setw(12) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel << setw(10) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel << setw(8) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel << setw(10) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel << setw(12) << setfill(c) << c << endl;
	cout << setw(1) << setfill(probel) << probel << setw(6) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(6) << setfill(c) << c << endl;
	cout << setw(6) << setfill(c) << c << setw(4) << setfill(probel) << probel << setw(6) << setfill(c) << c << endl;
	cout << setw(4) << setfill(c) << c << setw(8) << setfill(probel) << probel << setw(4) << setfill(c) << c << endl;
	cout << setw(2) << setfill(c) << c << setw(12) << setfill(probel) << probel << setw(2) << setfill(c) << c << endl;
}

