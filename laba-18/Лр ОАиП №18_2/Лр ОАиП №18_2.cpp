#include <iostream>
#include <cstdarg>

using namespace std;

int fmin(int count, ...) {
    va_list args;
    va_start(args, count);

    int min = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int temp = va_arg(args, int);
        if (temp < min) {
            min = temp;
        }
    }

    va_end(args);
    return min;
}

int main() {
    setlocale(LC_CTYPE, "Rus");
    // Вызов функции fmin с различным количеством параметров
    int min1 = fmin(3, 10, 5, 8);
    cout << "Минимальное число: " << min1 << endl;

    int min2 = fmin(4, 15, 3, 7, 12);
    cout << "Минимальное число: " << min2 << endl;

    int min3 = fmin(5, 20, 25, 18, 30, 15);
    cout << "Минимальное число: " << min3 << endl;

    return 0;
}