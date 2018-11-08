#pragma once
#include "Animal.h"

class Perro: public Animal
{
	char nombreperro;
public:
	Perro(char);
	~Perro();

	void cuantaspatastengo();
	void hablar(char);
};

