# Tic Tac Toe (C++ Console Game)

A console-based Tic Tac Toe game written in C++! This project allows two players to take turns playing a classic 3x3 game of Tic Tac Toe. It’s built with a clean object-oriented design and includes full replay functionality.

## 🧠 About the Project

This game uses multiple classes to separate responsibilities clearly:

- **Player** – Stores information about each player (mark, position, etc.)
- **Board** – Handles the game grid, rendering, and internal state.
- **Controller** – Manages user input, switching turns, checking win conditions, and deciding the outcome.
- **TicTacToe** – Coordinates the entire game loop and handles replay logic.
- **main.cpp** – Entry point that starts the game.

## 🎮 How to Play

1. Compile the project (see instructions below).
2. Run the executable.
3. Choose which player you want to be (Player 1 or 2).
4. Choose your mark: **X** or **O**.
5. Enter a number (1-9) to pick a square on the board.
6. The game checks for a winner or a tie after every move.
7. When the game ends, you can choose to play again.

## 🛠️ Compilation Instructions

You can compile the project using any modern C++ compiler. Here's how to do it with `g++`:

```bash
g++ main.cpp TicTacToe.cpp Controller.cpp Board.cpp Player.cpp -o tictactoe
```

Then run it:

```bash
./tictactoe
```

Make sure all `.cpp` and corresponding `.h` files are in the same directory when compiling.

## 🗂️ File Overview

| File            | Description |
|-----------------|-------------|
| `main.cpp`      | Launches the game by creating a `TicTacToe` object and calling `run()` |
| `TicTacToe.cpp` | Runs the game loop and handles replay logic |
| `Controller.cpp`| Handles input, turn switching, win/tie checks, and game flow logic |
| `Board.cpp`     | Creates and updates the game board |
| `Player.cpp`    | Defines player attributes and provides utility functions |

## 💡 Features

- Dynamic player selection and mark assignment
- Input mapping from number keys to board coordinates
- Win and tie detection
- Board rendering with number placement
- Play-again loop

## 📌 Future Improvements

- Add error handling for invalid input
- Improve the board's visual appearance
- Add a simple AI mode for single-player

## ✍️ Author

Created by **Thu Nhan Truong**  
