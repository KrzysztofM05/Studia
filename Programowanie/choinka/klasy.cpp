#include <iostream>
#include <stdexcept>
#include "header.h"

using namespace std;

void Choinka::draw(int num, int space){
	for (int j = 0; j < space; j++)
	{
		cout << " ";
	}
	for (int i = 0; i < num; i++)
	{
		cout << "*";
	}
}

Choinka::Choinka(int s) :size(s) {
	int stars = 1;
	int space = s + (4*(s/2))+1;
	int spaceStart = space;
	for (int i = 0; i < s; i++)
	{
		draw(stars, space);
		stars += 2;
		space -= 1;
		cout << endl;
	}

	for (int k = 0; k < 2; k++)
	{
		stars = stars - 4;
		space = space + 2;

		for (int j = 0; j < s + 2; j++)
		{
			draw(stars, space);
			stars += 2;
			space -= 1;
			cout << endl;
		}
	}

	for (int l = 0; l < 4; l++)
	{
		draw(1, spaceStart);
		cout << endl;
	}

}

