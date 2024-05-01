#include "final_exam.h"
#include <iostream>

Final_exam::Final_exam(const std::string_view _examinator, const int _mark, const bool _isWritten, const std::string_view _name, const bool _passed): Exam(_mark, _isWritten, _name, _passed), examinator(_examinator)
{
	this->Add();
}

void Final_exam::Print() const
{
	Exam::Print();
	std::cout << "Examinator: " << examinator << std::endl;
}

void Final_exam::SetExaminator(const std::string_view _examinator)
{
	examinator = _examinator;
}

std::string Final_exam::GetExaminator() const
{
	return examinator;
}
