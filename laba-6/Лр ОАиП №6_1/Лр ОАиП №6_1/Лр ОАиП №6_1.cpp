#include <iostream> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float h, y, c = 2.1, r = 4e-4, m = 7, j;
	for (int n = 0; n < 3; n++)
	{
		printf("Введите j ");
		scanf_s("%f", &j);
		h = (10 * r - j) / (pow(c, 2) + exp(-m));
		y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
		printf("j = %5.2f\t", j);
		printf("y = %5.2f\n", y);
	}
}
