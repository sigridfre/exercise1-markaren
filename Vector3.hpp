
#ifndef EXERCISE1_VECTOR3_HPP
#define EXERCISE1_VECTOR3_HPP

#include <ostream>

class Vector3 {

public:
  float x;
  float y;
  float z;

  Vector3(): Vector3(0,0,0) {}
  Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

  Vector3 add(const Vector3 & other) const;

  Vector3 operator+(const Vector3 & other) const {
    return add(other);
  }

  friend std::ostream& operator<<(std::ostream& os, const Vector3 & c){
    os << "VectorClass(x=" << c.x << ", y=" << c.y << ", z=" << c.z << ")";
    return os;
  }

  ~Vector3() {
    // does nothing
  }

};

#endif // EXERCISE1_VECTOR3_HPP
