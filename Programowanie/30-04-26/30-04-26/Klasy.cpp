#include "header.h"

Kolo::Kolo(double promien) :Obiekt(), r(promien) {}

double Kolo::pole() {
	cout << "pole kola wynosi: " << 3.14 * r * r;
	return 3.14 * r * r;
}

Kolo::~Kolo() {
	cout << "Destruktor Kolo" << endl;
}


Kwadrat::Kwadrat(double bok) : Obiekt(), a(bok) {}

double Kwadrat::pole(){
	cout << "pole kwadratu wynosi: " << a * a;
	return a * a;
}

Kwadrat::~Kwadrat() {
	cout << "Destruktor Kwadrat" << endl;
}


Walec::Walec(double promien, double wysokosc) : Kolo(promien), h(wysokosc) {}

double Walec::pole() {
	cout << "pole walca wynosi: " << 2 * 3.14159265359 * r * (r + h);
	return 2 * 3.14159265359 * r * (r + h);
}

Walec::~Walec()
{
	cout << "Destruktor Walec" << endl;
}


Szescian::Szescian(double bok) : Kwadrat(bok) {}

double Szescian::pole()  {
	cout << "pole szescianu wynosi: " << 6 * a * a;
	return 6 * a * a;
}

Szescian::~Szescian()
{
	cout << "Destruktor Szescian" << endl;
}

