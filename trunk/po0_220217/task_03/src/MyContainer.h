#pragma once

#include <iostream>

#include "Person.h"
#include "Preschooler.h"
#include "Schoolboy.h"
#include "StudentBrSTU.h"
#include "Worker.h"

#include <vector>
#include <memory>
#include <stdexcept>

class MyContainer
{
public:
    MyContainer() = default;

    void ShowAll() const;
    void Add(Person *_person);
    int size() const;

    Person *operator[](const int index);

    struct Node
    {
        explicit Node(Person *_date)
            : date(_date)
        {
        }

        Person *date;
        std::unique_ptr<Node> next = nullptr;
    };

private:
    int32_t _size = 0;
    std::unique_ptr<Node> head = nullptr;
};
