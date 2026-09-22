#pragma once

#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>
#include <stdexcept>

using namespace std;

class Deck
{
private:
    vector<Card> cards;
public:
    void shuffle();
    Card dealCard();
    void reset();
};