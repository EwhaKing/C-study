#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	/*string word1 = "Game";
	string word2("Over");
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is: " << phrase << "\n\n";

	cout << "The phrase has " << phrase.size() << "characters in it. \n\n";

	cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position0.\n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size();++i)
	{
		cout << "Character at position " << i << "is:" << phrase[i] << endl;
	}
	cout << "\nThe sequence 'Over' begins at location ";
	cout << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos)
	{
		cout << "'eggplant' is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;
	
	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	if (phrase.empty())
	{
		cout << "\nThe phrase is no more.\n";
	}*/

	/*const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "Your items:\n";
	for (int i = 0; i < numItems;++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items: \n";
	for (int i = 0; i < numItems;++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}
	cout << "\nYour items: \n";
	for (int i = 0; i < numItems;++i)
	{
		cout << inventory[i] << endl;
	}*/

	/*const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'O','X','O'}, {' ','X','X'}, {'X','O','X'} };

	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS;++i)
	{
		for (int j = 0;j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}

		cout << endl;
	}

	cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	cout << "Now the tic-tac-toe board is: \n";
	for (int i = 0; i < ROWS;++i)
	{
		for (int j = 0;j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}

		cout << endl;
	}

	cout << "\n'X' wins!";*/
	
	enum fields { WORD, HINT, NUM_FIELDS };
	int score = 0, trytime = 0;
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall","Do you feel you're banging your head against something?"},
		{"glasses","These might help you see the answer."},
		{"labored","Going slowly, is it?"},
		{"persistent","Keep at it."},
		{"jumble","It's what the game is all about."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length;++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint\nBut it decreases score.\n";
	cout << "ENter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	score = 100 * theWord.size();

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			score -= 100;
		}
		else
		{
			cout << "Sorry, that's not it.";
		}
		trytime += 1;
		cout << "\n\nYour guess: ";
		cin >> guess;
	}
	if (guess == theWord)
	{
		score = score - trytime * 50;
		cout << "\nThat's it! You guessed it!\nYour score : " << score;
	}

	cout << "\nThanks for playing.\n";
	

	return 0;
}