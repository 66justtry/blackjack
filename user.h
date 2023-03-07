#include <string>
#include <vector>
#include "card.h"

using namespace std;

class User {
protected:
    vector<Card> hand;
public:
    virtual void Hit() = 0; //take a card
    virtual void Stand() = 0; //don't take a card
    int GetSum();
};