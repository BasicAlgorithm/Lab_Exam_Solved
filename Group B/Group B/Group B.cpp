// Group B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


class Polygon
{
public:
	Polygon(int a, int b): w(a), h(b){}
	Polygon() { w = 10; h = 20; }
	virtual	int area() = 0;
	virtual void printlados() = 0;

	//~Polygon();

protected:
	int w, h;

};

class Rectangle: public Polygon
{
	int a;
public:
	Rectangle() { a = 4444; }
	void printlados() { cout << "tengo 4 lados" << endl; }
	int area() {return 44444;}
	//~Rectangle();

};

class Triangle : public Polygon
{
	int a;
public:
	Triangle() { a = 33333; }
	void printlados() { cout << "tengo 3 lados" << endl; }
	int area() { return 33333;}
	//~Triangle();

};

class Circle : public Polygon
{
	int a;
public:
	Circle() { a = 9999; }
	void printlados() { cout << "tengo infinitos lados" << endl; }
	int area() { return 9999; }
	//~Circle();

};

int main()
{
	
	Rectangle r;
	Triangle t;
	Circle c;
	r.printlados();
	t.printlados();
	c.printlados();
	//r.area();
	


}
