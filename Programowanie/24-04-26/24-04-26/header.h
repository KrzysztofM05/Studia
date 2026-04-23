#pragma once
#include <iostream>
#include <string>
using namespace std;

class Punkt
{
protected:
	int x, y;
	string nazwa;

public:
	Punkt();
	Punkt(int x, int y, string nazwa);
	~Punkt();
};

class Kolo : public Punkt
{
public:
	Kolo();
	Kolo(int r, int x, int y, string nazwa);
	~Kolo();

protected:
	int r;
};

class Kwadrat : public Punkt
{
public:
	Kwadrat();
	Kwadrat(int a, int x, int y, string nazwa);
	~Kwadrat();

protected:
	int a;
};

class Walec : public Kolo
{
public:
	Walec();
	Walec(int h, int r, int x, int y, string nazwa);
	~Walec();

protected:
	int h;
};

class Prostopadloscian : public Kwadrat
{
public:
	Prostopadloscian();
	Prostopadloscian(int h, int a,int x, int y, string nazwa);
	~Prostopadloscian();

protected:
	int h;
};

