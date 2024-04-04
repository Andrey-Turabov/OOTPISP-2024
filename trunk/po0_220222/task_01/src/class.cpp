#include "class.h"
#include <iostream>


	Adres::Adres()
	{ 
		std::cout << "The default constructor was called " << this << std::endl;
	}
	
	Adres::Adres(const std::string& n_name, const std::string& n_street, const int n_number) 
		: name(n_name), street(n_street), number(n_number)
	{
		std::cout << "Constructor with params was called " << this << std::endl;
	}
	
	void Adres::print() const
	{
		std::cout << this->name;
		std::cout << this->street;
		std::cout << this->number;
	}
	
	std::string Adres::getName() const
		{ return name;}
	void Adres::setName(const std::string& n_name)
		{name = n_name;}	
	std::string Adres::getStreet() const
		{ return street;}
	void Adres::setStreet(const std::string& n_street)
		{street = n_street;}
	int Adres::getNumber() const
		{ return number;}
	void Adres::setNumber (const int n_number)
		{ number = n_number;}
