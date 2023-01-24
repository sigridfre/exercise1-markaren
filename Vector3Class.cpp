

#include "Vector3Class.hpp"

Vector3Class Vector3Class::add(const Vector3Class &other) const {
  return {x + other.x, y + other.y, z + other.z};
}
