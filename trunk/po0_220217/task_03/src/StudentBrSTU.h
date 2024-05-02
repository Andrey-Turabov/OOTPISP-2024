#pragma once

#include <iostream>
#include <string>

#include "Person.h"

class StudentBrSTU : public Person
{
public:
    enum class Faculties : int8_t
    {
        CEF,
        FEIS,
        ESEF,
        EF,
        MEF,
    };

    StudentBrSTU() = default;
    explicit StudentBrSTU(Faculties nameOfFaculty);
    StudentBrSTU(const StudentBrSTU &other) = delete;

    ~StudentBrSTU() override = default;

    void Print() const override;

    inline void SetFaculty(Faculties nameOfFaculty) { faculty = nameOfFaculty; };

    bool operator==(const StudentBrSTU &right) const;

private:
    Faculties faculty = Faculties::FEIS;
};
