#include <iostream>
#include <cmath>


using namespace std;

double bisekcja(double(*fun)(double x), double e, double a, double b) {
    double m = 0;
	while (abs(b - a) >= 2 * e) {
        m = (a + b) / 2;
        if (fun(m)==0)
        {
            return m;
        }
        if (fun(a) * fun(m) < 0)
        {
            b = m;
        }
        else
        {
            a = m;
        }
    }
    return m;
}

double fun1(double x){
    return pow(x, 2)-9;
}

double fun2(double x) {
    return sin(x);
}

double fun3(double x) {
    return pow(x, 3) + 6 * pow(x,2) - 144 * x + 256;
}


int main()
{
    cout << bisekcja(fun1, 0.001, 0, 5);
}

