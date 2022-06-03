#include <iostream>
#include <cmath>

#include "Rect.hpp"
#include "Polar.hpp"

int main() 
{
  Rect r1(1,2);
  Rect r2(3,4);
  Rect r3;
  Rect r4;

  r3 = r1 + r2;

  std::cout << r3;

  std::cout << M_PI << "\n";

  Polar p1(4,M_PI / 6);
  r4 = r3 + p1;

  std::cout << r3 << " + \n" << p1 << " = \n" << r4;

}
