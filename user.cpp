#include <vector>
#include "user.h"


using namespace std;

int User::GetSum() {
    if (hand.size() == 0)
            return 0;
    int aces = 0;
    int sum = 0;
    int temp;
    for (int i = 0; i < hand.size(); i++) {
        temp = hand.at(i).GetValue();
        if (temp == 11)
            aces++;
        sum += temp;
    }
    for (int i = 0; i < aces; i++) {
        if (sum > 21)
            sum -= 10;
        else
            break;
    }
    return sum;
}

