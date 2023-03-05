#pragma once
#include <vector>
#include <string>
#include <iostream>

//Potrzebuję metod do:
//  + wyświetlania siatki
//  # wstawiania ruchu gracza w odpowiednie pole
//  # generowania ruchu przeciwnika
//  # aktualizowania siatki
//  # sprawdzania czy koniec gry

//Potrzebne pola:
//  + vector pól siatki
//  + int ruchu gracza

class TicTacToe {
    std::vector<int> grid{0, 1, 2, 3, 4, 5, 6, 7, 8};
    int playerMove;

public:
    TicTacToe() {}
    ~TicTacToe() {}

    void showGrid();
};