#include "exam.h"
#include <iostream>

Exam::Exam(const int _mark, const bool _isWritten, const std::string_view _name, const bool _passed) : Challenge(_name, _passed), isWritten(_isWritten), mark(_mark)
{
	this->Add();
}

void Exam::Print() const
{
	Challenge::Print();
	std::cout << "Exam type: ";
	if (isWritten)
	{
		std::cout << "written";
	}
	else
	{
		std::cout << "oral";
	}
	std::cout << std::endl;
	std::cout << "Mark: " << mark << std::endl;
}

void Exam::SetIsWritten(const bool _isWritten)
{
	isWritten = _isWritten;
}

bool Exam::GetIsWritten() const
{
	return isWritten;
}

void Exam::SetMark(const int _mark)
{
	mark = _mark;
}

int Exam::GetMark() const
{
	return mark;
}
