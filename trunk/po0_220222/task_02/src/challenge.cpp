#include "challenge.h"
#include <iostream>


Challenge::Challenge(const std::string_view _name, const bool _passed) : examinee_name(_name), passed(_passed)
{
	this->Add();
}

void Challenge::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}

void Challenge::SetNext(Challenge* nextChallenge)
{
	next = nextChallenge;
}

void Challenge::Print() const
{
	std::cout << "Examinee: " << examinee_name << std::endl;
	std::cout << "Challenge ";
	if (passed)
	{ 
		std::cout << "passed";
	}
	else
	{
		std::cout << "not passed";
	}
	std::cout << std::endl;
}

void Challenge::ShowChallenges()
{
	Challenge* ptr= begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}

bool Challenge::GetResult() const
{
	return passed;
}

void Challenge::SetResult(const bool _passed)
{
	passed = _passed;
}

std::string Challenge::GetExaminee() const
{
	return examinee_name;
}

void Challenge::SetExaminee(const std::string_view _examinee)
{
	examinee_name = _examinee;
}

Challenge *Challenge::begin = nullptr;
Challenge* Challenge::last = nullptr;
