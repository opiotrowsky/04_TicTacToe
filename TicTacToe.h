#pragma once
#include <vector>
#include <string>
#include <iostream>

//Potrzebuję metod do:
//  + wyświetlania siatki
//  # wstawiania ruchu gracza w odpowiednie pole
//  # generowania ruchu przeciwnika
//  # sprawdzania czy koniec gry

//Potrzebne pola:
//  + vector pól siatki
//  + int ruchu gracza
//  + bool isOver

class TicTacToe {
    std::vector<char> _grid{'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int _playerMove;
    bool isOver = false;

public:
    TicTacToe() {}
    ~TicTacToe() {}

    void showGrid();
    std::vector<char> insertPlayerMove();
    
    // setter
    int setPlayerMove(int playerMove) { return _playerMove = playerMove; }
    
    // getter
    bool getIsOver() { return isOver; }
};