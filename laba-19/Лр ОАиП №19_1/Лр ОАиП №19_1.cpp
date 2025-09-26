#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Функция для перемножения двух матриц
vector<vector<int>> multiplyMatrices(vector<vector<int>>& M1, vector<vector<int>>& M2) {
    int rows1 = M1.size();
    int cols1 = M1[0].size();
    int cols2 = M2[0].size();

    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }


    return result;
}

int main() {
    setlocale(LC_CTYPE, "Rus");
    ifstream fileA("fA.txt");
    ifstream fileB("fB.txt");

    int colsA, colsB;
    fileA >> colsA;
    fileB >> colsB;

    if (colsA <= 0 || colsB <= 0) {
        cout << "Некорректный ввод: количество столбцов должно быть больше 0" << endl;
        return 1;
    }

    vector<vector<int>> M1, M2;

    // Чтение матриц из файлов
    int num;
    while (fileA >> num) {
        vector<int> row;
        row.push_back(num);
        for (int i = 1; i < colsA; i++) {
            fileA >> num;
            row.push_back(num);
        }
        M1.push_back(row);
    }

    while (fileB >> num) {
        vector<int> row;
        row.push_back(num);
        for (int i = 1; i < colsB; i++) {
            fileB >> num;
            row.push_back(num);
        }
        M2.push_back(row);
    }

    fileA.close();
    fileB.close();

    // Проверка возможности перемножения матриц
    if (colsA != M2.size()) {
        cout << "Невозможно перемножить матрицы: количество столбцов первой матрицы не равно количеству строк второй матрицы" << endl;
        ofstream fileC("fC.txt");
        fileC.close();
        return 0;
    }

    // Перемножение матриц и запись результата в файл fC
    vector<vector<int>> result = multiplyMatrices(M1, M2);
    ofstream fileC("fC.txt");
    fileC << result.size() << " " << result[0].size() << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            fileC << result[i][j] << " ";
        }
        fileC << endl;
    }
    fileC.close();

    return 0;
}
