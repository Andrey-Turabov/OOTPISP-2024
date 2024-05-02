#pragma once

#include <string_view>
#include <exception>
#include <iostream>

class Person
{
public:
    Person() = default;
    explicit Person(std::string_view _message);
    Person(const Person &other) = delete;

    virtual ~Person() = default;

    virtual void Print() const;

    Person &operator=(const Person &right) = default;
    bool operator==(const Person &right) const = default;

private:
    std::string_view message = "";
};
