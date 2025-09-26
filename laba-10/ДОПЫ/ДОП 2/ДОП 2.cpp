#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 50;
	int i, A[N], min = N, max = 0, number_max, number_min, peremen = 0, k = 0, k1 = 0, sz = 50, counter = 0;
	int rmx = 99;
	srand((unsigned)time(NULL));
	for (i = 0; i < N; i++)
	{
		A[i] = rand() % rmx;
	}

	for (i = 0; i < N; i++) {
		if (A[i] < min) {
			min = A[i];
			number_min = i;
		}
		if (A[i] > max) {
			max = A[i];
			number_max = i;
		}
	}

	cout << "Номер элемента с мин. знач. = " << number_min << endl;
	cout << "Его значение = " << min << endl;
	cout << "Номер элемента с макс. знач. = " << number_max << endl;
	cout << "Его значение = " << max << endl;
	for (int counter = 0; counter < sz; counter++)
	{
		cout << "A[" << counter << "]" << "\t" << A[counter] << endl;
	}
	cout << "Было" << endl;
	if (number_max - number_min < 0) {
		k = number_max;
	}
	else {
		k = number_min;
	}
	for (i = 0; i < N; i++) {
		if (number_max - number_min < 0) {
			peremen = A[k + 1];
			A[k + 1] = A[number_min - k1];
			A[number_min - k1] = peremen;
			k1 += 1;
			k += 1;
		}
		else {
			peremen = A[k - 1];
			A[k - 1] = A[number_max + k1];
			A[number_max + k1] = peremen;
			k1 += 1;
			k += 1;
		}
		if (k1 == number_max || k == number_min || k == number_max || k1 == number_min) {
			i = N;
		}
	}
	for (int counter = 0; counter < sz; counter++)
	{
		cout << "A[" << counter << "]" << "\t" << A[counter] << endl;
	}
	return 0;
}