//Guess My Number
//The classic number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber;
    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Pick a number between 1 and 100: ";
    cin >> secretNumber;

    int guess;
    int tries = 0;

    cout << "\n\nComputer's turn to guess!\n";

    do {
        guess = rand() % 100 + 1;
        cout << "Computer's guess: " << guess << endl;
        ++tries;

        if (guess > secretNumber) {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Too low!\n\n";
        }
        else {
            cout << "\nComputer guessed it! It took " << tries << " guesses!\n";
        }
    }while(guess != secretNumber);
    return 0;
}