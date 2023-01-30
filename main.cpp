
#include <iostream>

#include "Vector3.hpp"

int main() {

  Vector3 v1;
  Vector3 v2{1,2,3};

  std::cout << v2 << std::endl;

  Vector3 & ref = v1;
  ref.x = 0;
  std::cout << v1 << std::endl;

  return 0;
}
