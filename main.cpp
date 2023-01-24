
#include <vector>
#include <iostream>
#include <ostream>

#include "Vector3Class.hpp"

struct Vector3Struct {

  float x = 0;
  float y = 0;
  float z = 0;

};

std::vector<int> getSomeInts() {

  return std::vector<int>{1,2,3};
}

int getInt() {

  return 0;
}


int main() {

  Vector3Class v1;
  Vector3Class v2{1,2,3};

  std::cout << v2 << std::endl;

  Vector3Class& ref = v1;
  ref.x = 0;
  std::cout << v1 << std::endl;

  {
    auto result = v1 + v2;
    ref = result;
  }

  std::cout << ref << std::endl;
  

  std::vector<int> ints = getSomeInts();

  int myint = getInt();

  return 0;
}
