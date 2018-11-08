#include "pch.h"
#include "AnimalArray.h"
#include "Animal.h"
#include <iostream>

AnimalArray::AnimalArray() {
	this->size = 0;
	ada = new Animal[size];
}


AnimalArray::AnimalArray(Animal newada[], int newsize) {
	this->size = newsize;
	ada = new Animal[size];
	for (int y = 0; y < size; y++)
		ada[y] = newada[y];
}


AnimalArray::AnimalArray(AnimalArray &o) {
	this->size = o.size;
	ada = new Animal[size];
	for (int i = 0; i < size; i++)
		ada[i] = o.ada[i];
}


AnimalArray::~AnimalArray() {
	delete[] ada;
}

void AnimalArray::resize(int newsize) {
	Animal *ptr = new Animal[newsize];
	int minsize = (newsize < size) ? size : newsize;
	for (int y = 0; y < minsize; y++)
		ptr[y] = ada[y];
	delete ada;
	size = newsize;
	ada = ptr;
}

void AnimalArray::clear() {
	resize(0);
}

void AnimalArray::push_back(Animal p) {
	
	resize(size + 1);
	ada[size - 1] = p;

}

void AnimalArray::insert(int pos, Animal p) {
	resize(size + 1);
	for (int y = size - 1; pos - 1 < y; y--)
		ada[y] = ada[y - 1];
	ada[pos - 1] = p;
}



void AnimalArray::remove(int pos) {

	for (int y = pos; y < size - 1; y++)
		ada[y - 1] = ada[y];
	size--;
	resize(size);

}




void AnimalArray::print() {
	for (int y = 0; y < size; y++)
		ada[y].hacerhablar();
}
