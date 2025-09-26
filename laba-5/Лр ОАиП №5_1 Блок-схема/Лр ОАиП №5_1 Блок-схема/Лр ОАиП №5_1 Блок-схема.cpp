#include <iostream>

int main() {
    setlocale(LC_CTYPE, "Russian");
    double x, y, z;
    std::cout << "Введите значение переменной x: ";
    std::cin >> x;
    std::cout << "Введите значение переменной y: ";
    std::cin >> y;
    std::cout << "Введите значение переменной z: ";
    std::cin >> z;
    double temp;
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (y < z) {
        temp = y;
        y = z;
        z = temp;
    }
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }

    std::cout << "Новые значения переменных: x = " << x << ", y = " << y << ", z = " << z << std::endl;

    return 0;
}
