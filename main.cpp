#include <iostream>
#include "RungeKutta_cuartoorden.h"
int main() {
    double y;
    y= RungeKutta_cuartoorden(0,1,2,5);
    std::cout << y << std::endl;
    std::cout << "Hello, World!" << std::endl;
  return 0;
}
