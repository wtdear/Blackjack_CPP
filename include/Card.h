#pragma once

using namespace std;

enum class Suit
{
    Hearts,
    Diamonds,
    Clubs,
    Spades
};

enum class Rank
{
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5,
    Six = 6,
    Seven = 7,
    Eight = 8,
    Nine = 9,
    Ten = 10,
    Jack = 10,
    Queen = 10,
    King = 10,
    Ace = 11
};

class Card
{
private:
    Suit suit;
    Rank rank;
public:
    Card(Suit suit, Rank rank);

    Suit getSuit() const;
    Rank getRank() const;
    int getValue() const;
};