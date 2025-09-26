#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float h, y, c = 2.1, r = 4e-4, m = 1, j;

	while (m < 2.1) {
		
		for (int i=0 ; i < 4 ; i++)
		{
			cout << "¬ведите число" << endl;
			cin >> j;
			h = (10 * r - j) / (pow(c, 2) + exp(-m));
			cout << h << endl;
			y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
			cout << y << endl;
		}
		m = m + 0.5;
	}
	return 0;
}
