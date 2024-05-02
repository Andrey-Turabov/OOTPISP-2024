#pragma once
#ifndef SETH
#define SETH
#include <iostream>
#include <memory>
#include <cmath>

using namespace std;

template <class T>
class Unit {
	public:
	Unit(const T a, const int _index);
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

	friend std::ostream& operator << <T>(std::ostream &out, const Set<T>& a);
	friend std::istream& operator >> <T>(std::istream &in,  Set<T>& a);

	void Add(const T a);


private:
	int _size = 0;
	Unit<T>* head;
	Unit<T> Find(const int index);

};

template <class T>
void Set<T>::Add(const T a)
{
	auto _new = std::make_unique<Unit<T>>(a, _size);
	
	if (_size == 0)
	{
		head = _new.get();
	}
	else
	if (ceil(log2(_size + 1)) - log2(_size + 1) == 0.00)
	{
		Unit<T>* tmp = head;
		while (tmp->left != nullptr)
			tmp = tmp->left;
		tmp->left = _new.get();
	}
	else
	{
		int lvl = 0;
		lvl = ceil(log2(_size + 2));
		Unit<T>* tmp = head;
		int lvl_size = pow(2, lvl - 1);
		int last_index = pow(2, lvl) - 2;
		int first_index = last_index - lvl_size + 1;

		for (int i = 0; i < lvl - 1; i++)
		{
			lvl_size = last_index - first_index + 1;
			if (_size >= first_index + lvl_size / 2)
			{
				if (i == lvl - 2)
				{
					tmp->right = _new.get();
				}
				else
				{
					tmp = tmp->right;
					first_index += lvl_size / 2;
				}
			}
			else
			{
				if (i == lvl - 2)
				{
					tmp->left = _new.get();
				}
				else
				{
					tmp = tmp->left;
					last_index -= lvl_size / 2;
				}
			}
		}
	}
	_new.release();
	_size++;
}

template <class T>
Unit<T> Set<T>::Find(const int index)
{
	if (index == 0)
		return *head;
	
	int lvl = 0;
	lvl = ceil(log2(index + 2));
	Unit<T>* tmp = head;
	int lvl_size = pow(2, lvl - 1);
	int last_index = pow(2, lvl) - 2;
	int first_index = last_index - lvl_size+1; 

	for (int i = 0; i < lvl - 1; i++)
	{
		lvl_size = last_index - first_index + 1;
		if (index >= first_index + lvl_size / 2)
		{
			tmp = tmp->right;
			first_index += lvl_size / 2;
		}
		else
		{
			tmp = tmp->left;
			last_index -= lvl_size / 2;
		}
	}

	return *tmp;
}

template<class T>
T Set<T>::operator[](const int index)
{
	return Find(index).value;
}

template<class T>
int Set<T>::operator()()const
{
	return _size;
}

template <class T>
Set<T>& Set<T>:: operator=(const Set<T>& a)
{
	head = nullptr;
	_size = 0;
	for (int i = 0; i < a(); i++)
	{
		this->Add(a[i]);
	}
	return this;
}

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


template<class T>
std::ostream& operator << (std::ostream &out, const Set<T>& a)
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


template<class T>
inline Unit<T>::Unit(const T a, const int _index)
{
	value = a;
	index = _index;
}

#endif