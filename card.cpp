#include <string>
#include "card.h"

using namespace std;

Card::Card(string path, int value) {
    this->path = path;
    this->value = value;
}

int Card::GetValue() {
    return value;
}
