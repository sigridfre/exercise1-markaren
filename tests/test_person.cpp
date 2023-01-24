
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "exercise1/person.hpp"

using namespace ais1002;

std::vector<Person> makePersons() {
    return std::vector<Person> {
            Person("Harry", "Hole"),
            Person("Nils", "Pettersen"),
            Person("Nicole", "Schmidt"),
            Person("Peter", "Schmidt"),
            Person("Per", "Nilsen"),
            Person("Petter", "Pettersen")
    };
}

TEST_CASE("test_Person") {

    std::string firstName = "Harry";
    std::string lastName = "Hole";
    Person p1{firstName, lastName};

    CHECK(firstName == p1.getFirstName());
    CHECK(lastName == p1.getLastName());

    std::string fullName{firstName + " " + lastName};
    CHECK(fullName == p1.getFullName());

    CHECK(-1 == p1.getAge());

    int age = 51;
    p1.setAge(age);

    CHECK(age == p1.getAge());

    firstName = "Per";
    p1.setFirstName(firstName);
    CHECK(firstName == p1.getFirstName());
    fullName = firstName + " " + lastName;
    CHECK(fullName == p1.getFullName());

}

TEST_CASE("test_containsFirstName") {

    auto persons = makePersons();
    CHECK(containsFirstName(persons, "Per"));
    CHECK(containsFirstName(persons, "Nicole"));
    CHECK(!containsFirstName(persons, "per"));
    CHECK(!containsFirstName(persons, "Olav"));

}

TEST_CASE("test_countLastName") {

    auto persons = makePersons();
    CHECK(0 == countLastName(persons, "Bauer"));
    CHECK(1 == countLastName(persons, "Hole"));
    CHECK(2 == countLastName(persons, "Schmidt"));

}