#ifndef CARD_H
#define CARD_H
#include <string>
#include "deck.h"

using namespace std;

class Card {
private:
    string path;
    int value;
    Card(string, int);
    friend class Deck;
public:
    int GetValue();
};

#endif // CARD_H
