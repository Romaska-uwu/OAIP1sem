#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_CTYPE, "Russian");
    int rows, cols;
    std::cout << "Введите количество строк и столбцов: ";
    std::cin >> rows >> cols;

    double** matrix = new double*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }

    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int firstPositiveCol = -1;
    for (int j = 0; j < cols; j++) {
        bool allPositive = true;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }
        if (allPositive) {
            firstPositiveCol = j;
            break;
        }
    }

    if (firstPositiveCol != -1) {
        for (int i = 0; i < rows; i++) {
            matrix[i][firstPositiveCol - 1] *= -1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
