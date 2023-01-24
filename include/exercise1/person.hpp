
#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>
#include <optional>
#include <vector>

// You don't need to make any changes to this file.
// However, you need to implement the functions through the source file located in src/person.cpp
// If you feel adventurous, however, you can try to make "personlib" header-only (CMake needs to be updated). Preferably in a separate branch.

namespace ais1002 {

    class Person {

    public:
        Person(const std::string &firstName, const std::string &lastName);

        std::string getFirstName() const;

        void setFirstName(const std::string &firstName);

        std::string getLastName() const;

        void setLastName(const std::string &lastName);

        // return the full name of this person in the form: "<givenName> <lastName>"
        std::string getFullName() const;

        // return -1 if no age is set, otherwise return age
        int getAge() const;

        void setAge(std::optional<int> age);


    private:
        std::string firstName_;
        std::string lastName_;
        std::optional<int> age_;
    };


    // return true if a person in the vector has the firstName given by firstName
    bool containsFirstName(const std::vector<Person>& persons, const std::string& firstName);

    // return the number of persons with the given lastName
    int countLastName(const std::vector<Person>& persons, const std::string& lastname);

}

#endif //EXERCISE1_PERSON_HPP
