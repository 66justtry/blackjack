#pragma once
#include "user.h"
#include <vector>
#include "card.h"
#include "deck.h"

using namespace std;

class Dealer : public User {
private:
    static Dealer* instancePtr;
    Dealer() {}
public:
    Dealer(const Dealer&) = delete;
    ~Dealer();
    static Dealer* GetInstance();
    void Hit(Deck*);
    void Stand();
};



