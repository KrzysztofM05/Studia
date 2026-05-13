#include <iostream>
#include "header.h";

using namespace std;

Test::Test(int v) {
	cout << "Kontruktor zwykly" << endl;
}

Test:Test(Test &kopia) {
	val = kopia.val;
	cout << "Konstruktor kopi" << endl;
}

void pokaz(Test &t) {
	cout << "Wartosc: " << t.val << endl;
}