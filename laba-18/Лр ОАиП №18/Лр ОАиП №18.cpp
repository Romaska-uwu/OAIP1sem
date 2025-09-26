#include <iostream>
#include <cmath>

using namespace std;

// Уравнение x^2 + 4x - 2
double equation1(double x) {
    return x * x + 4 * x - 2;
}

// Уравнение sin(x) + 0.1
double equation2(double x) {
    return sin(x) + 0.1;
}

// Метод дихотомии для поиска корня уравнения
double dichotomyMethod(double (*equation)(double), double a, double b, double e) {
    double c;
    while (abs(b - a) > e) {
        c = (a + b) / 2;
        if (equation(c) == 0.0) {
            break;
        }
        else if (equation(c) * equation(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return c;
}

int main() {
    setlocale(LC_CTYPE, "Rus");
    double a, b, e;
    cout << "Введите границы интервала a и b: ";
    cin >> a >> b;
    cout << "Введите точность e: ";
    cin >> e;

    // Находим корень для уравнения x^2 + 4x - 2
    double root1 = dichotomyMethod(equation1, a, b, e);
    cout << "Корень уравнения x^2 + 4x - 2: " << root1 << endl;

    // Находим корень для уравнения sin(x) + 0.1
    double root2 = dichotomyMethod(equation2, a, b, e);
    cout << "Корень уравнения sin(x) + 0.1: " << root2 << endl;

    return 0;
}
