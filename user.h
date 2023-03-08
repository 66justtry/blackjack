#pragma once
#include <string>
#include <vector>
#include "deck.h"
#include "card.h"

using namespace std;

class User {
protected:
    vector<Card> hand;
public:
    virtual void Hit(Deck*) = 0; //take a card
    virtual void Stand() = 0; //don't take a card
    int GetSum();
};

