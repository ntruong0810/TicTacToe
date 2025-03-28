//
// Created by Thu Nhan Truong on 3/17/25.
//

#ifndef TIC_TAC_TOE_CLASS_PLAYER_H
#define TIC_TAC_TOE_CLASS_PLAYER_H

struct Pair {
    int row, col;

};
class Player {
private:
    int _row, _col;
    char _mark, _winnerMark;

public:
    //Constructors
    Player();
    Player(int row, int col);
    Player(char mark);
    Player(Pair pair, char mark);

    //Setters
    void setRow(int row);
    void setCol(int col);
    void setMark(char mark);
    void setRowCol(Pair pair);
    void setWinnerMark(char mark);

    //Getters
    int getRow() const;
    int getCol() const;
    char getMark() const;
    Pair getRowCol() const;
    void resetPlayer();
    char getWinnerMark() const;

};


#endif //TIC_TAC_TOE_CLASS_PLAYER_H
