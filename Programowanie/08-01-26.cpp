#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool polacz(string plikA, string plikB, string wynik) {
	ifstream plikAcheck(plikA);
	ifstream plikBcheck(plikB);
	ofstream plikWynik(wynik);
	string line;
	if (plikAcheck.good())
	{
		if (plikBcheck.good())
		{
			while (!plikAcheck.eof()){
				getline(plikAcheck, line);
				plikWynik << line;
			}
			while (!plikBcheck.eof()) {
				getline(plikBcheck, line);
				plikWynik << line;
			}
		}
		else
		{
			cout << "problem z plikiem B";
			plikAcheck.close();
			plikBcheck.close();
			return false;
		}
	}
	else
	{
		cout << "problem z plikiem A";
		plikAcheck.close();
		plikBcheck.close();
		return false;
	}
	plikAcheck.close();
	plikBcheck.close();
	return true;
}

int main()
{
	polacz("plikA.txt", "plikB.txt", "plikWynik.txt");
}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double f(double x) {
	return x * x;
}

void zapiszFun(double (*f)(double x), double a, double b, int n, string nazwaPliku) {
	ofstream plikZapiszFun(nazwaPliku);
	if (plikZapiszFun.good())
	{
		for (int i = 0; i <= n; i++)
		{
			plikZapiszFun << (a / b) * i << " " << f((a / b) * i) << endl;
		}
	}
	else {
		cout << "problem z plikiem";
	}
	plikZapiszFun.close();
}

void odczytFun(string nazwaPliku) {
	ofstream plikOdczytFun(nazwaPliku);
	int size = 0;
	while (!plikOdczytFun.eof()) {
		size++;
	}

	double* arg = new double[size];
	double* var = new double;

	plikOdczytFun.close();
	ofstream plikOdczytFun(nazwaPliku);

	string line;
	int size2 = size;
	while (!plikOdczytFun.eof()) {
		if (size==0)
		{
			return;
		}
		getline(plikOdczytFun, line);
		int pos = line.find(" ");
		arg[size2-size] = line.substr(0, pos);
		var[size2-size] = line.substr(pos);
		size--;
	}
	plikOdczytFun.close();
}

int main()
{
	zapiszFun(f,1, 10, 10, "plikZad2.txt");
}

