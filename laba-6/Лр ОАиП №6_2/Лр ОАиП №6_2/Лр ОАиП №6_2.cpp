
#include <iostream> 
using namespace std;
void main()
{
	float h, y, c = 2.1, r = 4e-4, m = 7, j = 0;
	while (j < 1.8)
	{
		h = (10 * r - j) / (pow(c, 2) + exp(-m));
		y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
		cout << "j=" << j << "\t";
		cout << " y=" << y << endl;
		j = j + 0.1;
	}
}