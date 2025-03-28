cmake_minimum_required(VERSION 3.28)
project(TIC_TAC_TOE_CLASS)

set(CMAKE_CXX_STANDARD 17)

add_executable(TIC_TAC_TOE_CLASS main.cpp
        Board.cpp
        Board.h
        Player.cpp
        Player.h
        Controller.cpp
        Controller.h
        TicTacToe.cpp
        TicTacToe.h)
