#include "header.h"
#include <iostream>
#include <string>
using namespace std;

Punkt::Punkt()	
{
	x = y = 0;
	nazwa = "";
	cout << "Konstruktor domyslny Punkt"<<endl;
}

Punkt::Punkt(int x, int y, string nazwa)
{
	this->x = x;
	this->y = y;
	this->nazwa = nazwa;
	cout << "Kontruktor parametryczny Punkt: " << nazwa << endl;
}

Punkt::~Punkt()
{
	cout << "Destruktor Punkt" << endl;
}

Kolo::Kolo():Punkt()
{
	r = 1;
	cout << "Konstruktor domyslny Kolo"<<endl;
}

Kolo::Kolo(int r, int x, int y, string nazwa) :Punkt(x, y, nazwa)
{
	this->r = r;
	cout << "Kontruktor parametryczny Kolo: " << nazwa << endl;
}

Kolo::~Kolo()
{
	cout << "Destruktor Kolo" << endl;
}

Kwadrat::Kwadrat():Punkt()
{
	a = 1;
	cout << "Konstruktor domyslny Kwadrat" << endl;
}

Kwadrat::Kwadrat(int a, int x, int y, string nazwa) :Punkt(x, y, nazwa)
{
	this->a = a;
	cout << "Kontruktor parametryczny Kwadrat: " << nazwa << endl;
}

Kwadrat::~Kwadrat()
{
	cout << "Destruktor Kwadrat" << endl;
}

Walec::Walec():Kolo()
{
	h = 1;
	cout << "Konstruktor domyslny Walec" << endl;
}

Walec::Walec(int h, int r, int x, int y, string nazwa) :Kolo(r, x, y, nazwa)
{
	this->h = h;
	cout << "Kontruktor parametryczny Walec: " << nazwa << endl;
}

Walec::~Walec()
{
	cout << "Destruktor Walec" << endl;
}

Prostopadloscian::Prostopadloscian() :Kwadrat()
{
	h = 1;
	cout << "Konstruktor domyslny Prostopadloscian" << endl;
}

Prostopadloscian::Prostopadloscian(int h, int a, int x, int y, string nazwa) :Kwadrat(a, x, y, nazwa)
{
	this->h = h;
	cout << "Kontruktor parametryczny Prostopadloscian: " << nazwa << endl;
}

Prostopadloscian::~Prostopadloscian()
{
	cout << "Destruktor Prostopadloscian" << endl;
}