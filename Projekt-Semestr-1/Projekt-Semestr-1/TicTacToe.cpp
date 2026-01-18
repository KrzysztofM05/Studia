#include <iostream>
#include "x64/Debug/startGamesheader.h"
#include <stack>
#include <iomanip>

using namespace std;

//	Plansza gry		0 - puste	 1 - gracz 1	5 - gracz 2
char gameBoard[5][5] = {{0,179,0,179,0},
						{196,197,196,197,196},
						{0,179,0,179,0},
						{196,197,196,197,196},
						{0,179,0,179,0} };

//	Dostepne miejsca na planszy  0 - puste  1 - gracz 1  2 - gracz 2
int gameBoardSpaces[] = {0,0,0, 0,0,0, 0,0,0};

int roundCounter;

//	Gracz 1 = X		Gracz 2 = O
char currentPlayerMarker = 'X';
int spacePickerNumber = 0;

void displayGameBoard();
void playerPickSpace();
bool gameBoardCheck();
int playerPickSpaceSubfun(char currentPlayerMarker);

//	funkcja zaczynajaca gre
void startGameTicTacToe() {
	system("cls");
	cout << "TicTacToe"<<endl;
	displayGameBoard();

	for (roundCounter = 0; roundCounter < 9; roundCounter++)
	{
		if (roundCounter % 2 == 0)
		{
			currentPlayerMarker = 'X';
		}
		else {
			currentPlayerMarker = 'O';
		}
		playerPickSpace();
		displayGameBoard();

		if (roundCounter >= 4)
		{
			if (gameBoardCheck())
			{
				cout << "Player " << currentPlayerMarker << " WINS!";
				break;
			}
		}
	}

	cout << "Niestety ale nie ma zwyciescy";
}

//	funkcja wyswietlajaca plansze gry 
void displayGameBoard() {
	system("cls");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (gameBoard[i][j] == 0)
			{
				cout << " ";
			}
			else if (gameBoard[i][j] == 1) {
				cout << "X";
			}
			else if (gameBoard[i][j] == 5) {
				cout << "O";
			}
			cout << gameBoard[i][j];
			if (i % 2 == 0) {
				cout << " ";
			}
			else
			{
				cout << char(196);
			}
		}
		cout << endl;
	}
}

// funkcja pomocnicza dla playerPickerSpace()
int playerPickSpaceSubfun(char currentPlayerMarker) {
	if (currentPlayerMarker == 'X')
	{
		return 1;
	}
	else
	{
		return 5;
	}
	return 0;
}

//	funkcja pozwalajaca graczom wybrac pole na planszy
void playerPickSpace() {

	cout << "Pick an empty space (1-9): ";
	while (spacePickerNumber == 0 || gameBoardSpaces[spacePickerNumber-1] != 0)
	{
		cin >> spacePickerNumber;
	}

	switch (spacePickerNumber)
	{
	case 1:
		gameBoard[0][0] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 2:
		gameBoard[0][2] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 3:
		gameBoard[0][4] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 4:
		gameBoard[2][0] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 5:
		gameBoard[2][2] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 6:
		gameBoard[2][4] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 7:
		gameBoard[4][0] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 8:
		gameBoard[4][2] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	case 9:
		gameBoard[4][4] = playerPickSpaceSubfun(currentPlayerMarker);
		gameBoardSpaces[spacePickerNumber - 1] = playerPickSpaceSubfun(currentPlayerMarker);
		break;
	default:
		break;
	}

}

//	funkcja sprawdzajaca czy gra zakonczyla sie wygrana danego gracza
bool gameBoardCheck() {

	for (int i = 0; i < 5; i+=2)
	{
		if (gameBoard[i][0] + gameBoard[i][2] + gameBoard[i][4] == 3){
			return true;
		}
		else if(gameBoard[i][0] + gameBoard[i][2] + gameBoard[i][4] == 15) {
			return true;
		}
	}
	for (int j = 0; j < 5; j+=2)
	{
		if (gameBoard[0][j] + gameBoard[2][j] + gameBoard[4][j] == 3) {
			return true;
		}
		else if (gameBoard[0][j] + gameBoard[2][j] + gameBoard[4][j] == 15) {
			return true;
		}
	}
	if (gameBoard[0][0] + gameBoard[2][2] + gameBoard[4][4] == 3) {
		return true;
	}
	else if (gameBoard[0][0] + gameBoard[2][2] + gameBoard[4][4] == 15) {
		return true;
	}
	if (gameBoard[0][4] + gameBoard[2][2] + gameBoard[4][0] == 3) {
		return true;
	}
	else if (gameBoard[0][4] + gameBoard[2][2] + gameBoard[4][0] == 15) {
		return true;
	}

	return false;
}