#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    double m, n, p, k = 0;
    cout << "������� �������� ���������� m: ";
    cin >> m;
    cout << "������� �������� ���������� n: ";
    cin >> n;
    cout << "������� �������� ���������� p: ";
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
    cout << "���������� ������������� ����� " << k << endl;
    return 0;
}
