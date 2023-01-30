
#include <iostream>

#include "Vector3.hpp"

int main() {

  Vector3 v1;
  Vector3 v2{1,2,3};

  std::cout << v2 << std::endl;

  Vector3 & ref = v1; // ref is declared as a reference to v1
  ref.x = 0; // v1.x will also change
  std::cout << v1 << std::endl; // printing v1 and ref would be equal

  return 0;
}
