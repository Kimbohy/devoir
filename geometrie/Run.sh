#!/bin/bash

for fichier in Source/*.cpp
do
    nomFichier=$(basename "$fichier".cpp)
    g++ -fPIC -c "$fichier" -o "$nomFichier.o"
done

g++ -o libGeometri.so -shared *.o
ar -rv libGeometri.a *.o