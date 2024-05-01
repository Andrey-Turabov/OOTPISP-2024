#pragma once
#include "challenge.h"
#ifndef EXAMH
#define EXAMH

class Exam :
    public Challenge
{
public:
    Exam() = default;
    Exam(const int _mark, const bool _isWritten, const std::string& _name, const bool _passed);
    ~Exam() = default;
    void Print() const override;

    void SetIsWritten(const bool _isWritten);
    bool GetIsWritten() const;
    void SetMark(const int _mark);
    int GetMark() const;
private:
    bool isWritten = 0;
    int mark = 0;
};

#endif
