
# Лабораторная работа №1 #

## Классы и объекты в С++ ##

## Вариант 7 ##
 

## Цель работы ##
Получить практические навыки реализации классов на С++.


### Блоки с кодом реализации конструкторов и деструктора ###
```c++
Adres::Adres()
	{ 
		std::cout << "The default constructor was called " << this << std::endl;
	}
	
	Adres::Adres(const std::string& n_name, const std::string& n_street, const int n_number) 
		: name(n_name), street(n_street), number(n_number)
	{
		std::cout << "Constructor with params was called " << this << std::endl;
	}

```

### Фрагмент программы, показывающий использование указателя на объект и указателя на функцию ###

#### Указатель на объект ####

```c++
std::cout << road[1]->getName() << std::endl;
```

#### В элементe road содержится адрес объекта. Затем вызывается метод getName класса Adres. Метод возвращает имя объекта. ####

#### Указатель на функцию ####

```c++
void (Adres::*current_fun)() const;
	
	current_fun = &Adres::print;

	(adres.*current_fun)();
```

#### Адрес функции print записывается в указатель на функцию. Затем объект adres разыменовывает указатель и вызывает функцию print ####
