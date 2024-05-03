#pragma once

#include <iostream>
#include "Person.h"

class Schoolboy : public Person
{
public:
    enum class SchoolLevel
    {
        PRIMARY,
        SECONDARY,
        HIGH,
    };

    Schoolboy() = default;
    explicit Schoolboy(SchoolLevel level);
    Schoolboy(const Schoolboy &other) = delete;

    ~Schoolboy() override = default;

    inline SchoolLevel GetSchoolLevel() const { return schoolLevel; };
    inline void SetSchoolLevel(SchoolLevel level) { schoolLevel = level; };

    void Print() const override;

    Schoolboy &operator=(const Schoolboy &right) = default;
    bool operator==(const Schoolboy &right) const;

private:
    SchoolLevel schoolLevel = SchoolLevel::PRIMARY;
};
