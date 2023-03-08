#include "TicTacToe.h"

void TicTacToe::showGrid() {
    std::cout << "\n" << " " << _grid.at(0) << " | " << _grid.at(1) << " | " << _grid.at(2);        // 0 | 1 | 2
    std::cout << "\n---|---|---";                                                       //---|---|---
    std::cout << "\n" << " " << _grid.at(3) << " | " << _grid.at(4) << " | " << _grid.at(5);        // 3 | 4 | 5
    std::cout << "\n---|---|---";                                                       //---|---|---
    std::cout << "\n" << " " << _grid.at(6) << " | " << _grid.at(7) << " | " << _grid.at(8) << "\n\n";// 6 | 7 | 8
}

std::vector<char> TicTacToe::insertPlayerMove() {
    
    if(_grid.at(_playerMove) == 'X' or _grid.at(_playerMove) == 'O') {
        std::cout << "This spot is already taken, choose another one.\n";
    }
    if(_grid.at(_playerMove) >= '1' and _grid.at(_playerMove) <= '9') {
        _grid.at(_playerMove) = 'X';
    }
}