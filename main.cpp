#include <iostream>
#include "EulerModificado.h"

int main() {
    double YF;
  std::cout << "Hello, World!" << std::endl;
  YF = euler_modificado(0, 2, 1, 200);
  std::cout << YF;
  return 0;
}