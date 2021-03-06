// Group B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename Q>
void allprint(Q* rarray, int nsize)
{
	for (int i = 0; i < nsize; i++)
	{
		cout << rarray[i] << ", ";
	}
	cout << endl;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////
///////////// Class abstract

class Polygon
{
protected:
	int w, h, r;

public:
	Polygon() { w = 10; h = 20; }
	virtual	void area() = 0;
	virtual void nrolados() = 0;

	virtual ~Polygon() {};
};
///////////////////////////////


//////////////////////////////////////////////////
///////////// Classes whose derived from Polygon

class Rectangle: public Polygon
{
	int nlados;
public:
	Rectangle() { 
		nlados = 4;
		r = 0;
		cout<<"put the width and height of the polygon"<<endl;
		cin >> w;
		cin >> h;
	}
	void varyvalues () {
		cout << "put the new polygon's width and height" << endl;
		cin >> w;
		cin >> h;
	}
	void area() { cout<<(w * h)<<endl; }
	void nrolados() { cout << "I have " << nlados << " sides" << endl; }
	~Rectangle() { cout << "deleting rectangle" << endl; };

};

class Triangle : public Polygon
{
	int nlados;
public:
	Triangle() { 
		nlados = 3; 
		r = 0;
		cout << "put the width and height of the polygon" << endl;
		cin >> w;
		cin >> h;
	}
	void varyvalues() {
		cout << "put the new polygon's width and height" << endl;
		cin >> w;
		cin >> h;
	}
	void area() { cout<<(w*h/2)<<endl;}
	void nrolados() { cout << "I have "<<nlados<<" sides" << endl; }
	~Triangle() { cout << "deleting triangle" << endl; };

};

class Circle : public Polygon
{
	char nlados[9] = { "infinite" };
public:
	Circle() {
		w = 0; h = 0;
		cout << "put the circle's radio" << endl;
		cin >> r;
	}
	void varyvalues() {
		cout << "put the new circle's radio" << endl;
		cin >> r;
	}

	void area() { cout << (3.1415*r*r) << endl;}
	void nrolados() { cout << nlados << endl; }
	~Circle() { cout << "deleting circle" << endl; };

};
///////////////////////////////


///////////////////////////////////////////////////////////////////////////////////
///////////// Class of Polygon, but with template because of Polygon is abstract.

template<typename U>
class ArrayPolygon
{
	U *adp;
	int size;
public:
	ArrayPolygon() { size = 1; adp = new U[size]; }
	ArrayPolygon(U *nadp, int nsize) {
		size = nsize;
		adp = new U[size];
		for (int i = 0; i < size; i++) adp[i] = nadp[i];
	}
	ArrayPolygon(ArrayPolygon &C) {
		size = C.adp;
		adp = new U[size];
		for (int i = 0; i < size; i++) adp[i] = C.adp[i];
	}
	~ArrayPolygon() { cout << "destroying ArrayPolygon" << endl; }

	void resize() {
		int nsize;
		cout << "Currently the ArrayPolygon has " << size << " slots." << endl << "Whats is the new number of slots?" << endl <<"warning with losing values"<<endl;
		cin >> nsize;
		if (nsize == size) { return; }
		U *tmp = new U[size];
		int tmpsize = nsize < size ? nsize : size;
		for (int i = 0; i < tmpsize; i++) {
			tmp[i] = adp[i];
		}
		delete[]adp;
		adp = tmp;
	}

	void insert(U nobj) { int nsize = size + 1; this->insert(nobj, nsize); }

	void insert(U nobj, int pos) {
		size++;
		U *tmp = new U[size];
		int s = 0;
		for (int i = 0; i < size; i++) {
			if (i==pos-1) {tmp[i]=nobj; continue;}
			tmp[i] = adp[s];
			s++;
		}
		delete[] adp;
		adp = tmp;

	}

	void remove() { this->remove(size); }

	void remove(int pos) {
		if (pos>size) {cout << "numero invalido" << endl; return;}
		int nsize = size;
		size--;
		U *tmp = new U[size];
		int s = 0;
		for (int i = 0; i < nsize; i++) {
			if (i == pos - 1) { continue; }
			tmp[s] = adp[i];
			s++;
		}
		delete[] adp;
		adp = tmp;

	}

	void printer () { allprint<int>(adp, size); }

};


///////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	Rectangle r;
	Triangle t;
	Circle c;

	Polygon *rr = &r;
	Polygon *tt = &t;
	Polygon *cc = &c;

	Rectangle a1;
	Rectangle a2;
	Rectangle a3;

	Rectangle ejemplo[3] = { a1,a2,a3 };

	ArrayPolygon <Rectangle> ejemploarray(ejemplo, 3);
	ejemploarray.insert(a3, 2);
	ejemploarray.remove(2);
	ejemploarray.resize();

	int ia = 11;
	int ib = 22;
	int ic = 33;

	int ints[3] = { ia,ib,ic };

	ArrayPolygon <int> enteros(ints, 3);
	
	enteros.printer();
	enteros.insert(ib);
	enteros.printer();
	enteros.insert(ia, 2);
	enteros.printer();
	enteros.remove();
	enteros.printer();
	enteros.remove(2);
	enteros.printer();

	
	return 0;
	system("pause");
}
