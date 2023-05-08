#ifndef HAND_H_
#define HAND_H_
#include "card.h"
#include <vector>
#include <iostream>

class Hand
{
    std::vector<Card> hand;

public:
    Hand(std::vector<Card> hand);
    // adds a card to the hand
    void addCard(Card c);
    // adds a card to the front of the hand
    void addToFront(Card c);
    // removes a card from the hand
    void removeCard(Card c);
    // empties the hand
    void makeEmpty();
    // returns the size of the hand
    int getSize();
    // checks if a card is in the hand
    bool isInHand(Card c);
    // prints the hand
    void printHand();
    // gets the card at the last index in the hand
    Card getMostRecent();
    // gets the card at the first index in the hand
    Card getFront();
};

#endif
