#include <iostream> 
#include <iomanip> 
#include <Windows.h> 
#include <stdio.h> 
#include <conio.h> 

void main()
{
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "Russian");
    char c, probel; probel = ' ';
    cout << "Введите символ "; cin >> c;
    cout << setw(37) << setfill(probel) << probel;
    cout << setw(2) << setfill(c) << c << endl;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(4) << setfill(c) << c << endl;
    cout << setw(37) << setfill(probel) << probel;
    cout << setw(2) << setfill(c) << c << endl;
    cout << setw(35) << setfill(probel) << probel;
    cout << setw(6) << setfill(c) << c << endl;
    cout << setw(33) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(31) << setfill(probel) << probel;
    cout << setw(14) << setfill(c) << c << endl;
    cout << setw(29) << setfill(probel) << probel;
    cout << setw(17) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(22) << setfill(c) << c << endl;
    cout << setw(24) << setfill(probel) << probel;
    cout << setw(26) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(22) << setfill(c) << c << endl;
    cout << setw(23) << setfill(probel) << probel;
    cout << setw(28) << setfill(c) << c << endl;
    cout << setw(20) << setfill(probel) << probel;
    cout << setw(33) << setfill(c) << c << endl;
    cout << setw(19) << setfill(probel) << probel;
    cout << setw(35) << setfill(c) << c << endl;
    cout << setw(18) << setfill(probel) << probel;
    cout << setw(37) << setfill(c) << c << endl;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(5) << setfill(c) << c << endl;
    cout << setw(35) << setfill(probel) << probel;
    cout << setw(7) << setfill(c) << c << endl;

}
