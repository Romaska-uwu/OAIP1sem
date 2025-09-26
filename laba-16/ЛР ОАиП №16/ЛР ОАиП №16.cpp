// 1. Ввести целые числа в массив A[n, m] (n, m > 0) и все отрицательные элементы в нечетных строках заменить на такие же положительные.
//2. Написать программу, преобразующую строку, состоящую только из прописных букв, в строку, состоящую из прописных и строчных букв.
//   Первая буква после точки и пробела - прописная, остальные - строчные.
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int taskOne(int n, int m, int** A) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2) {
                A[i][j] = abs(A[i][j]);
            }
        }
    }
    cout << "================================================================================================================\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

int taskTwo(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        i++;
        while (str[i] != '.' && str[i + 1] != ' ' && i < strlen(str)) {
            if (str[i] != ' ' && str[i] != ',') {
                str[i] += ('a' - 'A');
                i++;
            }

        }
        i++;
    }
    cout << "================================================================================================================\n";
    for (int i = 0; i < strlen(str); i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}

int main() {
    setlocale(LC_CTYPE, "Rus");
    int flag;
    cout << "Выберете : Задание 1 или Задание 2" << endl << endl;
    cin >> flag;
    switch (flag)
    {
    case 1: {
        cout << "Введите элементы n и m\n";
        int n, m;
        cin >> n >> m;

        int** A = new int* [n];
        for (int i = 0; i < n; i++)
            A[i] = new int[m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
            }
        }

        taskOne(n, m, A);
        for (int i = 0; i < n; i++) {
            delete[]  A[i];
        }
        delete[]  A;
        break;
    }
    case 2: {
        cin.clear();
        cout << "Введите строку" << endl << endl;
        cin.clear();
        cin.ignore(256, '\n');
        char str[256];
        cin.getline(str, 256);
        taskTwo(str);
        break;
    }
    default: {
        cout << "Ошибка. Недопустимый ввод.\n";
        break;
    }
    }
    system("pause");
    return 0;


}