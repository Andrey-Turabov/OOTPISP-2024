#include <iostream>
#include <string>
#include "challenge.h"
#include "exam.h"
#include "final_exam.h"
#include "test.h"

int main()
{
	Exam first(10, 1, "Thomas", 1);
	Final_exam second("Pinchyk", 10, 1, "Thomas", 1);
	Test third(50, "Thomas", 0);
	Challenge fourth;

	first.SetExaminee("Thomas Shelby");
	second.SetExaminator("Pinchyk A.V.");
	third.SetAmount(100);
	fourth.SetResult(false);
	fourth.SetExaminee("Artemiy");
	fourth.Add();

	Challenge::ShowChallenges();
}