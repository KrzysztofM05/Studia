#include <iostream>
#include <stdexcept>
#include "header.h"

using namespace std;

double dzielenie(double a, double b)
{
    if (b == 0)
    {
        throw std::runtime_error("Blad: Nie mozna dzielic przez zero!");
    }

    return a / b;
}

int modulo(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("Blad: Nie mozna wykonac modulo przez zero!");
    }

    if (a == b)
    {
        throw std::runtime_error("Blad: Liczby sa rowne!");
    }

    if (a % b == 0 || b % a == 0)
    {
        throw std::runtime_error("Blad: Liczby sa swoimi wielokrotnosciami!");
    }

    return a % b;
}