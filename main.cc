#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>
#include <random>
#include "card.h"
#include "deck.h"
#include "game.h"
using namespace std;

int main(int argc, char *argv[])
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    if (argc > 1)
    {
        try
        {
            seed = std::stoi(std::string{argv[1]});
        }
        catch (std::invalid_argument &e)
        {
            std::cerr << e.what() << std::endl;
            return 1;
        }
        catch (std::out_of_range &e)
        {
            std::cerr << e.what() << std::endl;
            return 2;
        }
    }

    Game{seed};

    return 0;
}
