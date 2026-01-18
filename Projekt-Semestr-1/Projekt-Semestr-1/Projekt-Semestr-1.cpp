#include <iostream>
#include "x64/Debug/startGamesheader.h"


using namespace std;

// deklaracja funkcji komunikatu rozpoczecia gry
void startGameAnnouncement();

int main()
{   
    int gamePickerNumber = 0;

    while (gamePickerNumber != 1 && gamePickerNumber != 2 && gamePickerNumber != 3)
    {
        system("cls");
        startGameAnnouncement();
        cin >> gamePickerNumber;
    }

    switch (gamePickerNumber)
    {
    case 1: startGameTicTacToe(); 
        break;

    case 2: startGameBlackjack(); 
        break;

    case 3: startGameNumberGuess(); 
        break;

    default:
        break;
    }

}

// funkcja komunikatu rozpoczecia gry
void startGameAnnouncement() {
    cout << "Witam w centrum minigier" << endl;
    cout << "Mozesz wybrac spoza naszej selekcji 3 zaprogramowanych gier" << endl;
    cout << "1) TicTacToe \t 2) Blackjack \t 3) Number guess" << endl;
    cout << "\nWybierz numer oznaczajacy jedna z gier (1-3): ";
}
