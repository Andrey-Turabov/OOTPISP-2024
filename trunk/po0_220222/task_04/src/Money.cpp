#include "Money.h"

Money::Money(const double a)
{
	rubles = (int)a;
	kopeck = (a - (int)a) * 100;
}

void Money::operator=(const Money& a)
{
	kopeck = a.kopeck;
	rubles = a.rubles;
}

bool Money::operator==(const Money& a)
{
	if (kopeck == a.kopeck && rubles == a.rubles)
		return true;
	else
		return false;
}

int Money::GetK() const
{
	return kopeck;
}

long Money::GetR() const
{
	return rubles;
}

void Money::SetK(const int k)
{
	kopeck = k;
}

void Money::SetR(const long r)
{
	rubles = r;
}

std::ostream& operator<<(std::ostream &out, const Money& a)
{
	
	out << a.GetR() <<','<< a.GetK() << std::endl;
	return out;
}

std::istream& operator>>(std::istream &in, Money& a)
{
	std::cout << "Enter amount of rubles" << std::endl;
	in >> a.rubles;
	std::cout << "Enter amount of kopeck" << std::endl;
	in >> a.kopeck;
	return in;
}
