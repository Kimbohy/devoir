# Système de Licence pour un Programme en C++

Ce projet consiste à développer un système de licence simple pour un programme en utilisant le langage de programmation C++. Le but est de vérifier si un utilisateur a une licence valide pour utiliser le programme ou si l'utilisateur est en mode d'essai.

## Structure du Projet

Le projet est composé de trois fichiers principaux :

1. `main.cpp` : Le point d'entrée du programme qui instancie l'objet `Activation` et gère l'affichage en fonction de l'état de l'activation.
2. `Activation.hpp` : Le fichier d'en-tête contenant la déclaration de la classe `Activation` avec ses méthodes et attributs.
3. `Activation.cpp` : Le fichier source implémentant les méthodes de la classe `Activation`.

## Utilisation

Pour utiliser ce système de licence, vous devez d'abord avoir un fichier texte nommé `txt.reg` contenant la clé d'activation. Si le fichier n'existe pas , le programme affichera "Erreur lors du lecture de la clé" et entrera en mode d'essai, de même si la clé ne correspond pas à celle attendue (`keyTest` dans le code).

En mode d'essai, le nombre de tentatives d'activation est limité par le fichier `try.txt`. Chaque tentative réduit le nombre de tentatives restantes par 1. Si toutes les tentatives sont épuisées, le programme affiche "Acheter la licence".
