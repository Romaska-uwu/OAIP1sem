﻿#include <iostream>

void main()
{
    double y, w, m = 6, z = 0.05e-5;
    y = cos(5 * m) / pow(sin(0.4 * m), 2);
    w = 4 * z * y - 7 * exp(-2 * y);
    std::cout << " y = " << y;
    std::cout << " w = " << w;
}