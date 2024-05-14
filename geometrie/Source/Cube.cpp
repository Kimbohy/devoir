#ifndef _CUBECPP
#define _CUBECPP

#include <iostream>
#include "../Header/Cube.hpp"
using namespace std;

Cube::Cube(float x)
{
    edge = x;
}

Cube::~Cube()
{
}

float Cube::getEdge()
{
    return edge;
}

void Cube::setEdge(float newEdge)
{
    edge = newEdge;
}

void Cube::display()
{
    cout << "Cube with: " << "Edge = " << edge << " cm" << endl;
}

void Cube::area()
{
    float area = edge * edge;
    cout << "The area of this cube is: " << area << " cm²" << endl;
}

void Cube::volume()
{
    float volume = edge * edge * edge;
    cout << "The volume of this cube is: " << volume << " cm³" << endl;
}
#endif
