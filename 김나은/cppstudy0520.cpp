#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

/*int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << "items. \n";
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i) {
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items: \n";
	for (unsigned int i = 0; i < inventory.size(); ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";
	
	cout << "\nYour shield is destroyed in a fierce battle.";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nYou were robbed of all of your possessions by a thief.";
	inventory.clear();
	if (inventory.empty()) {
		cout << "\nYou have nothing.\n";
	}
	else
	{
		cout << "\nYou have at least one item.\n";
	}
	return 0;
}*/

/*int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nYou trade your sword  for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}
}*/

/*int main() {
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nFinding a score.";
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end()) {
		cout << "Score found.\n";
	}
	else {
		cout << "Score not found.\n";
	}

	cout << "\nRandomizing scores.";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}


	return 0;
}*/

/*int main() {
	//setup
	const int MAX_WRONG = 8;

	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";

	cout << "Welcome to Hangman. Good luck!\n";

	while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the folllowing letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;
		char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);
		while (used.find(guess) != string::npos)
		{
			cout << "\nYou've already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}

		used += guess;

		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "\nThat's right! " << guess << " is in the word.\n";

			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess) {
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
	}

	if (wrong == MAX_WRONG) {
		cout << "\nYou've been hanged!";
	}
	else
	{
		cout << "\nYou guessed it!";
	}

	cout << "\nThe word was " << THE_WORD << endl;

	return 0;
}*/

//exercise 1
int main() {
	vector<string> games;

	games.push_back("Mabinogi");
	games.push_back("Zombie highschool");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your games:\n";
	for (iter = games.begin(); iter != games.end(); ++iter) {
		cout << *iter << endl;
	}
	int input = 0;
	cout << "\nIf you want to erase game, enter 1. \n Or you want to add game, enter 2.\n If you want to end this program, enter anything but not 1, 2\n";
	cin >> input;

	string deletegame;
	string addgame;

	if (input == 1) {
		cout << "You chose 1. What game do you want to erase? ";
		cin >> deletegame;
		iter = find(games.begin(), games.end(), deletegame);
		if (iter != games.end()) {
			games.erase(iter);
		}

		cout << "\nYour games : \n";
		for (iter = games.begin(); iter != games.end(); ++iter) {
			cout << *iter << endl;
		}
	}
	else if (input == 2) {
		cout << "You chose 2. What game do you want to add? ";
		cin >> addgame;
		games.insert(games.begin(), addgame);
		cout << "\nYour games:\n";
		for (iter = games.begin(); iter != games.end(); ++iter) {
			cout << *iter << endl;
		}
	}
	else {
		cout << "Okay. I will end this program.\n";

	}
	return 0;
}