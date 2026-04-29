#pragma once
#include <iostream>
#include <string>
using namespace std;

class Obiekt
{
public:
	virtual double pole() = 0;

	virtual ~Obiekt()
	{
		cout << "Wirtualny destruktor" << endl;
	}
};

class Kolo : public Obiekt
{
protected:
	double r;

public:
	Kolo(double promien);

	double pole() override;

	virtual ~Kolo();
};

class Kwadrat : public Obiekt
{
protected:
	double a;

public:
	Kwadrat(double bok) : a(bok) {}

	double pole() override {
		cout << "pole kwadratu wynosi: " << a * a << endl;
	}

	virtual ~Kwadrat()
	{
		cout << "Destruktor Kwadrat" << endl;
	}
};

class Walec : public Kolo
{
	double h;

public:
	Walec(double promien, double wysokosc) : Kolo(promien), h(wysokosc) {}

	double pole() override {
		cout << "pole walca wynosi: " << 2 * 3.14 * r * (r + h) << endl;
	}

	virtual ~Walec()
	{
		cout << "Destruktor Walec" << endl;
	}
};

class Szescian : public Kwadrat
{
public:
	Szescian(double bok) : Kwadrat(bok) {}

	double pole() override {
		cout << "pole szescianu wynosi: " << 6 * a * a << endl;
	}

	virtual ~Szescian()
	{
		cout << "Destruktor Szescian" << endl;
	}
};