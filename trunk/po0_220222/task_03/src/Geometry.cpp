#include "Geometry.h"
#include <iostream>

Geometry::Geometry(const float _area, const float _perimeter):area(_area), perimeter(_perimeter)
{
}

void Geometry::SetArea(const float _area)
{
	area = _area;
}

float Geometry::GetArea() const
{
	return area;
}

void Geometry::SetPerimeter(const float _perimeter)
{
	perimeter = _perimeter;
}

float Geometry::GetPerimeter() const
{
	return perimeter;
}

void Geometry::Print() const
{
	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;

}

void Geometry::operator=(const Geometry &right)
{
	this->area = right.area;
	this->perimeter = right.perimeter;
}

bool Geometry::operator==(const Geometry &right) const
{
	if (this->area == right.area && this->perimeter == right.perimeter)
		return true;
	else return false;
}
