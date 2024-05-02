#include "StudentBrSTU.h"

StudentBrSTU::StudentBrSTU(Faculties nameOfFaculty)
    : Person("Student"), faculty(nameOfFaculty)
{
}

void StudentBrSTU::Print() const
{
    Person::Print();
    std::cout << "Name of the faculty: ";
    switch (static_cast<int>(faculty))
    {
    case 0:
    {
        std::cout << "CEF";
        break;
    }
    case 1:
    {
        std::cout << "FEIS";
        break;
    }
    case 2:
    {
        std::cout << "ESEF";
        break;
    }
    case 3:
    {
        std::cout << "EF";
        break;
    }
    case 4:
    {
        std::cout << "MEF";
        break;
    }
    default:
    {
        std::cout << "There isn't such faculty";
        break;
    }
    }
    std::cout << std::endl;
}

bool StudentBrSTU::operator==(const StudentBrSTU &right) const
{
    return (this->faculty == right.faculty);
}
