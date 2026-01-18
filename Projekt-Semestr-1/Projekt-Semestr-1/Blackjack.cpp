#include <iostream>
#include "x64/Debug/startGamesheader.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//  Klasa kart w talii kart
class CardClass
{
    public:
        string cardNumber;
        int cardValue;
        string cardSuitSymbol;
        bool isDrawn;
};


//  tablica wszystkich typow kart
string cardNumberTable[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

//  tablica wszystkich wartosci kart (A = 1)
int cardValueTable[] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

//  tablica symboli kart S = ♠  C = ♣   H = ♥   D = ♦
string cardSuitSymbolTable[] = { "S", "C", "H", "D"};

//  tablica wszystkich kart
CardClass deckOfCards[52];

//  suma punktow dobranych kart
int cardValueSumm = 0;

//  liczba dobranych kart
int numberOfCardsDrawn = 0;

//  tablica dobranych kart
vector<CardClass> drawnCards;


void createNewDeck();
void drawCard();
void displayCard(CardClass pickedCard);

//  funkcja zaczynajaca gre
void startGameBlackjack() {
    createNewDeck();
 
    bool ifDrawNewCard = true;
    while (ifDrawNewCard == true)
    {
        drawCard();        
        if (cardValueSumm > 21)
        {
            cout << "BUST! Niestety ale suma punktow jest wieksza niz 21, PORAZKA!";
            break;
        }
        else if (cardValueSumm == 21) {
            cout << "BEST! Zdobyles idealnie 21 puktow, GRATUJACJE!";
            break;
        }
        cout << "Czy chcesz dobrac nowa karte? (1-tak, 0-nie): ";
        cin >> ifDrawNewCard;
    }

}

//  funkcja tworzaca nowa talie kart z tablic
void createNewDeck() {
    int currentNumberOfCards = 0;

    for (string suit : cardSuitSymbolTable)
    {
        for (string number : cardNumberTable)
        {
            deckOfCards[currentNumberOfCards].cardNumber = number;
            int index = distance(cardNumberTable, find(cardNumberTable, cardNumberTable + 13, number));

            deckOfCards[currentNumberOfCards].cardValue = cardValueTable[index];
            deckOfCards[currentNumberOfCards].cardSuitSymbol = suit;
            deckOfCards[currentNumberOfCards].isDrawn = false;

            currentNumberOfCards++;
        }
    }
    return;
}   

//  funkcja do pobierania karty z talii
void drawCard(){
    srand(time(0));
    int randomNum = rand() % 53;
    while (deckOfCards[randomNum].isDrawn == true)
    {
        randomNum = rand() % 53;
    }
    deckOfCards[randomNum].isDrawn == true;
    CardClass newCard = deckOfCards[randomNum];
    displayCard(newCard);
    cardValueSumm += newCard.cardValue;
    cout << "Suma punktow: " << cardValueSumm << endl;
}

//  funkcja wyswietlajaca karte w ASCI z pliku i zamieniajaca odpowiednie elementy 
void displayCard(CardClass pickedCard) {

    drawnCards.push_back(pickedCard);
    numberOfCardsDrawn++;

    int row = 1;
    int col = 1;

    system("cls");
    for (CardClass pickedCard : drawnCards)
    {
        cout << "\033[" << row << ";" << col << "H";
        fstream  cardDisplayFile("cardDisplayFile.txt");
        string line = "";
        while (!cardDisplayFile.eof())
        {
            getline(cardDisplayFile, line);
            for (int i = 1; i < 6; i++)
            {
                if (line[i] == '@') {
                    line[i] = pickedCard.cardNumber[0];
                    break;
                }
                if (line[i] == '$') {
                    line[i] = pickedCard.cardSuitSymbol[0];
                    break;
                }
            }
            cout << "\033[" << row << ";" << col << "H";
            cout << line << endl;
            row++;
        } 
        row = 1;
        col += 9;
       
        cardDisplayFile.close();
    }
}