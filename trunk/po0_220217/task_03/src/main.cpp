#include <iostream>
#include <string>

#include "MyContainer.h"

#include "Preschooler.h"
#include "Schoolboy.h"
#include "StudentBrSTU.h"
#include "Worker.h"

int main()
{
    MyContainer arr;

    Preschooler preschooler1("First preschooler");
    Preschooler preschooler2("Second preschooler");

    preschooler1.SetBehaviorType(Preschooler::BehaviorType::SOCIAL);
    preschooler2.SetBehaviorType(Preschooler::BehaviorType::LISTENING);

    if (preschooler1 == preschooler2)
    {
        std::cout << "Prescholers are equal" << std::endl;
    }
    else
    {
        std::cout << "Prescholers are unequal" << std::endl;
    }

    arr.Add(&preschooler1);
    arr.Add(&preschooler2);

    Schoolboy schoolboy1(Schoolboy::SchoolLevel::SECONDARY);
    Schoolboy schoolboy2(Schoolboy::SchoolLevel::HIGH);

    if (schoolboy1 == schoolboy2)
    {
        std::cout << "Scholeboys are equal" << std::endl;
    }
    else
    {
        std::cout << "Scholeboys are unequal" << std::endl;
    }
    schoolboy2 = schoolboy1;

    arr.Add(&schoolboy1);
    arr.Add(&schoolboy2);

    StudentBrSTU student1(StudentBrSTU::Faculties::FEIS);
    StudentBrSTU student2(StudentBrSTU::Faculties::EF);

    if (student1 == student2)
    {
        std::cout << "Students are equal" << std::endl;
    }
    else
    {
        std::cout << "Students are unequal" << std::endl;
    }

    arr.Add(&student1);
    arr.Add(&student2);

    Worker worker1(10);
    Worker worker2(13);

    if (worker1 == worker2)
    {
        std::cout << "Workers are equal" << std::endl;
    }
    else
    {
        std::cout << "Workers are unequal" << std::endl;
    }

    arr.Add(dynamic_cast<Person *>(&worker1));
    arr.Add(dynamic_cast<Person *>(&worker2));

    std::cout << "Count of people: " << arr.size() << std::endl;
    arr.ShowAll();

    arr[8]->Print();
}
