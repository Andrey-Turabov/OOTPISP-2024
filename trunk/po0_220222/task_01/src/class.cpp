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
	
	//Adres::Adres(Book const &old_book)
	//	:name(old_book.name), author(old_book.author), price(old_book.price)
	//{
	//	std::cout << "Copy constructor was called " << this << std::endl;
	//}
	
	//Adres::~Adres()
	//{
	//	std::cout << "Destructor was called " << this << std::endl;
	//}
	
	void Adres::print() const
	{
		std::cout << this->name;
		std::cout << this->street;
		std::cout << this->number;
	}
	
	std::string Book::getName() const
		{ return name;}
	void Book::setName(const std::string& n_name)
		{name = n_name;}	
	std::string Book::getStreet() const
		{ return street;}
	void Book::setStreet(const std::string& n_street)
		{street = n_street;}
	int Book::getNumber() const
		{ return Number;}
	void Book::setNumber (const int n_number)
		{ number = n_number;}
