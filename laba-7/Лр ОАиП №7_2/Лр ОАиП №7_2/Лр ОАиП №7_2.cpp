#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            for (int k = 0; k < 10; k++) 
            {
                if (i != j && i != k && j != k) 
                {
                    int number = i * 100 + j * 10 + k;
                    cout << number << endl;
                }
            }
        }
    }
    return 0;
}
