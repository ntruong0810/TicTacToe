//
// Created by Thu Nhan Truong on 3/20/25.
//

#include "TicTacToe.h"


void TicTacToe::run(){

    char goAgain;

    // play again
    do
    {
        _board.reset();
        _player1.resetPlayer();
        _player2.resetPlayer();
        _currentPlayer.resetPlayer();
        gameLogic();
        std::cout << "\nDo you want to go again?(y/n)\n";
        std::cin >> goAgain;
    }
    while(std::tolower(goAgain) == 'y');
}

void TicTacToe::gameLogic(){
        // choose who goes first
        _currentPlayer = _controller.choosePlayer(_player1, _player2);
        // choose the mark for each player
        do
        {
            // Draw the board
            std::cout << _board.toString();
            std::cout << "\n";
            // tell the current player to choose a spot

            std::cout << _currentPlayer.getMark() << " Choose a spot: ";
            _controller.getPlayerInput(_currentPlayer, _board);
            // update the board with player data
            _controller.updateBoard(_currentPlayer,_board);
            // check game over
            // switch player
            if(!_controller.gameOver(_board)){
                _currentPlayer = _controller.switchPlayer(_player1, _player2, _currentPlayer);
            }

            // loop end
        }
        while(!_controller.gameOver(_board));

        std::cout << _board.toString();
        // check who win
        std::cout << _controller.winner(_player1, _player2, _board);
        // print result
}

const Player& TicTacToe::getCurrentPlayer() const {
    return _currentPlayer;
}