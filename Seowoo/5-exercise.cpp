#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(void)
{
	vector<string> favoriteGames;
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	char choice;

	while (true) {
		cout << "1. list all game titles\n";
		cout << "2. add a game title\n";
		cout << "3. remove a game title\n";
		cout << "4. exit\n";
		cout << "enter your choice : ";
		cin >> choice;
		cout << "\n";

		switch (choice) {
		case '1': {
			if (favoriteGames.empty()) {
				cout << "Your favorite games list is empty.\n\n";
			}
			else {
				cout << "Your favorite games : \n";
				for (unsigned int i = 0; i < favoriteGames.size(); ++i)
				{
					cout << favoriteGames[i] << endl;
				}
			}
			break;
		}
		case '2': {
			string game;
			cout << "Enter the title of the game to add : ";
			cin >> game;
			favoriteGames.push_back(game);
			cout << game << " has been added.\n\n";
			break;
		}
		case '3': {
			if (favoriteGames.empty()) {
				cout << "Your favoirte games list is empty.\n\n";
			}
			else {
				string game;
				cout << "Enter the title of the game to remove : ";
				cin >> game;
				iter = find(favoriteGames.begin(), favoriteGames.end(), game);
				if (iter != favoriteGames.end())
				{
					favoriteGames.erase(iter);
					cout << game << " has been removed.\n\n";
				}
				else
				{
					cout << game << " not found.\n\n";
				}
			}
			break;
		}
		case '4': {
			cout << "Goodbye.\n";
			return 0;
		}
		default:
			cout << "Please enter a number between 1-4.\n\n";
		}

		cin.clear();

	}

	return 0;
}