
#include "exercise1/person.hpp"

using namespace ais1002;

// constructor has been fully implemented for you
// clang-tidy should give a "warning" about the use of const reference vs. value
// + std::move, but they are both ok.
Person::Person(const std::string &firstName, const std::string &lastName)
    : firstName_(firstName), lastName_(lastName) {}

std::string Person::getFirstName() const {
  return firstName_;
}

void Person::setFirstName(const std::string &firstName) {
  if (!firstName.empty()) {
    firstName_ = firstName;
  }
}

std::string Person::getLastName() const {
  return lastName_;
}

void Person::setLastName(const std::string &lastName) {
  if (!lastName.empty()) {
    lastName_ = lastName;
  }
}

std::string Person::getFullName() const {
  return firstName_ + " " + lastName_;
}

void Person::setAge(std::optional<int> age) {
  age_ = age;
}

int Person::getAge() const {

  if (age_) {
    return age_.value();
  } else {
    return -1;
  }

  //return age_.value_or(-1);
}

bool ais1002::containsFirstName(const std::vector<Person> &persons, const std::string &firstName) {
  for (const auto& p : persons) {
    if (p.getFirstName() == firstName) return true;
  }
  return false;
}

int ais1002::countLastName(const std::vector<Person> &persons, const std::string &lastname) {
  int count = 0;
  for (const auto& p : persons) {
    if (p.getLastName() == lastname) count++;
  }
  return count;
}
