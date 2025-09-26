#include <iostream>
int main() {
    setlocale(LC_CTYPE, "Russian");
    int m, n, p, k=0,ch;
    std::cout << "Введите значение переменной m: ";
    std::cin >> m;
    std::cout << "Введите значение переменной n: ";
    std::cin >> n;
    std::cout << "Введите значение переменной p: ";
    std::cin >> p;
    k = (m % 5 == 0) ? k + m: k;
    k = (n % 5 == 0 ) ? (k + n) : (k + 0);
    k = (p % 5 == 0 ) ? (k + p) : (k + 0);
   
    std::cout << "Сумма чисел которые делятся на 5 = " << k << std::endl;
    return 0;
}
