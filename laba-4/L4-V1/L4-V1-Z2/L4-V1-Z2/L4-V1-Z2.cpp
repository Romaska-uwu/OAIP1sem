#include <windows.h> 
#include<iostream> 
#include <conio.h>   
using namespace std;
void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "Russian");
    float d;
    cout << "Укажите диагональ квадрата ";
    cin >> d;
    cout << "\nПлощадь квадрата равна " << d * d / 2;
    _getch();
}

