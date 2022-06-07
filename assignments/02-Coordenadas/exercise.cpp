#include <iostream>
#include <cmath>

#include "Rect.hpp"
#include "Polar.hpp"
#include "Rectr.hpp"
#include "Polard.hpp"

int main() 
{
  Rect r1(1,2);
  Rect r2(3,4);
  Rect r3;
  Rect r4;

  r3 = r1 + r2;

  std::cout << "Sumando coordenadas rectangulares:\n";
  std::cout << r1 << " + \n" << r2 << " = \n" << r3;

  std::cout << "Valor de PI radianes\n";
  std::cout << M_PI << "\n";

  Polar p1(4,M_PI / 6);
  r4 = r3 + p1;

  std::cout << "Sumando coordenadas rectangulares y polares:\n";
  std::cout << r3 << " + \n" << p1 << " = \n" << r4;

  Polar p2(5, M_PI/ 6);
  Polar p3;

  p3 = p1 * p2;

  std::cout << "Multiplicando coordenadas polares:\n";
  std::cout << p1 << " * \n" << p2 << " = \n" << p3;
  
  Rectr r5(4,8);
  Rectr r6(2,1);
  Rectr r7;


  r7 = r5 - r6;

  std::cout << "Restando coordenadas rectangulares:\n";
  std::cout << r5 << " - \n" << r6 << " = \n" << r7;

  Polard p4(4,M_PI / 6);
  Polard p5(5, M_PI/ 6);
  Polard p6;

  p6 = p4 / p5;

  std::cout << "División coordenadas polares:\n";
  std::cout << p4 << " / \n" << p5 << " = \n" << p6;
}
