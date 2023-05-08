#ifndef CARD_H_
#define CARD_H_
#include <string>

class Card
{
    char suit;
    char rank;

public:
    Card(char rank, char suit);
    Card(std::string card);
    // returns the suit
    char getSuit();
    // returns the rank
    char getRank();
    // prints a card
    void printCard();
    // returns the point value of a card
    int getCardValue();
    // returns the card of the next rank
    Card nextRank();
    // returns the card of the prev rank
    Card prevRank();
    // card equality
    bool operator==(const Card &other);
    // returns the card as a string
    std::string getCard();
};

#endif
