#include "round.h"

using namespace std;

Round::Round() {
    player = Player::GetInstance();
    dealer = Dealer::GetInstance();
}

Round::Round(int b) {
    player = Player::GetInstance();
    dealer = Dealer::GetInstance();
    bid = b;
}

void Round::SetBid(int b) {
    bid = b;
}

int Round::GetBid() {
    return bid;
}

