// Hangman
// The classic game of hangman
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int main() {
    //setup
    const int MAX_WRONG = 8;

    vector<string> words; // collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";

    cout << "Welcome to Hangman. Good Luck!\n";

    //main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is :\n" << soFar << endl;

    char guess;
    cout << "\n\nEnter your guess: ";
    cin >> guess;
    guess = toupper(guess);
    while (used.find(guess) != string::npos) {
        cout << "\nYou've already guessed "<< guess << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess);
    }

    used += guess;

    if (THE_WORD.find(guess) != string::npos) {
        cout << "That's right! " << guess << " is in the word.\n";

        //update soFar to include newly guessed letter
        for (int i=0; i < THE_WORD.length(); ++i) {
            if (THE_WORD[i] == guess) {
                soFar[i] = guess;
            }
        }
    }
    else {
        cout << "Sorry, " << guess << " isn't in the word.\n";
        ++wrong;
    }
    }
    //shut down
    if (wrong == MAX_WRONG) {
        cout << "\nYou've been hanged!";
    }
    else {
        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
    
}
