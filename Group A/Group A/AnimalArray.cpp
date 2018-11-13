#include "pch.h"
#include "AnimalArray.h"
#include "Animal.h"
#include <iostream>

template <typename T>
AnimalArray<T>::AnimalArray() 
{
	this->size = 0;
	ada = new T[size];
}

template <typename T>
AnimalArray<T>::AnimalArray (T* newada, int newsize) 
{
	this->size = newsize;
	ada = new T[size];
	for (int y = 0; y < size; y++)
		ada[y] = newada[y];
}

template <typename T>
AnimalArray<T>::AnimalArray(AnimalArray &o) 
{
	this->size = o.size;
	ada = new T[size];
	for (int i = 0; i < size; i++)
		ada[i] = o.ada[i];
}

template <typename T>
AnimalArray<T>::~AnimalArray() {
	delete[] ada;
}

template <typename T>
void AnimalArray<T>::resize(int newsize) {
	T *ptr = new T[newsize];
	int minsize = (newsize < size) ? size : newsize;
	for (int y = 0; y < minsize; y++)
		ptr[y] = ada[y];
	delete ada;
	size = newsize;
	ada = ptr;
}

template <typename T>
void AnimalArray<T>::clear() {
	resize(0);
}

template <typename T>
void AnimalArray<T>::push_back(T p) {
	
	resize(size + 1);
	ada[size - 1] = p;

}

template <typename T>
void AnimalArray<T>::insert(int pos, T p) {
	resize(size + 1);
	for (int y = size - 1; pos - 1 < y; y--)
		ada[y] = ada[y - 1];
	ada[pos - 1] = p;
}


template <typename T>
void AnimalArray<T>::remove(int pos) {

	for (int y = pos; y < size - 1; y++)
		ada[y - 1] = ada[y];
	size--;
	resize(size);

}



template <typename T>
void AnimalArray<T>::print() {
	for (int y = 0; y < size; y++)
		ada[y].hacerhablar();
}
