#include "TicTacToe.h"

void TicTacToe::init() {
    for(int i = 0; i <= 2; ++i) {
        for(int j = 0; j <= 2; ++j) {
            tictactoe[i][j] = num + 48;
            num++;
        }
    }
    players[0] = '1';
    players[1] = 'X';
}

void TicTacToe::Board() {
    std::cout << "\n";
    std::cout << "                  " << tictactoe[0][0] << " | " << tictactoe[0][1] << " | " << tictactoe[0][2] << "\n";
    std::cout << "                 –––––––––––\n";
    std::cout << "                  " << tictactoe[1][0] << " | " << tictactoe[1][1] << " | " << tictactoe[1][2] << "\n";
    std::cout << "                 –––––––––––\n";
    std::cout << "                  " << tictactoe[2][0] << " | " << tictactoe[2][1] << " | " << tictactoe[2][2] << "\n";
    std::cout << "\n";
}

bool TicTacToe::Game() {
    Board();

    std::cout << "Player " << players[0] << ", choose your field [1-9]: ";
    std::cin >> num;
    switch(num) {
        case '1': tictactoe[0][0] = players[1]; break;
        case '2': tictactoe[0][1] = players[1]; break;
        case '3': tictactoe[0][2] = players[1]; break;
        case '4': tictactoe[1][0] = players[1]; break;
        case '5': tictactoe[1][1] = players[1]; break;
        case '6': tictactoe[1][2] = players[1]; break;
        case '7': tictactoe[2][0] = players[1]; break;
        case '8': tictactoe[2][1] = players[1]; break;
        case '9': tictactoe[2][2] = players[1]; break;
    }
    Board();

    for(int i = 0; i <= 2; ++i) {
        if(tictactoe[i][0] == tictactoe[i][1] and tictactoe[i][0] == tictactoe[i][2]) {
            game = false;
        }
        if(tictactoe[0][i] == tictactoe[1][i] and tictactoe[0][i] == tictactoe[2][i]) {
            game = false;
        }
    }
    if(!game) {
        std::cout << "Congratulations Player " << players[0] << "! You win!\n";
        return game;
    }
    if(players[0] == '1') {
        players[0] = '2';
        players[1] = 'O';
    }
    if(players[0] == '2') {
        players[0] = '1';
        players[1] = 'X';
    }

    return game;
}