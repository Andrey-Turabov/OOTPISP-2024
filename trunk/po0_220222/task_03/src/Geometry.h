#pragma once

#ifndef GEOMETRYH
#define GEOMETRYH

class Geometry
{
public:
	Geometry() = default;
	Geometry(const float _area, const float _perimeter);
	virtual ~Geometry() = default;
	void SetArea(const float _area);
	float GetArea() const;
	void SetPerimeter(const float _perimeter);
	float GetPerimeter() const;


	virtual void CountArea();
	virtual void CountPerimeter();
	virtual void Print() const;
	void operator=(const Geometry &right);
	bool operator==(const Geometry &right) const;
	bool operator!=(const Geometry &right) const;

private:
	float area = 0.00;
	float perimeter = 0.00;
};

#endif
