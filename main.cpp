#include "TicTacToe.h"

int main() {
    TicTacToe game;
    int playerMove;
    std::cout << "\nHello Player! Welcome to this little TicTacToe game!\n";
    std::cout << "          You're X and you start the game.\n";
    std::cout << "         Choose a number to make your move.\n";
    while(game.getIsOver() == false) {
        game.showGrid();
        std::cin >> playerMove;
        game.setPlayerMove(playerMove);
        game.insertPlayerMove();
    }
}