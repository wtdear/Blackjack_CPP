#include "../include/Hand.h"

void Hand::addCard(Card card)
{
    cards.push_back(card);
}

int Hand::calculateTotal()
{
    int total = 0;
    int aces = 0;

    for (const Card& card : cardsd)
    {
        total += card.getValue();

        if (card.getRank() == Rank::Ace)
        {
            aces++;
        }
    }

    while (total > 21 && aces > 0)
    {
        total -= 10;
        aces--;
    }

    return total;
}

bool Hand::isBlackjack()
{
    if (cards.size() == 2 && calculateTotal() == 21)
    {
        return true;
    }

    return false;
}

void Hand::clear()
{
    cards.clear();
}

bool Hand::isOver()
{
    return calculateTotal() > 21;
}