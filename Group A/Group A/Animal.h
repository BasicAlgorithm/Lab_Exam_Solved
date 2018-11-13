#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
protected:
	string nombre;
	int nrPatas = 99;

public:
	
	Animal(): nombre("Default name"), nrPatas(4) {}
	Animal(string n, int p) : nombre(n), nrPatas(p) {}

	virtual void hablar() = 0;
	/*void hacerhablar() {
		this->habla();
	}*/
	~Animal();
};
#endif // ANIMAL_H


