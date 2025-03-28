//
// Created by Thu Nhan Truong on 3/17/25.
//

#include "Controller.h"
#include "TicTacToe.h"

Controller::Controller() {}
void Controller::getPlayerInput(Player &player, const Board& board){
    int number;
    std::cin >> number;
    Pair p = convertToCoord(number, board);
    player.setRowCol(p);
}

void Controller::updateBoard(const Player &player, Board &board){
    Pair p = player.getRowCol();
    board.setBoard(p.row,p.col,player.getMark());
}

Pair Controller::convertToCoord(int number, const Board& board){
    int row = (number-1)/board.getRowSize();
    int col = (number-1)%board.getColSize();
    return {row,col};
}

const Player& Controller::choosePlayer(Player &_player1, Player &_player2){
    int player;
    char mark;

    do
    {
        std::cout << "Choose player? Enter 1 or 2: ";
        std::cin >> player;
    }
    while (player != 1 && player != 2);

    do
    {
        std::cout << "Choose your mark (X or O): ";
        std::cin >> mark;
        mark = toupper(mark);
    }
    while (mark != 'X' && mark != 'O');

    char other_mark;
    if(mark == 'X')
        other_mark = 'O';
    else
        other_mark = 'X';

    if(player == 1)
    {
        _player1.setMark(mark);
        _player2.setMark(other_mark);
        return _player1;
    }
    else{
        _player1.setMark(other_mark);
        _player2.setMark(mark);
        return _player2;
    }
}

const Player& Controller::switchPlayer(const Player &_player1, const Player &_player2, const Player &_currentPlayer){
    if(_currentPlayer.getMark() == _player1.getMark()) // check the mark of current player then switch to other
        return _player2;
    else
        return _player1;
}

std::string Controller::checkWin(const Board &board){
    int rowSize = board.getRowSize();
    int colSize = board.getColSize();

    // check rows
    for (int i = 0; i < rowSize; i++)
    {
        std::string mark = board.getMark(i,0);
        if((mark == "X" || mark == "O") && mark == board.getMark(i,1) && mark == board.getMark(i,2))
            return mark;
    }

    // check cols
    for (int i = 0; i < colSize; i++) {
        std::string mark = board.getMark(0, i);
        if ((mark == "X" || mark == "O") && mark == board.getMark(1, i) && mark == board.getMark(2, i))
            return mark;
    }
    // check diagonal
    std::string center = board.getMark(1, 1);
    if((center == "X" || center == "O") && board.getMark(0,0) == board.getMark(1,1) && board.getMark(1,1) == board.getMark(2,2))
        return center;

    if((center == "X" || center == "O") && board.getMark(0,2) == board.getMark(1,1) && board.getMark(1,1) == board.getMark(2,0))
        return center;

    return " ";
}

bool Controller::gameOver(const Board &board){
    if(checkWin(board) != " ")
        return true;

    // check tie
    for(int i = 0;i <board.getRowSize(); i++)
    {
        for(int j = 0;j <board.getColSize();j++)
        {
            if (isdigit(board.getMark(i, j).at(0)))
                return false;
        }
    }
    return true;
}

std::string Controller::getWinnerMark(const Board &board) {
    return checkWin(board);
}

std::string Controller::winner(const Player &_player1, const Player &_player2, const Board &board)
{
    std::string mark = getWinnerMark(board);
    if (mark == "X")
        return "\nPlayer X wins!";
    else if (mark == "O")
        return "\nPlayer O wins!";
    else
        return "\nIt's a tie!";

}