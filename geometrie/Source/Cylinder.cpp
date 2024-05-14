
#include <iostream>
#include "../Header/Circle.hpp"
#include "../Header/Point.hpp"
#include "../Header/Cylinder.hpp"
#define PI 3.14
using namespace std;

Cylinder::Cylinder(Circle c, float z)
{
	base = c;
	height = z;
}

Cylinder::~Cylinder()
{
}

Circle Cylinder::getBase()
{
	return base;
}

float Cylinder::getHeight()
{
	return height;
}

void Cylinder::setBase(Circle newBase)
{
	base = newBase;
}

void Cylinder::setHeight(float newHeight)
{
	height = newHeight;
}


void Cylinder::display()
{
	cout << "Cylinder with: " << endl
		 << "Base" << " ";
	base.display();
	cout << "Height: " << height << " " << "cm" << endl;
}

void Cylinder::area()
{
	float area = 2 * PI * base.getRadius() * height;
	cout << "The area of this cylinder is: " << area << " cm²" << endl;
}

void Cylinder::volume()
{
	float volume = PI * base.getRadius() * base.getRadius() * height;
	cout << "The volume of this cylinder is: " << volume << " cm³" << endl;
}
