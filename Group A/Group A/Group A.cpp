// Group A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Animal.h"
#include "AnimalArray.h"
#include "Perro.h"

using namespace std;

int main()
{
	/*Animal a("Dog 1", 4);
	Animal b("Dog 2", 4);
	Animal c("Chicken 1", 2);

	Animal arr[] = { a,b,c };
	int size = sizeof(arr) / sizeof(arr[0]);

	AnimalArray array_a(arr, size);
	AnimalArray array_b = array_a;

	array_a.resize(3);
	array_a.push_back(b);
	array_a.print();
	array_a.insert(2,c);
	array_a.remove(3);*/
	cout << "\n";
	Perro perro1('p10');
	perro1.hablar('gg');

	
}