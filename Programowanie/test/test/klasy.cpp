#include "header.h"

Kolo::Kolo(double promien):Obiekt(){
	promien = r;
}

double Kolo::pole() {
	cout << "pole kola wynosi: " << 3.14 * r * r << endl;
}

Kolo::~Kolo() {
	cout << "Destruktor Kolo" << endl;
}

void oblicz(Obiekt* wsk) {
	wsk->pole();
}