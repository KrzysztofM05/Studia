#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    double a, b;

    cout << "Podaj dwie liczby do dzielenia: ";
    cin >> a >> b;

    try
    {
        double wynik = dzielenie(a, b);
        cout << "Wynik dzielenia: " << wynik << endl;
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }

    int x, y;

    cout << "\nPodaj dwie liczby do modulo: ";
    cin >> x >> y;

    try
    {
        int wynikModulo = modulo(x, y);
        cout << "Wynik modulo: " << wynikModulo << endl;
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}