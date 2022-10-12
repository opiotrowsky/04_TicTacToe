#pragma once
#include <iostream>

class TicTacToe {
    char tictactoe[3][3];
    int num = 1;
    bool game = true;
    char players[2];

public:
    TicTacToe() {}
    ~TicTacToe() {}

    void init();
    void Board();
    bool Game();
    bool getGame() { return game; }
};