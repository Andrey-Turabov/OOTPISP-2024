#pragma once
#include "exam.h"
#ifndef FINAL_EXAMH
#define FINAL_EXAMH

class Final_exam :
    public Exam
{
public:
    Final_exam() = default;
    Final_exam(const std::string_view _examinator ,const int _mark, const bool _isWritten, const std::string_view _name, const bool _passed);
    void Print() const override;

    void SetExaminator(const std::string_view _examinator);
    std::string GetExaminator() const;
private:
    std::string examinator = "";
};

#endif 
