#pragma once
#include "player.h"
#include "dealer.h"

using namespace std;

class Round {
private:
    int bid;
public:
    Player* player;
    Dealer* dealer;
    Round();
    Round(int);
    void SetBid(int);
    int GetBid();
};

