﻿#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char predl[1000];
	int i, k, nom;
	cout << "Введите предложение: ";
	gets_s(predl);
	cout << "Введите позицию символа k: ";
	cin >> k;
	nom = 1;
	for (i = 0; i <= k - 1; i++)
	{
		if (*(predl + i) == ' ')
			nom++;
	}
	if (*(predl + k - 1) == ' ')
		cout << "Номер предыдущего слова - " << nom - 1;
	else
		cout << "Номер слова, в котором содержится k-й символ - " << nom;
}
