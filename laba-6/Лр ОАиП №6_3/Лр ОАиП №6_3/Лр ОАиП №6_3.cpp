#include <iostream>  
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float h, y, c = 2.1, r = 4e-4, m = 1, j;
	for (int n = 0; n < 4; n++)
	{
		cout << "Введите число" << endl;
		cin >> j;
		while (m < 2.1) {

			h = (10 * r - j) / (pow(c, 2) + exp(-m));
			cout << h << endl;
			y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
			cout << y << endl;
			m = m + 0.5;
		}
		m = 1;
	}
	return 0;
}