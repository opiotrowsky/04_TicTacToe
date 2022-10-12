#include "TicTacToe.h"

int main() {
    std::cout << "  --++##|   T I C - T A C - T O E   |##++--  \n";
    std::cout << "         Player 1: X  |  Player 2: O         \n";

    TicTacToe game;
    game.init();
    while(game.getGame()) {
        game.Game();
    }

    std::cout << "\n";
}