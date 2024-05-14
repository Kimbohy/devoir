#include <iostream>
#include "../Header/Circle.hpp"
#include "../Header/Point.hpp"
#include "../Header/Circle.hpp"
using namespace std;

Circle::Circle()
{
}

Circle::Circle(Point O, float x)
{
	origin = O;
	radius = x;
}

float Circle::getRadius()
{
	return radius;
}

Point Circle::getOrigin()
{
	return origin;
}

void Circle::setRadius(float newRadius)
{
	radius = newRadius;
}

void Circle::setOrigin(Point newOrigin)
{
	origin = newOrigin;
}

void Circle::display()
{
	cout << "Circle with: " << "center O";
	origin.display();
	cout << "Radius: " << radius << " " << "cm" << endl;
}

void Circle::perimeter()
{
	float perimeter = 2 * 3.14 * radius;
	cout << "The perimeter of this circle is: " << perimeter << " cm" << endl;
}

void Circle::area()
{
	float area = 3.14 * radius * radius;
	cout << "The area of this circle is: " << area << " cm²" << endl;
}

Circle::~Circle()
{
}
