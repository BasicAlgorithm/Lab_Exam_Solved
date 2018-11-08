#include "pch.h"
#include "Perro.h"

#include <iostream>
using namespace std;

Perro::Perro(char nombre)
{
	nombreperro = nombre;
}


Perro::~Perro()
{
}

void Perro::cuantaspatastengo()
{
	
	cout << "tengo 4 patas!" << endl;
}

void Perro::hablar(char p)
{
	cout << "guau! guau!" << p<<  endl;
}
