#include "pch.h"
#include "Perro.h"

#include <iostream>
using namespace std;

Perro::Perro(char nombre)
{
	nombreperro = nombre;
}

Perro::Perro()
{
	nombreperro = 'A';
}

Perro::~Perro()
{
}

void Perro::cuantaspatastengo()
{
	
	cout << "tengo 4 patas!" << endl;
}

void Perro::hablar()
{
	cout << "TENGO " << nrPatas<<" PATAS DE PERRO"<<  endl;
}

