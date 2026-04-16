#pragma once

class Bazowa
{
public:
	int wart1 = 1;
protected:
	int wart2 = 2;
private:
	int wart3 = 3;
};

class Pochodna : protected Bazowa
{
private:
	void funkcja1();
};

class PochodnaPochodnej : public Pochodna
{
public:
	void funkcja2();
};