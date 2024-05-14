#ifndef __CYLINDER__
#define __CYLINDER__
#include "./Point.hpp"
#include "./Circle.hpp"

class Cylinder
{
public:
	Cylinder(Circle c, float z);
	~Cylinder();
	Circle getBase();
	float getHeight();
	void setBase(Circle newBase);
	void setHeight(float newHeight);
	void display();
	void volume();
	void area();

protected:
	Circle base;
	float height;
};

#endif
