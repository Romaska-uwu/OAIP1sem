#include <iostream>
using namespace std;
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n, n1, s, p;
	double S = 0;
	cout << "¬ведите количество лет: ";
	cin >> n;
	cout << "¬ведите число %, на которое снижаетс€ цена на оборудование с каждым годом: ";
	cin >> p;
	cout << "¬ведите количество денег дл€ закупки:" << endl;
	for (n1 = 1; n1 <= n; n1++)
	{
		cin >> s;
		S = s + S - S * p / 100;
	}
	cout << "обща€ стоимость оборудовани€ за " << n << " лет = " << S << endl;
}