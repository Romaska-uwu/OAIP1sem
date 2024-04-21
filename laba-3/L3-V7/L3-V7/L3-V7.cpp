#include <iostream> 
void main()
{
	double y, w, m = 6, z = 0.05e-5, x = 1.4;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	std::cout << "y=" << y;
	std::cout << "w=" << w;
	;
}