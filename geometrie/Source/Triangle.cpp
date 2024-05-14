#ifndef _TRIANGLECPP
#define _TRIANGLECPP

#include <iostream>
#include "../Header/Triangle.hpp"
using namespace std;

Triangle::Triangle()
{
}

Triangle::Triangle(float x, float y, float z)
{
	edgeA = x;
	edgeB = y;
	edgeC = z;
}

Triangle::~Triangle()
{
}

float Triangle::getEdgeA()
{
	return edgeA;
}

float Triangle::getEdgeB()
{
	return edgeB;
}

float Triangle::getEdgeC()
{
	return edgeC;
}

void Triangle::setEdgeA(float newEdgeA)
{
	edgeA = newEdgeA;
}

void Triangle::setEdgeB(float newEdgeB)
{
	edgeB = newEdgeB;
}

void Triangle::setEdgeC(float newEdgeC)
{
	edgeC = newEdgeC;
}

void Triangle::display()
{
	cout << "Triangle with: " << "Edge A = " << edgeA << " cm" << " and " << "Edge B: " << edgeB << " cm" << "Edge C: " << edgeC << " cm" << endl;
}

void Triangle::perimeter()
{
	float perimeter = edgeA + edgeB + edgeC;
	cout << "The perimeter is: " << perimeter << " cm" << endl;
}

#endif
