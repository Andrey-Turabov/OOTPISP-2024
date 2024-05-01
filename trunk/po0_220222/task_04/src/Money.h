#pragma once
#ifndef MONEYH
#define MONEYH
#include <iostream>


class Money
{
public:
	Money() = default;
	Money(const double a);
	~Money() = default;
	void operator=(const Money& a);
	bool operator==(const Money& a);

	friend std::ostream& operator << (std::ostream &out, const Money& a);
	friend std::istream& operator >> (std::istream &in, Money& a);

	int GetK() const;
	long GetR() const;
	void SetK(const int k);
	void SetR(const long r);

private:
	int kopeck = 0;
	long rubles = 0;
};

#endif
