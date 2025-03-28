//
// Created by Thu Nhan Truong on 3/17/25.
//

#include "Player.h"

// Constructors
Player::Player()
    :Player({0,0},'\0')
{}

Player::Player(char mark)
    :Player({0,0},mark)
{}

Player::Player(Pair pair, char mark)
    :_row(pair.row),_col(pair.col),_mark(mark)
{}

// Setters
void Player::setRow(int row)
{
    _row = row;
}
void Player::setCol(int col){
    _col = col;
}
void Player::setMark(char mark){
    _mark = mark;
}
void Player::setRowCol(Pair pair){
    _row = pair.row;
    _col = pair.col;
}

// Getters
int Player::getRow() const{
    return _row;
}
int Player::getCol() const{
    return _col;
}
char Player::getMark() const{
    return _mark;
}
Pair Player::getRowCol() const{
    return {_row, _col};
}

void Player::setWinnerMark(char mark){
    _winnerMark = mark;
}

char Player::getWinnerMark() const{
    return _winnerMark;
}

void Player::resetPlayer(){
    _row = 0;
    _col = 0;
    _mark = ' ';
    _winnerMark = ' ';
}