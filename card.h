#pragma once
#include <string>


using namespace std;

class Card {
private:
    string path;
    int value;
    friend class Deck;
public:
    int GetValue();
    Card(string, int);
};

