#include <iostream>
#include "header.h"

using namespace std;


Klasa1::Klasa1(int val) {
		x = val;
		px = &x;
	}

void Klasa1::wyswietl() {
	cout << "adres x = " << &x << endl;
	cout << "wartosc x = " << x << endl;
	cout << "adres px = " << &px << endl;
	cout << "wartosc px = " << px << endl;
}


Klasa2::Klasa2(int val) {
	x = val;
	px = &x;
}

Klasa2::Klasa2(Klasa2& val) {
	x = val.x;
	px = &x;
}

void Klasa2::wyswietl() {
	cout << "adres x = " << &x << endl;
	cout << "wartosc x = " << x << endl;
	cout << "adres px = " << &px << endl;
	cout << "wartosc px = " << px << endl;
}
