#include <iostream>

int main() {
    setlocale(LC_CTYPE, "Rus");
    int size;
    std::cout << "Введите размер квадратной матрицы: ";
    std::cin >> size;

    int** matrix1 = new int* [size];
    int** matrix2 = new int* [size];
    int** resultMatrix = new int* [size];

    for (int i = 0; i < size; i++) {
        matrix1[i] = new int[size];
        matrix2[i] = new int[size];
        resultMatrix[i] = new int[size];
    }

    std::cout << "Введите элементы первой матрицы: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Введите элементы второй матрицы: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    bool allPositive = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix1[i][j] <= 0 || matrix2[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }
        if (!allPositive) {
            break;
        }
    }

    if (allPositive) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < size; k++) {
                    resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        std::cout << "Произведение матриц:" << std::endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                std::cout << resultMatrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "Не все числа в матрицах положительные, произведение нельзя вычислить." << std::endl;
    }

    for (int i = 0; i < size; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] resultMatrix[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] resultMatrix;

    return 0;
}
