#ifndef CLASSH
#define CLASSH

#include <string>

class Adres {
public:
	Adres()
	{
		name = "";
		street = "";
		number = 0;
	}
	Adres(const std::string& n_name, const std::string& n_street, int n_price);
	Adres(Adres const &old_book) = delete;
	Adres& operator = (const Adres&) = delete;
	//~Adres();
	void print() const;	
	std::string getName() const;
	void setName(const std::string& n_name);	
	std::string getStreet() const;
	void setStreet(const std::string& n_street);
	int getNumber() const;
	void setNumber ( const int n_number);

private:
	std::string name;
	std::string street;
	int number;
};
#endif