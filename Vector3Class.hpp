
#ifndef EXERCISE1_VECTOR3CLASS_HPP
#define EXERCISE1_VECTOR3CLASS_HPP

#include <ostream>

class Vector3Class {

public:
  float x;
  float y;
  float z;

  Vector3Class(): Vector3Class(0,0,0) {}
  Vector3Class(float x, float y, float z) : x(x), y(y), z(z) {}

  Vector3Class add(const Vector3Class& other) const;

  Vector3Class operator+(const Vector3Class& other) const {
    return add(other);
  }

  friend std::ostream& operator<<(std::ostream& os, const Vector3Class& c){
    os << "VectorClass(x=" << c.x << ", y=" << c.y << ", z=" << c.z << ")";
    return os;
  }

  ~Vector3Class() {
    // does nothing
  }

};

#endif // EXERCISE1_VECTOR3CLASS_HPP
