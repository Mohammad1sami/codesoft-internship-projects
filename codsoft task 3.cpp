//welcome to tik tak toe game 
//It is a two player game in the players asked to put X and O on the board
//The player whose character(X,O) comes in straight line wins!!
#include <iostream>
#include <cstdlib> 
using namespace std;

char element[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board() {
    system("cls");
    cout << "\n\nTic Tac Toe Game \n\n";
    cout << "Player 1(x) - player 2(O)" << endl << endl;
    cout << endl;
    cout << "     |     |     \n";
    cout << "   " << element[1] << " |  " << element[2] << "  | " << element[3] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "   " << element[4] << " |  " << element[5] << "  | " << element[6] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "   " << element[7] << " |  " << element[8] << "  | " << element[9] << "\n";  
    cout << "     |     |     \n"; 
}

bool isGameOver() {
    
    if ((element[1] == element[2] && element[2] == element[3]) ||
        (element[4] == element[5] && element[5] == element[6]) ||
        (element[7] == element[8] && element[8] == element[9]) ||
        (element[1] == element[4] && element[4] == element[7]) ||
        (element[2] == element[5] && element[5] == element[8]) ||
        (element[3] == element[6] && element[6] == element[9]) ||
        (element[1] == element[5] && element[5] == element[9]) ||
        (element[3] == element[5] && element[5] == element[7])) {
        return true;
    }
    return false;
}

bool isValidMove(int move) {
    if (move < 1 || move > 9) return false;
    return (element[move] != 'X' && element[move] != 'O');
}

void makeMove(int move, char player) {
    element[move] = player;
}

int main() {
    char currentPlayer = 'X';
    bool gameover = false;
    int move;

    while (!gameover) {
        board();
        cout << "Player " << currentPlayer << ", please enter your move (1-9): ";
        cin >> move;

        if (isValidMove(move)) {
            makeMove(move, currentPlayer);
            if (isGameOver()) {
                board();
                cout << "congratulations Player " << currentPlayer << " wins the game.\n";
                gameover = true;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move. Please try again.\n";
        }
    }

    return 0;
}
