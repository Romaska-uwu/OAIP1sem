#include <iostream>
using namespace std;
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n, n1, s, p;
	double S = 0;
	cout << "������� ���������� ���: ";
	cin >> n;
	cout << "������� ����� %, �� ������� ��������� ���� �� ������������ � ������ �����: ";
	cin >> p;
	cout << "������� ���������� ����� ��� �������:" << endl;
	for (n1 = 1; n1 <= n; n1++)
	{
		cin >> s;
		S = s + S - S * p / 100;
	}
	cout << "����� ��������� ������������ �� " << n << " ��� = " << S << endl;
}