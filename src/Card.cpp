#include "../include/Card.h"

Card::Card(Suit suit, Rank rank)
{
    this->suit = suit;
    this->rank = rank;
}

Suit Card::getSuit() const
{
    return suit;
}

Rank Card::getRank() const
{
    return rank;
}

int Card::getValue() const
{
    return static_cast<int>(rank);
}