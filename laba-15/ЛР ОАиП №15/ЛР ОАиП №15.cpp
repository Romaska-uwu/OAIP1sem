#include <iostream>
#include <string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");

    float a[50] = { 0 };
    int nmin = 0, n;
    float s = 0, min;

    cout << "n="; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]="; cin >> a[i];
    }
    min = fabs(a[0]);

    for (int i = 1; i < n; i++)
        if (fabs(a[i]) < min) //сравниваем модуль элемента
        {
            min = a[i]; //сохраняем элемент
            nmin = i;
        } //сохраняем номер
    cout << "nmin=" << nmin << "\t" << "min= " << min << endl; //выводи номер элемента и сам элемент

    for (int i = 0; i < n; i++)
        if (a[i] < 0) //ищем первый отрицательный
        {
            for (i + 1; i < n; ++i)
            {
                s = s + fabs(a[i]);
            }
        }//сохраняем номер
   // nmin++;
   // for (int i = nmin; i < n; i++)//от nmin до n

    cout << "s=" << s << endl; //выводим сумму   

    int A, B;
    int i = 0, j = 0;
    cin >> A >> B;
    for (; i < n; i++)
    {
        if (a[i] <= A || a[i] >= B)
        {
            a[j] = a[i];
            j++;
        }

    }
    for (int i = 0; i < j; i++)
        cout << a[i] << ' ';
    cout << endl;



    return 0;
}