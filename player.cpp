#include "player.h"
#include "deck.h"

using namespace std;

Player* Player::GetInstance() {
    if (instancePtr == nullptr) //nullptr ??
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
    hand.push_back(deck->cards.top());
    deck->cards.pop();
}

void Player::Stand() {

}

void Player::SetBalance() {
    balance = 10;
    //to do: get balance from file
}

