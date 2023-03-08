#include <vector>
#include "user.h"
#include "card.h"
#include "deck.h"

using namespace std;

class Player : public User {
private:
    int balance;
    static Player* instancePtr;
    Player() {}
public:
    Player(const Player&) = delete;
    ~Player();
    static Player* GetInstance();
    void Hit(Deck*);
    void Stand(); //add code or remove from user class
    int GetBalance();
};