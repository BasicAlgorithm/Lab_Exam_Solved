// Group A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Animal.h"
//#include "Animal.cpp"
#include "AnimalArray.h"
#include "AnimalArray.cpp"
#include "Perro.h"
//#include "Perro.cpp"

using namespace std;

int main()
{
	
	Perro perro1;
	Perro perro2;

	Perro Adeperros[2] = { perro1,perro2 };
	
	AnimalArray<Perro> Arrayperros(Adeperros, 2);
	Arrayperros.resize(4);
	Arrayperros.insert(2, perro1);
	Arrayperros.push_back(perro2);
	Arrayperros.remove(1);

	return 0;	
}