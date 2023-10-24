#include <iostream>
#include "person.h"

namespace people {
    Person::Person(std::string firstname, std::string lastname, int age) : _firstname(firstname), _lastname(lastname), _age(age) {
    }

    std::string Person::firstname() const {
        return _firstname;
    }

    std::string Person::lastname() const {
        return _lastname;
    }

    int Person::age() const {
        return _age;
    }

    std::string getFullName(const Person &p) {
        return p.firstname() + " " + p.lastname() + " a " + p.age() + "ans";
    }
}