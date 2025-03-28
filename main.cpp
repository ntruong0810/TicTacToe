#include <iostream>
#include "Board.h"
#include "Controller.h"
#include "TicTacToe.h"

int main() {
//    Board b(3,3);
//    Controller controller;
//    Player player1('X');
//
//    do
//    {
//        std::cout << b.toString() << "\n";
//        std::cout << "Select a space: ";
//        controller.getPlayerInput(player1, b);
//        controller.updateBoard(player1,b);
//    }
//    while (true);

    TicTacToe tic_tac_toe;
    tic_tac_toe.run();

    return 0;
}