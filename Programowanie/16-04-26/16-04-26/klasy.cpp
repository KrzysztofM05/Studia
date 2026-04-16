#include <iostream>
#include "header.h"

using namespace std;

void Pochodna::funkcja1(){
	cout << "--- Pochodna ---" << endl;
	cout<< wart1;
	cout<< wart2;
	cout<< wart3;
	cout << "----------------" << endl;
}

void PochodnaPochodnej::funkcja2() {
	cout << "--- Pochodna Pochodnej ---" << endl;
	cout << wart1;
	cout << wart2;
	cout << wart3;
	cout << "--------------------------" << endl;
}
