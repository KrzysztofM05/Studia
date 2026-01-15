/////////////////////  zad 1  ///////////////////////
#include <iostream>
#include <iomanip>

using namespace std;

double fun1(double x) {
    return x;
}

double fun2(double x) {
    return -5 * pow(x, 2) + 5;
}

void tablicaWartosci(double (*fun)(double), double a, double b, int m, int n)
{
    double x = a;
    double change = (abs(a) + abs(b)) / (m * n - 1);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<setprecision(2)<<fixed<<fun(x)<<" ";
            x += change;
        }
        cout << endl;
    }
}

int main()
{
    tablicaWartosci(fun1,-1,1,3,3);
    cout << "\n\n";
    tablicaWartosci(fun2, -1, 1, 3, 3);
}


/////////////////////  zad 2  ///////////////////////
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	fstream plik1("tekst.txt");
	plik1 << "Hello Wordl\n";
	plik1 << "this is test line 1\n";
	plik1 << "this is test line Z\n";
	plik1 << "this is test line 3\n";
	plik1 << "this is test line A";

	string linia;
	while (!plik1.eof()) {
		getline(plik1, linia);
		for (char znak : linia) {
			if (znak )
			{

			}
		}
	}

	plik1.close();
}




/////////////////////  zad 3  ///////////////////////
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

struct Pudelko
{
	double szer;
	double wys;
	double dl;

	double oliczObjetosc() {
		return szer * dl * wys;
	}
	void wypiszInfo() {
		cout << "Szerokosc = " << szer << endl;
		cout << "Wysokosc = " << wys << endl;
		cout << "Dlugosc = " << dl << endl;
	}
};

struct PudelkaDoWysylki
{
	vector<Pudelko> collection;

	int licznik_pudelek = 0;

	void dodajPudelko(Pudelko pudelko) {
		collection.push_back(pudelko);
		licznik_pudelek++;
	}
	void wyswietlDuze() {
		for (Pudelko pudlo : collection)
		{
			if (pudlo.szer >= 0.2 && pudlo.wys >= 0.2 && pudlo.dl >= 0.2) {
				pudlo.wypiszInfo();
				cout << endl;
			}
		}
	}
};

int main()
{
	Pudelko pudlo1;
	pudlo1.szer = 1;
	pudlo1.wys = 1;
	pudlo1.dl = 1;

	Pudelko pudlo2;
	pudlo2.szer = 2;
	pudlo2.wys = 4;
	pudlo2.dl = 6;

	Pudelko pudlo3;
	pudlo3.szer = 5;
	pudlo3.wys = 2;
	pudlo3.dl = 0.1;

	PudelkaDoWysylki magazyn;

	magazyn.dodajPudelko(pudlo1);
	magazyn.dodajPudelko(pudlo2);
	magazyn.dodajPudelko(pudlo3);

	magazyn.wyswietlDuze();
}

