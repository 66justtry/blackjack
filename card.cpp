#include <string>
#include "card.h"
#include "deck.h"

using namespace std;

Card::Card(string path, int value) {
    this->path = path;
    this->value = value;
}