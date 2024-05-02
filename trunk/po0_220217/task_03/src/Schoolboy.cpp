#include "Schoolboy.h"

Schoolboy::Schoolboy(SchoolLevel level)
    : Person("Schoolboy"), schoolLevel(level)
{
}

void Schoolboy::Print() const
{
    Person::Print();
    std::cout << "School Level: ";
    switch (static_cast<int>(schoolLevel))
    {
    case 0:
    {
        std::cout << "Primary School";
        break;
    }
    case 1:
    {
        std::cout << "Secondary School";
        break;
    }
    case 2:
    {
        std::cout << "High School";
        break;
    }
    default:
    {
        std::cout << "Unknown school Level";
        break;
    }
    }
    std::cout << std::endl;
}

bool Schoolboy::operator==(const Schoolboy &right) const
{
    return this->schoolLevel == right.schoolLevel;
}
