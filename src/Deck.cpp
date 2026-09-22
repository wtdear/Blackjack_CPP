void Deck::reset()
{
    cards.clear();

    for (int suit = 0; suit < 4; suit++)
    {
        for (int rank = 2; rank < 14; rank++)
        {
            Rank cardRank;

            if (rank == 11)
                cardRank = Rank::Jack;
            else if (rank == 12)
                cardRank == Rank::Queen;
            else if (rank == 13)
                cardRank == Rank::King;
            else if (rank == 14)
                cardRank == Rank::Ace;
            else
                cardRank = static_cast<Rank>(rank);

            cards.emplace_back(
                static_cast<Suit>(suit),
                cardRank
            );
        }
    }
}

Deck::shuffle()
{
    random_device rd;
    mt19937 generator(rd());

    shuffle(cards.begin(), cards.end(), generator);
}

Deck::dealCard()
{
    if (cards.empty())
    {
        throw runtime_error("The deck is empty.")
    }

    Card card = cards.back();
    cards.pop_back();

    return card;
}