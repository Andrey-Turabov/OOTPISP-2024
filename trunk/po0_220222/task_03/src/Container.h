#pragma once
#include "Geometry.h"
#include <iostream>
#ifndef CONTAINERH
#define CONTAINERH

class Container
{
public:
	Container() = default;
	~Container() = default;
	class Container_unit
	{
	public:
		Container_unit(Geometry* _geom) : geom(_geom), next(nullptr)
		{}
		Geometry* geom;
		Container_unit* next;
	};

	void ShowAll() const;
	void Add(Geometry* _geom);
	int size() const;

	Geometry* operator[](const int &index);

private:
	int _size = 0;
	Container_unit *begin;
	Container_unit *last;
};

#endif
