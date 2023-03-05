#include "TicTacToe.h"

int main() {
    TicTacToe game;
    int playerMove;
    std::cout << "\nHello Player! Welcome to this little TicTacToe game!\n";
    std::cout << "          You're X and you start the game.\n";
    std::cout << "         Choose a number to make your move.\n";
    game.showGrid();
    std::cin >> playerMove;
}