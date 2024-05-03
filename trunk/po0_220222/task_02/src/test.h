#pragma once
#include "challenge.h"
#include <iostream>
#ifndef TESTH
#define TESTH

class Test :
    public Challenge
{
public:
    Test() = default;
    Test(const int _noq, const std::string_view _name, const bool _passed);
    void Print() const override;

    int GetAmount() const;
    void SetAmount(const int _amount);
private:
    int number_of_questions = 0;
};

#endif
