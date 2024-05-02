#include <iostream>
#include <string>
#include "challenge.h"
#include "exam.h"
#include "final_exam.h"
#include "test.h"

int main()
{
	Exam first(10, true, "Thomas", true);
	Final_exam second("Pinchyk", 10, true, "Thomas", true);
	Test third(50, "Thomas", false);
	Challenge fourth;

	first.SetExaminee("Thomas Shelby");
	second.SetExaminator("Pinchyk A.V.");
	third.SetAmount(100);
	fourth.SetResult(false);
	fourth.SetExaminee("Artemiy");
	fourth.Add();

	Challenge::ShowChallenges();
}