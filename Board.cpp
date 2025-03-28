//
// Created by Thu Nhan Truong on 3/17/25.
//

#include "Board.h"
Board::Board()
//    :Board(3,3)
{
    // default 3x3
    std::vector<std::vector<std::string>> temp(3,std::vector<std::string>(3,""));
    _board = temp;
}
Board::Board(int row, int col)
//    :_board(row,std::vector<char>(col,''))
{
    std::vector<std::vector<std::string>> temp(row,std::vector<std::string>(col,""));
    _board = temp;
    reset();
}

//Setters
void Board::setBoard(int row, int col, char mark){
    _board.at(row).at(col) = mark;
}

//Getters
std::string Board::getMark(int row, int col) const{
    return _board.at(row).at(col);
}

std::string Board::toString() const {
    std::stringstream sout;
    int dashNumber = getNumberOfDigits(getMaxNumber());
    int row = 0;

    for(auto &v : _board)
    {
        int col = 0;
        std::string dashes;
        for(auto &s : v )
        {
            sout << std::setw(dashNumber + getNumberOfDigits(getMaxNumber())) << s << std::setw(dashNumber + getNumberOfDigits(getMaxNumber()));
            if(col++ < v.size()-1)
                sout << "|";
            dashes += std::string (dashNumber + getNumberOfDigits(getMaxNumber())*2, '-') + "+";
        }
        dashes.pop_back();
        if(row++ < _board.size()-1)
            sout << "\n" << dashes << "\n";
    }

    std::string result = sout.str();
    return result;
}

int Board::getMaxNumber() const
{
//    std::cout << "board size: \n" << _board. size() << "\n";
//    std::cout << "board : \n" << _board.at(0).size() << "\n";
//    std::cout << "ans : \n" << _board.size() * _board.at(0).size() << "\n";
    return _board.size() * _board.at(0).size() ;
}

int Board::getNumberOfDigits(int number){
    int count = 0;
    while(number > 0)
    {
        number /= 10;
        count ++;
    }
//    std::cout << count;
    return count;
}

int Board::getRowSize() const{
    return _board.at(0).size();
}
int Board::getColSize() const{
    return _board.size();
}

void Board::reset() {
    int count = 1;
    for(int i = 0; i < _board.size(); i++)
    {
        for(int j = 0; j < _board.at(0).size(); j++)
        {
            _board.at(i).at(j) = std::to_string(count++);
        }
    }
}
