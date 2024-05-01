#pragma once
#include <string>
#ifndef CHALLENGEH
#define CHALLEHGEH

class Challenge
{
public:
	Challenge() = default;
	Challenge(const std::string& _name, const bool _passed);
	~Challenge() = default;
	void Add();
	void SetNext(Challenge* nextChallenge);
	virtual void Print() const;
	static void ShowChallenges();

	bool GetResult() const;
	void SetResult(const bool _passed);
	std::string GetExaminee() const;
	void SetExaminee(const std::string& _examinee);
private:

	bool passed = false;
	std::string examinee_name = "";
	Challenge* next = nullptr;
protected:
	static Challenge *begin;
	static Challenge *last;
};

#endif
