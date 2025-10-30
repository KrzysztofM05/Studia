#include <iostream>

using namespace std;

int main()
{
    char wybor;
    cout << "Wybierz figure (t - trojkat, k - kwadrat): ";
    cin >> wybor;

	switch (wybor)
	{
	case 't':
		double a, b, c;
		cout << "Podaj dlugosc bokow trojkata"<<endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;

		if (a>0 and b>0 and c>0 and a+b>=c and a + c >= b and c + b >= a)
		{
			double p = (a + b + c) / 2;
			cout << "Pole trojkata: " << sqrt(p * (p - a) * (p - b) * (p - c))<<endl;
			cout << "Obwod trojkata: " << p*2;
		}
		else {
			cout << "Podano zle liczby";
		}
		break;

	case 'k':
		double a;
		cout
	default:
		break;
	}

}

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int sumaCyfr(int n) {
	int suma = 0 ;
	int len = to_string(n).length();
	for (int i = 0; i <= len; i++)
	{
		suma += n % 10;
		n = n / 10;
	}
	return suma;
}

int main()
{
	cout<<sumaCyfr(1487);
}


////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>

#include "funkcje.h"


using namespace std;

//int nwd(int a, int b) {
//	int reszta=1;
//	while (reszta != 0) {
//		reszta = a % b;
//		a = b;
//		b = reszta;
//	}
//	return a;
//}

int main()
{
	cout << nwd(748, 32);
}



////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool czyPierwsza(int n) {
	if (n<=1)
	{
		return false;
	}
	for (int i = 2; i < n/2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (czyPierwsza(i))
		{
			cout << i << " ";
		}
	}
	
}

