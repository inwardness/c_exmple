#include <stdio.h>
#include <stdlib.h>

// Function to display the chessboard
void displayBoard(char board[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to initialize the chessboard
void initializeBoard(char board[8][8]) {
    char pieces[] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};
    for (int i = 0; i < 8; i++) {
        board[0][i] = pieces[i];
        board[1][i] = 'P';
        board[6][i] = 'p';
        board[7][i] = pieces[i] + 32;  // Lowercase for black pieces
    }
}

// Function to validate a chess move
int isValidMove(int startRow, int startCol, int endRow, int endCol, char board[8][8]) {
    // Basic validation: within board bounds
    if (startRow < 0 || startRow > 7 || startCol < 0 || startCol > 7 ||
        endRow < 0 || endRow > 7 || endCol < 0 || endCol > 7) {
        return 0;
    }

    // TODO: Add more advanced move validation based on chess rules
    return 1;
}

int main() {
    char chessboard[8][8];

    // Initialize and display the chessboard
    initializeBoard(chessboard);
    displayBoard(chessboard);

    // Example: Move a pawn
    int startRow = 1, startCol = 0;
    int endRow = 3, endCol = 0;

    // Validate the move
    if (isValidMove(startRow, startCol, endRow, endCol, chessboard)) {
        // Perform the move
        chessboard[endRow][endCol] = chessboard[startRow][startCol];
        chessboard[startRow][startCol] = ' ';

        // Display the updated board
        printf("\nAfter Move:\n");
        displayBoard(chessboard);
    } else {
        printf("\nInvalid Move!\n");
    }

    return 0;
}