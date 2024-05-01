#pragma once
#include "exam.h"
#ifndef FINAL_EXAMH
#define FINAL_EXAMH

class Final_exam :
    public Exam
{
public:
    Final_exam() = default;
    Final_exam(const std::string& _examinator ,const int _mark, const bool _isWritten, const std::string& _name, const bool _passed);
    ~Final_exam() = default;
    void Print() const override;

    void SetExaminator(const std::string& _examinator);
    std::string GetExaminator() const;
private:
    std::string examinator = "";
};

#endif 
