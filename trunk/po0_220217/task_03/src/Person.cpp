#include "Person.h"
#include <typeinfo>

Person::Person(std::string_view _message) : message(_message) {}

void Person::Print() const
{
    std::cout << "[" << message << "]" << std::endl;
}
