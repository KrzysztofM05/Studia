#include <iostream>
#include "header.h"

void pokaz(Klasa& t) {
	cout << "Wartosc = " << t.value << endl;
	cout << "adres funkcji: " << &pokaz << endl;
}

int main()
{
	Klasa obj1(10);
	Klasa obj2 = obj1;


	pokaz(obj2);
	pokaz(obj1);

	cout << endl;
	cout << endl;

	cout << "1) czy funkcja zaprzyjazniona jest kopiowana wraz z kopia obiektu ?" << endl;
	cout << "Nie, funkcja nie jest kopiowana bo istnieje niezaleznie od obiektu." << endl;
	cout << "2) czy kopiowanie obiektu wymaga utworzenia w klasie konstruktora kopiujacego ?" << endl;
	cout << "Nie, w tym przykladzie jest on zastosowany natomiast nie jest on wymagany." << endl;
	cout << "3) czy dla tworzonego obiektu, bedacego kopia innego obiektu, uruchamiany jest konstruktor ?" << endl;
	cout << "Tak, w tym przykladzie uruchamia sie kontruktor kopiujacy.";
}
