#include <iostream>
#include <vector>

int main() {
    int n, m, k;
    setlocale(0, "rus");
    std::cout << "Введите размеры матрицы (n и m): ";
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> matrix[i][j];



    std::cout << "Введите число k: ";
    std::cin >> k;

    int b = 1; // По умолчанию предполагаем, что не все элементы k-го столбца нулевые
    for (int i = 0; i < n; i++) {
        if (matrix[i][k - 1] != 0)
            b = 0; // Если хотя бы один элемент k-го столбца не равен нулю, меняем значение b на 0
        break;

    }

    std::cout << "Значение переменной b: " << b << std::endl;

    return 0;
}