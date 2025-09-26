#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int A, count = 0;
    cout << "Введите целое число A: ";
    cin >> A;

    for (int i = 0; i < 14; i++) {
        if ((A & (1 << i)) == 0) {
            count++;
        }
    }
    cout << "Количество нулей в числе A с третьего по 13 бит: " << count << endl;

    return 0;
}
