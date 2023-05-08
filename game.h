#ifndef GAME_H_
#define GAME_H_
#include "hand.h"
#include "deck.h"
#include "player.h"
#include <iostream>
#include <vector>
#include <string>

class Game
{
    int current_player;
    int num_players;
    int seed;
    int lowest_score;
    Hand diamonds;
    Hand clubs;
    Hand hearts;
    Hand spades;
    Deck deck;
    int scores[4];
    int total[4];
    std::vector<Player> players;

public:
    Game(int seed);
    // starts the game
    void startGame();
    // invites players
    void handleStartInput();
    // deals cards to players
    void dealCards();
    // finds player with 7S
    void getStartingPlayer();
    // starts a round
    void startRound();
    // lets a player take a turn
    void takeTurn();
    // prints cards that have been played
    void printTable();
    // resets round scores and deals new cards
    void printScoresAndReset();
    // announces the winner of the game
    void announceWinner();
    // finds the lowest score
    void calcLowestScore();
    // checks if the round is over
    bool roundOver();
};

#endif
