#include "dealer.h"
#include "user.h"
#include "deck.h"

using namespace std;

Dealer* Dealer::GetInstance() {
    if (instancePtr == nullptr)
        instancePtr = new Dealer;
    return instancePtr;
}

Dealer::~Dealer() {

}

void Dealer::Hit(Deck* deck) {
    hand.push_back(deck->cards.top());
    deck->cards.pop();
}

void Dealer::Stand() {

}

