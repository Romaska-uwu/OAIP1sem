#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;
void FillArray(size_t size, int* arr)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void PrintArray(size_t size, int* arr)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int* DeleteElement(size_t& size, int* arr, size_t i)
{
    int* Arr = new int[size - 1];
    size_t k = 0;
    for (size_t j = 0; j < size; j++)
    {
        if (j != i)
        {
            Arr[k++] = arr[j];
        }

    }
    size = k;
    delete[] arr;  
    arr = Arr;      
    return arr;
}

int* AddElement(size_t& size, int* arr, size_t i)
{
    int* Arr = new int[size + 1];
    size_t k = 0;
    for (size_t j = 0; j < size; j++)
    {
        if (j == i)
            Arr[k++] = 1;
        Arr[k++] = arr[j];
    }
    size = k;
    delete[] arr;
    arr = Arr;   
    return arr;
}

int main()
{
    srand((unsigned)time(0));
    setlocale(LC_ALL, "Russian");

    size_t size = 0, x = 0;

    cout << "Введите размер массива:";
    cin >> size;

    int* arr = new int[size];

    FillArray(size, arr);
    PrintArray(size, arr);

    cout << endl << "Введите число для удаления:";
    cin >> x;
    if (x >= size)
        x = size - 1;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            arr = DeleteElement(size, arr, i);
            i--;
        }
    }
    PrintArray(size, arr);

    cout << endl << " Нажмите любую клавишу." << endl;
    system("pause>NUL");

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 0)
        {
            arr = AddElement(size, arr, i);
            i++;
        }
    }

    PrintArray(size, arr);
    delete[] arr;   
    system("pause");
    return 0;
}