
#include<math.h> 
#include <iostream>
using namespace std;
int main()

{
    setlocale(LC_CTYPE, "Rus");
    int i, j, k;
    char a[100] = {}, b[100] = {}, c[100] = {};

    cout << "Введите размер массива: ";
    cin >> k;
    for (i = 0; i < k; i++)
    {
        cout << "Введите a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "Массив a:" << endl;
    for (i = 0; i < k; i++)
        cout << a[i] << "  ";
    cout << endl;

    int n = 0; j = 0;

    for (i = 0; i < k; i++)
        if (a[i] >= '0' && a[i] <= '9')
        {
            b[j] = a[i];
            j++;
        }

        else
        {
            c[n] = a[i];
            n++;
        }

    cout << "Массив b:" << endl;
    for (i = 0; i < j; i++)
        cout << b[i] << "  ";
    cout << endl;

    cout << "Массив c:" << endl;
    for (i = 0; i < n; i++)
        cout << c[i] << "  ";
    cout << endl;

    return 0;
}