#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> favoriteGames;

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. List all game titles\n";
        cout << "2. Add a game title\n";
        cout << "3. Remove a game title\n";
        cout << "4. Quit\n";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            if (favoriteGames.empty()) {
                cout << "No game titles available.\n";
            }
            else {
                cout << "Your favorite game titles:\n";
                for (const string& game : favoriteGames) {
                    cout << game << endl;
                }
            }
            break;
        case 2: {
            cout << "Enter the name of the game to add: ";
            string newGame;
            cin >> newGame;
            favoriteGames.push_back(newGame);
            break;
        }
        case 3: {
            if (favoriteGames.empty()) {
                cout << "No game titles to remove.\n";
            }
            else {
                cout << "Enter the name of the game to remove: ";
                string gameToRemove;
                cin >> gameToRemove;
                auto it = find(favoriteGames.begin(), favoriteGames.end(), gameToRemove);
                if (it != favoriteGames.end()) {
                    favoriteGames.erase(it);
                }
                else {
                    cout << "Game title not found.\n";
                }
            }
            break;
        }
        case 4:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}
