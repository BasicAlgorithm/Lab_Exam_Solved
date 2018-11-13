#pragma once

#include <iostream>
#include "Animal.h"

#ifndef ANIMAL_ARR_H
#define ANIMAL_ARR_H

template <typename T>
class AnimalArray
{
	int size;
	T *ada;
public:
	AnimalArray();
	AnimalArray(T*, int);
	AnimalArray(AnimalArray &o);
	
	~AnimalArray();
	
	void resize(int);
	void print();
	void clear();
	void insert(int, T);
	void push_back(T);
	void remove(int);
};

#endif // ANIMAL_ARR_H