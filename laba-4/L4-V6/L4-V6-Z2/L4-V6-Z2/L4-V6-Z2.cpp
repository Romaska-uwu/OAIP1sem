#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <iomanip>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	double ax, ay, bx, by, result;
	printf("Введите абсциссу точки A: ");
	scanf("%lf", &ax);
	printf("Введите ординату точки A: ");
	scanf("%lf", &ay);
	printf("Введите абсциссу точки В: ");
	scanf("%lf", &bx);
	printf("Введите ординату точки В: ");
	scanf("%lf", &by);
	result = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
	printf("Расстояние между точками А и В: %lf", result);
}