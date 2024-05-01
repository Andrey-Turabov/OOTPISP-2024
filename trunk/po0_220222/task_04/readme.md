
# Лабораторная работа №4 #

## Шаблоны в C++ ##

## Вариант 7 ##
 

## Цель работы ##
Изучение правил создания шаблонов в C++. 

### Описание класса-контейнера ###
```c++
 template <class T>
class Unit {
	public:
	Unit<T>(const T a, const int _index);
	T value;
	int index = 0;
	Unit* left = nullptr;
	Unit* right = nullptr;
};

template <class T>
class Set
{
public:
	Set() = default;
	Set(const Set<T>& a);
	~Set()= default;

	T operator [] (const int index);
	int	operator() () const;
	Set operator * (const Set<T>& a);

	Set& operator=(const Set<T>& a);

	friend std::ostream& operator << <T>(std::ostream &out,  Set<T>& a);
	friend std::istream& operator >> <T>(std::istream &in, Set<T>& a);

	void Add(const T a);


private:
	int _size = 0;
	Unit<T>* head;
	Unit<T> Find(const int index);

};
```

### Определение компонентных функций ###

```c++
template <class T>
Set<T> Set<T>:: operator * (const Set<T>& a)
{
	Set<T> newSet;

	for (int i = 0; i < a(); i++)
	{
		T tmp = a[i];
		for (int j = 0; j < _size; j++)
		{
			if (tmp == this[j])
			{
				T t;
				t = tmp;
				newSet.Add(t);
			}
		}
	}

	return newSet;
}
```

### Определение пользовательского класса Money ###

```c++
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

```

#### Перешрузко операторов ввода-вывода ####

```
template<class T>
std::ostream& operator << (std::ostream &out, Set<T>& a)
{
	for (int i = 0; i < a(); i++)
	{
		out << a[i] << std::endl;
	}
	return out;
}


template <class T>
std::istream& operator >> (std::istream &in, Set<T>& a)
{
	for (int i = 0; i < a(); i++)
	{
		in >> a[i];
	}
	return in;
}
```
