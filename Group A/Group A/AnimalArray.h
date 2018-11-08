#pragma once

#include <iostream>
#include "Animal.h"

#ifndef ANIMAL_ARR_H
#define ANIMAL_ARR_H


class AnimalArray
{
	int size;
	Animal *ada;
public:
	AnimalArray();
	AnimalArray(Animal newada[], int newsize);
	AnimalArray(AnimalArray &o);
	
	~AnimalArray();
	
	void resize(int);
	void print();
	void clear();
	void insert(int, Animal);
	void push_back(Animal);
	void remove(int);
};

#endif // ANIMAL_ARR_H