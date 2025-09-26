#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    double m, n, p, k = 0;
    cout << "Введите значение переменной m: ";
    cin >> m;
    cout << "Введите значение переменной n: ";
    cin >> n;
    cout << "Введите значение переменной p: ";
    cin >> p;

    if (m<0) {
        k = k + 1;
    }
    if (n<0) {
        k = k + 1;
    }
    if (p<0) {
        k = k + 1;
    }
    cout << "Количество отрицательных чисел " << k << endl;
    return 0;
}
