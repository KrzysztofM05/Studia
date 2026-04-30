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
	double r = 0;

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
	Kwadrat(double bok);

	double pole() override;

	virtual ~Kwadrat();

};

class Walec : public Kolo
{
	double h;

public:
	Walec(double promien, double wysokosc);

	double pole() override;

	virtual ~Walec();

};

class Szescian : public Kwadrat
{
public:
	Szescian(double bok);

	double pole() override;

	virtual ~Szescian();

};