#pragma once
#include <string>
#ifndef CHALLENGEH
#define CHALLEHGEH

class Challenge
{
public:
	Challenge() = default;
	Challenge(const std::string_view _name, const bool _passed);
	virtual ~Challenge() = default;
	void Add();
	void SetNext(Challenge* nextChallenge);
	virtual void Print() const;
	static void ShowChallenges();

	bool GetResult() const;
	void SetResult(const bool _passed);
	std::string GetExaminee() const;
	void SetExaminee(const std::string_view _examinee);
private:

	std::string examinee_name = "";
	bool passed = false;
	Challenge* next = nullptr;
protected:
	static Challenge *begin;
	static Challenge *last;
};

#endif
