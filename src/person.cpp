
#include "exercise1/person.hpp"

using namespace ais1002;

// constructor has been fully implemented for you
// clang-tidy should give a "warning" about the use of const reference vs. value + std::move, but they are both ok.
Person::Person(const std::string &firstName, const std::string &lastName)
        : firstName_(firstName),
          lastName_(lastName) {}

