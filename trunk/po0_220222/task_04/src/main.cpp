#include <iostream>
#include "Money.h"
#include "Set.h"

int main()
{
	Set<int> tmp;
	tmp.Add(1);
	tmp.Add(2);
	std::cout << tmp[1] << std::endl;

	Set<Money> moneybag;
	moneybag.Add(Money(10.50));
	moneybag.Add(Money(3.28));
	moneybag.Add(Money(55.99));
	moneybag.Add(Money(1.1));
	moneybag.operator();
}