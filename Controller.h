//
// Created by Thu Nhan Truong on 3/17/25.
//

#ifndef TIC_TAC_TOE_CLASS_CONTROLLER_H
#define TIC_TAC_TOE_CLASS_CONTROLLER_H

#include "Player.h"
#include "Board.h"


#include <iostream>

class Controller {
private:
    static Pair convertToCoord(int number, const Board &board);
public:
    Controller();
    void getPlayerInput(Player &player, const Board &board);
    void updateBoard(const Player &player, Board &board);

    //TODO: Ask who want to go first and return the correct player
    //TODO: Ask player to choose a mark
    const Player& choosePlayer(Player &_player1,Player &_player2);

    //TODO: if last player was 1, return 2 and vice versa
    const Player &switchPlayer(const Player &_player1, const Player &_player2, const Player &_currentPlayer);

    // function to getWinner mark
    //TODO: check if there is a winner or if all spaces in the board has been marked, otherwise return false
    std::string checkWin(const Board &board);
    bool gameOver(const Board &board);
    // get Winner mark
    std::string getWinnerMark(const Board &board);

    //TODO: return a string containing X wins or O wins or it's a tie
    std::string winner(const Player &_player1, const Player &_player2, const Board &board);


};



#endif //TIC_TAC_TOE_CLASS_CONTROLLER_H
