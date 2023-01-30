

#include "Vector3.hpp"

Vector3 Vector3::add(const Vector3 &other) const {
  return {x + other.x, y + other.y, z + other.z};
}
