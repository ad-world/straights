#ifndef DECK_H_
#define DECK_H_
#include "card.h"
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

class Deck
{
    std::vector<Card> deck;

public:
    Deck();
    void shuffleDeck(int seed);
    void printDeck();
    Card getCard(int index);
};

#endif
