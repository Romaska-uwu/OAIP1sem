#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int A, B, n, p, m, q;
    cout << "Введите целое число A: ";
    cin >> A;
    cout << "Введите целое число B: ";
    cin >> B;
    cout << "Введите количество битов для инвертирования (n): ";
    cin >> n;
    cout << "Введите позицию (от 0 до 31) с которой начать инвертирование (p): ";
    cin >> p;
    cout << "Введите количество битов для замены (m): ";
    cin >> m;
    cout << "Введите позицию (от 0 до 31) с которой начать замену (q): ";
    cin >> q;

    int maskA = ((1 << n) - 1) << p; // Создаем маску для инвертирования битов в A
    int invertedA = A ^ maskA; // Инвертируем биты в A

    int maskB = ((1 << m) - 1) << q; // Создаем маску для выбора битов из B
    int selectedB = B & ~maskB; // Очищаем биты в B, которые будут заменены
    int resultB = selectedB | (invertedA >> p); // Заменяем биты в B на инвертированные биты из A

    cout << "Результат: " << resultB << endl;

    return 0;
}