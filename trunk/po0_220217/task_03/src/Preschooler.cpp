#include "Preschooler.h"

Preschooler::Preschooler(std::string_view _message)
    : Person(_message)
{
}

void Preschooler::Print() const
{
    Person::Print();
    std::cout << "Preschooler: behavior type: ";
    switch (static_cast<int>(behaviorType))
    {
    case 0:
    {
        std::cout << "MISCHIEVOUS";
        break;
    }
    case 1:
    {
        std::cout << "LISTENING";
        break;
    }
    case 2:
    {
        std::cout << "FOLLOWING INSTRUCTIONS";
        break;
    }
    case 3:
    {
        std::cout << "PLAYING WITH OTHERS";
        break;
    }
    case 4:
    {
        std::cout << "SOCIAL";
        break;
    }
    case 5:
    {
        std::cout << "CURIOUS";
        break;
    }
    case 6:
    {
        std::cout << "OTHER";
        break;
    }
    default:
    {
        std::cout << "There isn't such behavior type";
        break;
    }
    }
    std::cout << std::endl;
}

bool Preschooler::operator==(const Preschooler &right) const
{
    return (this->behaviorType == right.behaviorType);
}
