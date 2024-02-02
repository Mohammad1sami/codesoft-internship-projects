#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(time(0)); //seed for random number
    int actualnumber = rand() % 100 + 1; //This fuction will generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;
    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;
        if (guess > actualnumber) {
            cout << "Try a lesser number." << endl;
        } else if (guess < actualnumber) {
            cout << "try a greater number." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly in " << attempts << " attempts." << endl;
        }
    } while (guess != actualnumber);
    return 0;
}