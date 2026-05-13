#include <iostream>
#include "header.h"

using namespace std;


int main() {

    Przeciaz liczba1(10, 5), liczba2(3 , 6);

    cout << "liczba1: "; liczba1.show();
    cout << "liczba2: "; liczba2.show();

    Przeciaz liczba3 = -liczba1;

    cout << "liczba3: "; liczba3.show();

    Przeciaz liczba4 = liczba1 + liczba2;

    cout << "liczba4: "; liczba4.show();

    ++liczba1;
    cout << " liczba1 po ++: "; liczba1.show();

    if (liczba1 == liczba2) {
        cout << "liczba1 jest rowna liczba2" << endl;
    }
    else
    {
        cout << "liczba1 nie jest rowna liczba2" << endl;
    }
    return 0;
}