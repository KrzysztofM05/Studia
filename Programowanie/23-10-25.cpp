#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <random>

using namespace std;


int main()
{	
	mt19937 generator(time(nullptr));
	uniform_int_distribution<int> distribution(0, 100);
	int randomNumber = distribution(generator);
	int liczbaZgadywana;
	while (true) {
		cout << "Zgadnij liczbe: ";
		cin >> liczbaZgadywana;

		if (liczbaZgadywana == randomNumber)
		{
			cout << "Brawo zgadles!";
			break;
		}
		else if (liczbaZgadywana > randomNumber)
		{
			cout << "Twoja liczba jest wieksza niz wylosowana. ";
		}
		else if (liczbaZgadywana < randomNumber) {
			cout << "Twoja liczba jest mniejsza niz wylosowana. ";
		}
	}
}

