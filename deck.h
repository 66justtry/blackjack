#ifndef DECK_H
#define DECK_H
#define CARD_NAME_COUNT 13
#define CARD_SUIT_COUNT 4
#include <string>
#include "card.h"
#include <stack>
#include <memory>

using namespace std;



class Deck {
private:
    string path; //to do: default path
public:
    Deck();
    unique_ptr<stack<Card>> cards;
    void SetPath(string);
};



#endif