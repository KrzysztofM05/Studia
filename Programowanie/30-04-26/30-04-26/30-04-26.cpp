#include <iostream>
#include "header.h"
using namespace std;

void oblicz(Obiekt* wsk) {
    wsk->pole();
}

int main() {

    Kolo kolo1(3);
    Kwadrat kwa1(5);
    Walec wal(11, 10);
    Szescian szes(10);
    Obiekt* wsk;


    wsk = &kolo1;
    wsk->pole();
    cout << endl;
    oblicz(wsk);
    cout << endl;

    wsk = &kwa1;
    wsk->pole();
    cout << endl;
    oblicz(wsk);
    cout << endl;

    wsk = &wal;
    wsk->pole();
    cout << endl;
    oblicz(wsk);
    cout << endl;

    wsk = &szes;
    wsk->pole();
    cout << endl;
    oblicz(wsk);
    cout << endl;

    cout << "*****************" << endl;
    return 0;
}