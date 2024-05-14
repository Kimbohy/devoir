#ifndef _SquareCPP
#define _SquareCPP

#include <iostream>
#include "../Header/Square.hpp"
using namespace std;

// Constructeur de la classe Square
Square::Square(float x)
{
    cote = x;
}
Square::~Square()
{
}
// Acceseur aux données
float Square::getCote()
{
    return cote;
}

// Mutateur de donnée
void Square::setCote(float newCote)
{
    cote = newCote;
}

// Affichage de donnée
void Square::display()
{
    cout << "Square de: " << "Cote = " << cote << " cm" << endl;
}

// Calcul du perimetre
void Square::perimeter()
{
    float perimetre = cote * 4;
    cout << "le perimetre est: " << perimetre << " cm" << endl;
}
// Calcul d'aire
void Square::aire()
{
    float aire = cote * cote;
    cout << "L'aire de ce Square est: " << aire << " cm²" << endl;
}
#endif
