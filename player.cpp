#include "player.h"
#include "deck.h"

using namespace std;

Player* Player::GetInstance() {
    if (instancePtr == NULL) //nullptr ??
        instancePtr = new Player;
    return instancePtr;
}

Player::~Player() {
    //delete instancePtr;
    //delete or not??
}

int Player::GetBalance() {
    return balance;
}

void Player::Hit(Deck* deck) {
    hand.push_back(deck->cards->top());
    deck->cards->pop();
}