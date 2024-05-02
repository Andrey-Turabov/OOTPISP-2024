#include "test.h"

Test::Test(const int _noq, const std::string_view _name, const bool _passed) : Challenge(_name, _passed), number_of_questions(_noq)
{
	this->Add();
}

void Test::Print() const
{
	Challenge::Print();
	std::cout << "Questions: " << number_of_questions << std::endl;
}

int Test::GetAmount() const
{
	return number_of_questions;
}

void Test::SetAmount(const int _amount)
{
	number_of_questions = _amount;
}
