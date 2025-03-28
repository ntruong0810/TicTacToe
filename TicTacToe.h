//
// Created by Thu Nhan Truong on 3/20/25.
//

#ifndef TIC_TAC_TOE_CLASS_TICTACTOE_H
#define TIC_TAC_TOE_CLASS_TICTACTOE_H
#include "Board.h"
#include "Player.h"
#include "Controller.h"

class TicTacToe {
private:
    Board _board;
    Player _player1, _player2, _currentPlayer;
    Controller _controller;
    void gameLogic();
public:
    void run();
    const Player& getCurrentPlayer() const;
};


#endif //TIC_TAC_TOE_CLASS_TICTACTOE_H
