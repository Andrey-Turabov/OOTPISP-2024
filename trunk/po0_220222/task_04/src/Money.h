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

	friend std::ostream& operator<<(std::ostream& out, const Money& a)
	{

		out << a.GetR() << ',' << a.GetK() << std::endl;
		return out;
	}

	friend std::istream& operator>>(std::istream& in, Money& a)
	{
		std::cout << "Enter amount of rubles" << std::endl;
		in >> a.rubles;
		std::cout << "Enter amount of kopeck" << std::endl;
		in >> a.kopeck;
		return in;
	}
	int GetK() const;
	long GetR() const;
	void SetK(const int k);
	void SetR(const long r);

private:
	int kopeck = 0;
	long rubles = 0;
};

#endif
