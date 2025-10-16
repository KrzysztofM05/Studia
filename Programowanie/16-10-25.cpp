#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    cout << "************************************************"<<endl;
    if (a == 0 and b==0 and c==0) {
        cout << "brak";
    }

    if(a==1)
    {
        cout << "Funkcja kwadratowa: f(x) = ";
        cout << "x^2";
    }
    else if (a != 0) {
        cout << "Funkcja kwadratowa: f(x) = ";
        cout << a << "x^2";
    }
    
    if (a != 0 and b != 0) {
        if (b == 1 ) {
            cout << " + x";
        }
        else if(b>0)
        {
            cout << " + " << b << "x";
        }
        else
        {
            cout << b << "x";
        }
    }
    else if(b!=0)
    {
        cout << "Funkcja liniowa: f(x) = ";
        if (b == 1) {
            cout << "x";
        }
        else
        {
            cout << b << "x";
        }
    }

    

    cout <<endl<< "************************************************"<<endl;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta == 0) {
        cout << "Funkcja posiada jedno miejsce zerowe: x = " << (- b - sqrt(delta)) / 2 * a;
    }
    else if (delta>0)
    {
        cout << "Funkcja posiada dwa miejsca zerowe: x1 = " << (-b - sqrt(delta)) / 2 * a << " x2 = "<< (-b + sqrt(delta)) / 2 * a;
    }
    else
    {
        cout << "brak miejsc zerowych";
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, n;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj n: ";
	cin >> n;

	double zamiana = (b - a) / n;

	for (int i = 0; i <= n; i++) {
		cout << a + i * zamiana<<" ";
	}

}
