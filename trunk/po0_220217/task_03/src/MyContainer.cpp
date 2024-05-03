#include "MyContainer.h"

void MyContainer::ShowAll() const
{
    const Node *current = head.get();
    while (current != nullptr)
    {
        current->date->Print();
        current = current->next.get();
    }
}

void MyContainer::Add(Person *person)
{
    auto temp = std::make_unique<Node>(person);
    if (head)
    {
        temp->next = std::move(head);
        head = std::move(temp);
    }
    else
    {
        head = std::move(temp);
    }

    _size++;
}

int MyContainer::size() const
{
    return _size;
}

Person *MyContainer::operator[](const int index)
{
    try
    {
        if (index < 0 || index >= _size)
            throw std::out_of_range("out of range");

        auto ptr = std::move(head);
        for (int i = 0; i < index; i++)
        {
            ptr = std::move(ptr->next);
        }
        return ptr->date;
    }
    catch (const std::out_of_range &err)
    {
        std::cout << err.what() << std::endl;
        Person person;
        return nullptr;
    }
}
