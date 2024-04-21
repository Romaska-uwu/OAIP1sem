#include <iostream>

void main()
{
    double t, y, d = 0.5e-8, c = -9, a = 1.5;
    t = (d * c + a * sqrt(c - 1));
    y = 0, 5 * t / (d + exp(a));
    std::cout << "t =" << t;
    std::cout << "y =" << y;
}