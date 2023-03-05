#include "TicTacToe.h"

void TicTacToe::showGrid() {
    std::cout << "\n" << " " << grid[0] << " | " << grid[1] << " | " << grid[2];        // 0 | 1 | 2
    std::cout << "\n---|---|---";                                                       //---|---|---
    std::cout << "\n" << " " << grid[3] << " | " << grid[4] << " | " << grid[5];        // 3 | 4 | 5
    std::cout << "\n---|---|---";                                                       //---|---|---
    std::cout << "\n" << " " << grid[6] << " | " << grid[7] << " | " << grid[8] << "\n\n";// 6 | 7 | 8
}