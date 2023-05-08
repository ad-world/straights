#ifndef PLAYER_H_
#define PLAYER_H_
#include "card.h"
#include "hand.h"
#include <vector>
#include <iostream>

class Player
{
protected:
    Hand cards;
    Hand discards;
    Hand legal_moves;
    int player_number;
    char type; // 'h' is human, 'c' is computer

public:
    Player(int player_number, char type);
    // returns the type of the player
    char getType();
    // resets the hands
    void newRound();
    // rage quits
    void rageQuit();
    // plays a card on the table
    void playCard(Card card, Hand &diamonds, Hand &spades, Hand &clubs, Hand &hearts);
    // calculates the legal moves
    void legalMoves(Hand &diamonds, Hand &spades, Hand &clubs, Hand &hearts);
    // prints the legal moves and hands
    void printCards();
    // prints the discards
    void printDiscards();
    // deals a card to the hand
    void dealCard(Card c);
    // discards a card
    void discardCard(Card c);
    // returns the size of the legal moves vector
    int legalMovesSize();
    // returns the size of the hand
    int handSize();
    // checks if the card exists in the hand
    bool hasCard(Card c);
    // checks if the card played is a legal play
    bool checkLegalMove(Card c);
    // returns the first possible legal move
    Card getFirstLegalMove();
    // returns the first card in the hand
    Card getFirstCard();
};

#endif
