//tic-tac-toe game
#include <iostream>
using namespace std;

// Function to display the current game board
void displayBoard(char board[3][3]) {
    cout << "\nCurrent Board:\n";
    cout << "------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}
//function for win
// Function to check if the current player has won
bool checkWin(char board[3][3], char player) {

    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player &&
            board[1][j] == player &&
            board[2][j] == player) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {
        return true;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player) {
        return true;
    }

    return false; // No win found
}
//for draw
// Function to check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // Empty space found, game not over
            }
        }
    }
    return true; // No empty spaces, it's a draw
}

int main() {
    char playAgain;

    do {
        // Initialize empty board
        char board[3][3] = {
            {' ', ' ', ' '},
            {' ', ' ', ' '},
            {' ', ' ', ' '}
        };

        char currentPlayer = 'X';
        bool gameOver = false;

        cout << "\n?? Welcome to Tic Tac Toe!";
        cout << "\nPlayer 1 = X, Player 2 = O\n";

        // Game loop
        while (!gameOver) {
            displayBoard(board);

            int row, col;
            cout << "\nPlayer " << currentPlayer << ", enter your move (row and column: 1 1): ";
            cin >> row >> col;

            // Convert to 0-based index
            row--;
            col--;

            // Validate move
            if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
                cout << "? Invalid move! Try again.\n";
                continue;
            }

            // Update board
            board[row][col] = currentPlayer;

            // Check for win
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "\n?? Player " << currentPlayer << " wins!\n";
                gameOver = true;
            }
            // Check for draw
            else if (checkDraw(board)) {
                displayBoard(board);
                cout << "\n?? It's a draw!\n";
                gameOver = true;
            }
            // Switch player
            else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

        // Ask if players want to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing Tic Tac Toe! ??\n";
    return 0;
}
