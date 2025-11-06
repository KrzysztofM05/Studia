#include <iostream>
#include <string>

using namespace std;

void odwroc(char tekst[]) {
	int len = 0;
	while (tekst[len] != 0) {
		len++;
	}

	for (int i = len; i >= 0; i--) {
		cout << tekst[i];
	}
}

int main()
{
	char tekst[1024];
	cout << "Wprowadz tekst: ";
	cin.getline(tekst,1024);
	odwroc(tekst);
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>


using namespace std;

int zliczLiteryA(char tekst[]) {
	int numOfA = 0;
	int len = 0;
	while (tekst[len] != 0) {
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		if (tekst[i] == 'a' or tekst[i] == 'A') {
			numOfA++;
		}
	}
	return numOfA;
}

int main()
{
	char tekst[1024];
	cout << "Wprowadz tekst: ";
	cin.getline(tekst, 1024);
	cout<<"Ilosc a: "<<zliczLiteryA(tekst);
}


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int zliczZnak(char tekst[], char znak) {
	int numOfA = 0;
	int len = 0;
	while (tekst[len] != 0) {
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		if (tekst[i] == znak) {
			numOfA++;
		}
	}
	return numOfA;
}



void statystykaTekstu(char tekst[]) {
	
	int len = 0;
	int liczba = 1;
	while (tekst[len] != 0) {
		len++;
	}
	sort(tekst, tekst + len);
	for (int i = 2; i < len; i++)
	{
		if (tekst[i] == tekst[i + 1] ) {
			liczba++;
		}
		else
		{
			cout << tekst[i] << " = " << liczba << endl;
			liczba = 1;
		}
	}


}

int main()
{
	char tekst[1024],znak;
	cout << "Wprowadz tekst: ";
	cin.getline(tekst, 1024);
	//cout << "Podaj znak: ";
	//cin >> znak;
	//cout << "Ilosc " << znak << ": " << zliczZnak(tekst, znak) << endl;
	statystykaTekstu(tekst);
}
