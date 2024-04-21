#include <iostream> 
#include <iomanip> 
#include <Windows.h> 
#include <stdio.h> 
#include <conio.h> 

void main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Rus");
    char c, probel = ' ';
    cout << "Введите символ ";
    cin >> c;
    cout << setw(35) << setfill(probel) << probel;
    cout << setw(4) << setfill(c) << c << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(7) << setfill(c) << c << endl;
    cout << setw(29) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(27) << setfill(probel) << probel;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(13) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(13) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(13) << setfill(c) << c << endl;
    cout << setw(26) << setfill(probel) << probel;
    cout << setw(13) << setfill(c) << c << endl;
    cout << setw(27) << setfill(probel) << probel;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(29) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(7) << setfill(c) << c << endl;
    cout << setw(35) << setfill(probel) << probel;
    cout << setw(4) << setfill(c) << c << endl;
    _getch();
}