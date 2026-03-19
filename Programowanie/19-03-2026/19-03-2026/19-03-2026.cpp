#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Klasa1 obiekt1(10);
    Klasa1 obiekt2 = obiekt1;

    cout << "Przyklad dla Klasa1 (bez konstruktora kopiujacego)" << endl;
    cout << "obiek1: (oryginal)" << endl;
    obiekt1.wyswietl();
    cout << "obiek2: (kopia)" << endl;
    obiekt2.wyswietl();
    cout << endl;

    Klasa2 obiekt3(20);
    Klasa2 obiekt4 = obiekt3;

    cout << "Przyklad dla Klasa2 (z konstruktorem kopiujacym)" << endl;
    cout << "obiek3: (oryginal)" << endl;
    obiekt3.wyswietl();
    cout << "obiek4: (kopia)" << endl;
    obiekt4.wyswietl();
}

