#include "header.h"

using namespace std;

Przeciaz::Przeciaz(double aVal, double bVal) : a(aVal), b(bVal) {}


Przeciaz Przeciaz::operator-() const {
	return Przeciaz(-a, -b);
}

Przeciaz Przeciaz::operator+(const Przeciaz& other) const
{
	return Przeciaz(a + other.a, b + other.b);
}


Przeciaz operator++(Przeciaz& c) {
	c.a++;
	c.b++;

	return c;
}

bool operator==(const Przeciaz& aVal, const Przeciaz& bVal) {
	return (aVal.a == bVal.a && aVal.b == bVal.b);
}