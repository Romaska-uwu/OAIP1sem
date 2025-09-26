#include <iostream> 
#include <cstdlib> 
#include <ctime>  
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "rus");
    const int N = 5; // размер матрицы
    const int M = 5;
    int i, j;
    int matrix[N][M];
    int index_i, index_j; // индексы расположения
    int max;              // максимальный элемент

    srand((unsigned)time(0));

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            matrix[i][j] = rand() % 100; // заполняем матрицу случайными числами

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            if (j % 10 == 0)
                cout << endl;
            cout << setw(3) << matrix[i][j]; // выводим на экран
        }

    max = matrix[0][0]; // присваиваем первый элемент

    for (i = 0; i < N; i++)
        for (j = 1; j < M; j++)

            if (max < matrix[i][j])
            {
                max = matrix[i][j]; // ищем максимальный элемент
                index_i = i;
                index_j = j;
            }
    cout << endl << endl;

    cout << "Максимальный элемент расположен " // не забываем что отсчёт в строках
        << index_i << " " << index_j << endl;  // и столбцах идёт с 0
    cout << endl;

    system("Pause");

    return 0;
}