#pragma once
#include <iostream>
#include <string>

using namespace std;

class Przeciaz
{
public:
	Przeciaz(double aVal = 0, double bVal = 0);

	void show() {
		cout << "a = " << a << ",  b = " << b << endl;
	};

	Przeciaz operator-() const;

	Przeciaz operator+(const Przeciaz& other) const;

	friend Przeciaz operator++(Przeciaz& c);

	friend bool operator==(const Przeciaz& aVal, const Przeciaz& bVal);

private:
	double a,b;
};


