#include <iostream>
#include "class.h"
#include <vector>
#include <memory>

int main()
{
	std::string n_name;
	std::cin >> n_name;
	std::string n_street;
	std::cin >> n_street;
	int number;
	std::cin >> number;
	Adres home(n_name, n_street, number);
	void (Adres::*current_fun)() const;
	
	current_fun = &Adres::print;

	std::vector <Adres*> road;

	road.push_back(&home);  

	Adres adres;

	road.push_back(&adres);

	(adres.*current_fun)();

	std::cout << road[1]->getName() << std::endl;
	
	Adres c_road[] = {   {"Дом", "Советская", 1},
						 {"Берлога", "Ленина", 2},
						 {"Палатка", "Московская", 0}
	};

	system("pause");
}