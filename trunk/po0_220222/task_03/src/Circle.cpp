#include "Circle.h"
#include <iostream>

Circle::Circle(const float _radius) : radius(_radius)
{
	
}

float Circle::GetRadius() const
{
	return radius;
}

void Circle::SetRadius(const float _radius)
{
	radius = _radius;
	this->CountArea();
	this->CountPerimeter();
}

void Circle::CountArea()
{
	SetArea((pow(GetRadius(), 2) * std::numbers::pi));
}

void Circle::CountPerimeter()
{
	SetPerimeter(2 * std::numbers::pi * GetRadius());
}

void Circle::Print() const
{
	std::cout << "<Circle>" << std::endl;
	std::cout << "Radius: " << radius << std::endl;
	Geometry::Print();
}

bool Circle::operator==(const Circle &right) const
{
	if (this->radius == right.radius)
		return true;
	else
		return false;
}

