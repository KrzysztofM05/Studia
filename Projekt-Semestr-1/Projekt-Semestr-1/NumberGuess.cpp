#include <iostream>
#include "x64/Debug/startGamesheader.h"

using namespace std;


// Start game Number guess function
void startGameNumberGuess() {
    system("cls");
    int difficulty;
    cout << "1 - LATWY(0-10)    2 - SREDNI (0-25)   3 - TRUDNY (0-50)"<<endl;
    cout << "Wybierz poziom trudnosci (masz 5-15 szans na zgadywanie w zaleznosci od poziomu trudnosci): ";
    cin >> difficulty;

    int numberToGuess;
    int numberOfGuesses;
    srand(time(0));

    switch (difficulty)
    {
    case 1:
        numberToGuess = rand() % 10;
        numberOfGuesses = 5;
        break;
    case 2:
        numberToGuess = rand() % 25;
        numberOfGuesses = 10;
        break;
    case 3:
        numberToGuess = rand() % 50;
        numberOfGuesses = 15;
        break;
    default:
        break;
    }

    system("cls");
    int numberGuessed;

    for (int i = 1; i <= numberOfGuesses; i++)
    {
        cout << "Proba " << i << ": ";
        cin >> numberGuessed;
       

        if (numberGuessed == numberToGuess)
        {
            cout << "CONGRATS! Udalo Ci sie zgadnac liczbe " << numberToGuess << ", w " << i << " prob, BRAWO!";
            break;
        }
        else if (numberGuessed>numberToGuess)
        {
            cout << "Liczba o ktorej mysle jest mniejsza niz: "<<numberGuessed<<endl;
        }
        else if (numberGuessed<numberToGuess)
        {
            cout << "Liczba o ktorej mysle jest wieksza niz: "<<numberGuessed<<endl;
        }
    }
}