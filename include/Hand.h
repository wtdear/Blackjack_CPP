#pragma once

#include "Card.h"
#include <string>

using namespace std;

class Hand
{
private:
    vector<Card> cards;
public:
    void addCard(Card card);
    bool isBlackjack();
    void clear();
    bool isOver();
    int calculateTotal();
};