#include <string>
#include "deck.h"
#include "card.h"
#include <stack>
#include <time.h>
#include <tuple>

using namespace std;

string CardName[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

int CardValue[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

string CardSuit[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

Deck::Deck() {
    cards = make_unique<stack<Card>>();
    tuple<string, int> temp[CARD_NAME_COUNT * CARD_SUIT_COUNT];
    /*string paths[CARD_NAME_COUNT * CARD_SUIT_COUNT];
    for (int i = 0; i < CARD_NAME_COUNT; i++) {
        for (int j = 0; j < CARD_SUIT_COUNT; j++) {
            paths[i * j + j] = CardName[i] + CardSuit[j];
        }
    }*/
    for (int i = 0; i < CARD_NAME_COUNT; i++) {
        for (int j = 0; j < CARD_SUIT_COUNT; j++) {
            temp[i * j + j] = {CardName[i] + CardSuit[j], CardValue[i]};
        }
    }
    //generating a deck
    for (int i = CARD_NAME_COUNT * CARD_SUIT_COUNT - 1; i >= 0; i--) {
        int pos = rand() % (i + 1);
        cards->push(Card(get<0>(temp[pos]), get<1>(temp[pos])));
        temp[pos].swap(temp[i]);
    }
}

void Deck::SetPath(string s) {
    path = s;
}