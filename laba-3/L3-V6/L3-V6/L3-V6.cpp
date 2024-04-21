#include <iostream> 
void main()
{
	double t, u, s, y = 0.956, a = 5e-6, n = 4;
	t = 1 / sqrt(y) + 14 * a;
	u = (t + 1) / (a + 2);
	s = log((2 * n / 3) + exp(-n) / n);
	std::cout << " t=" << t;
	std::cout << " u=" << u;
	std::cout << " s = " << s;
	;
}
