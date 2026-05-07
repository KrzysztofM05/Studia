#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj a, b i c do obliczenia max:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "Max: " << max3(a, b, c) << endl;

    int r, h;
    cout << "Podaj promien i wysokosc walca do obliczenia pola powierzchni:" << endl;
    cout << "promien = ";
    cin >> r;
    cout << "wysokosc = ";
    cin >> h;
    Walec<int> w(r, h);
    
    cout << "Pole: " << w.polePomierzchni<double>()<<endl;
    cout << "Pole: " << w.polePomierzchni<float>()<<endl;
}


