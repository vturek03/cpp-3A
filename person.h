#include <string>
#include <iostream>

namespace people {

  class Person {

  public:
    Person(std::string firstname, std::string lastname, int age);
    std::string firstname() const;
    std::string lastname() const;
    int age();
    
  private:
    std::string _firstname;
    std::string _lastname;
    int _age;
  };

  std::string getFullName(const Person &p);
}