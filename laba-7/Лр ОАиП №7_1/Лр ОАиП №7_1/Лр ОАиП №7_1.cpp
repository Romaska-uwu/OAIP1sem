#include <iostream>
#include <stdio.h>
void main()
{
	float y, z, a = 1.774 ,m=5, x = 3;
	while (x < 5.1) {
		y = sqrt(a + pow(m, 2) * pow(x, 2))/(a+x)*m;
		printf("x=%5.2f\t", x);
		printf("y=%5.2f\t", y);
		if (abs(y) < 1)
			z = y + 1;
		if (abs(y) >= 1)
			z = pow(sin(y),2);
		printf("z=%6.4f\n", z);
		x = x + 0.2;

	}
}