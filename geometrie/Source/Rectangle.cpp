#ifndef _RECTANGLECPP
#define _RECTANGLECPP

#include <iostream>
#include "../Header/Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(float x, float y)
{
	length = x;
	width = y;
}

Rectangle::~Rectangle()
{
}

float Rectangle::getLength()
{
	return length;
}

float Rectangle::getWidth()
{
	return width;
}

void Rectangle::setLength(float newLength)
{
	length = newLength;
}

void Rectangle::setWidth(float newWidth)
{
	width = newWidth;
}

void Rectangle::display()
{
	cout << "Rectangle with: " << "length = " << length << " cm" << " and " << "width: " << width << " cm" << endl;
}

void Rectangle::perimeter()
{
	float perimeter = (length + width) * 2;
	cout << "The perimeter is: " << perimeter << " cm" << endl;
}

void Rectangle::area()
{
	float area = length * width;
	cout << "The area of this rectangle is: " << area << " cm²" << endl;
}
#endif
