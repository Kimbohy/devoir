#include <iostream>
#include "../Header/Sphere.hpp"
#define PI 3.14

using namespace std;

Sphere::Sphere()
{
}

Sphere::Sphere(Point3D O, float x)
{
	origin = O;
	radius = x;
}

Sphere::~Sphere()
{
}

float Sphere::getRadius()
{
	return radius;
}

Point3D Sphere::getOrigin()
{
	return origin;
}

void Sphere::setRadius(float newRadius)
{
	radius = newRadius;
}

void Sphere::setOrigin(Point3D newOrigin)
{
	origin = newOrigin;
}

void Sphere::display()
{
	cout << "Sphere with: " << "center O";
	origin.display();
	cout << "Radius: " << radius << " " << "cm" << endl;
}

void Sphere::area()
{
	float area = 4 * PI * radius * radius;
	cout << "The area of this sphere is: " << area << " cm²" << endl;
}

void Sphere::volume()
{
	float volume = (4 / 3) * PI * radius * radius * radius;
	cout << "The volume of this sphere is: " << volume << " cm³" << endl;
}
