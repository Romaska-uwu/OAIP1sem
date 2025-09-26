#include <iostream>

    int main() {
        setlocale(LC_CTYPE, "Rus");
        int size;
        std::cout << "Введите размер массива: ";
        std::cin >> size;

        int* arr = new int[size]; // Создание динамического массива

        std::cout << "Введите элементы массива: ";
        for (int i = 0; i < size; i++) {
            std::cin >> arr[i];
        }

        int maxIndex = 0;
        int minIndex = 0;

        // Находим индекс первого максимального элемента
        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }

        // Находим индекс последнего минимального элемента
        for (int i = 1; i < size; i++) {
            if (arr[i] <= arr[minIndex]) {
                minIndex = i;
            }
        }

        // Находим сумму элементов между первым максимальным и последним минимальным элементами
        int sum = 0;
        int start, end;
        if (maxIndex < minIndex) {
            start = maxIndex + 1;
            end = minIndex - 1;
        }
        else {
            start = minIndex + 1;
            end = maxIndex - 1;
        }
        for (int i = start; i <= end; i++) {
            sum += arr[i];
        }

        std::cout << "Сумма элементов между первым максимальным и последним минимальным элементами: " << sum << std::endl;

        delete[] arr; // Освобождение памяти, выделенной для динамического массива

        return 0;
    }
