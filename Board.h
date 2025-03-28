//
// Created by Thu Nhan Truong on 3/17/25.
//

#ifndef TIC_TAC_TOE_CLASS_BOARD_H
#define TIC_TAC_TOE_CLASS_BOARD_H

#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>

class Board {
private:
    std::vector<std::vector<std::string>> _board;
    int getMaxNumber() const;
    static int getNumberOfDigits(int number);

public:
    Board();

    Board(int row, int col);

    //Setters
    void setBoard(int row, int col, char mark);

    //Getters
    std::string getMark(int row, int col) const;
    int getNum (int row, int col) const;
    std::string toString() const;

    int getRowSize() const;
    int getColSize() const;

    void reset();
};
#endif //TIC_TAC_TOE_CLASS_BOARD_H
