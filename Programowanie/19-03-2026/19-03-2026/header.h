#pragma once;

class Klasa1
{
public:
	int x;
	int* px;

	Klasa1(int val);
	
	void wyswietl();
};

class Klasa2
{
public:
	int x;
	int* px;

	Klasa2(int val);
	Klasa2(Klasa2& other);
	void wyswietl();
};