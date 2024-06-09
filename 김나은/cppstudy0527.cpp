#include <iostream>
#include <string>

using namespace std;

/*void instructions();

int main() {

	instructions();
	return 0;
}

void instructions() {

	cout << "Welcome to the most fun you've ever had with text!\n\n";
	cout << "Here's how to play the game...\n";
}*/

/*char askYesNo1();
char askYesNo2(string question);

int main() {
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";

	char answer2 = askYesNo2("Do you wish to save your game?");
	cout << "Thanks for answering: " << answer2 << "\n";

	return 0;
}

char askYesNo1() {
	char response1;
	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> response1;
	} while (response1 != 'y' && response1 != 'n');

	return response1;
}

char askYesNo2(string question) {
	char response2;
	do {
		cout << question << "(y / n): ";
		cin >> response2;
	} while (response2 != 'y' && response2 != 'n');
	return response2;
}*/

/*void func();

int main() {
	int var = 5;
	cout << "In main() var is: " << var << "\n\n";

	func();

	cout << "Back in main() var is: " << var << "\n\n";
	
	{
		cout << "In main() in a new scope var is: " << var << "\n\n";

		cout << "Creating new var in new scope.\n";
		int var = 10;
		cout << "In main() in a new scope var is: " << var << "\n\n";
	}

	cout << "At end of main() var created in new scope no longer exists.\n";
	cout << "At end of main() var is: " << var << "\n";

	return 0;
}

void func() {
	int var = -5;
	cout << "In func() var is: " << var << "\n\n";
}*/

/*int glob = 10;

void access_global();
void hide_global();
void change_global();

int main() {
	cout << "In main() glob is: " << glob << "\n\n";
	access_global();

	hide_global();
	cout << "In main() glob is: " << glob << "\n\n";

	change_global();
	cout << "In main() glob is: " << glob << "\n\n";

	return 0;
}

void access_global() {
	cout << "In access_global() glob is: " << glob << "\n\n";
}

void hide_global() {
	int glob = 0;
	cout << "In hide_global() glob is: " << glob << "\n\n";
}

void change_global() {
	glob = -10;
	cout << "In change_global() glob is: " << glob << "\n\n";
}*/

/*int askNumber(int high, int low = 1);

int main() {
	int number = askNumber(5);
	cout << "Thanks for entering: " << number << "\n\n";

	number = askNumber(10, 5);
	cout << "Thanks for entering: " << number << "\n\n";

	return 0;
}

int askNumber(int high, int low) {
	int num;
	do {
		cout << "Please enter a number" << "(" << low << "-" << high << "): ";
		cin >> num;
	} while (num > high || num < low);

	return num;
}*/

/*int triple(int number);
string triple(string text);

int main() {
	cout << "Tripling 5: " << triple(5) << "\n\n";
	cout << "Tripling 'gamer': " << triple("gamer");
	
	return 0;
}

int triple(int number) {
	return (number * 3);
}

string triple(string text) {
	return (text + text + text);
}*/

/*int radiation(int health);

int main() {
	int health = 80;
	cout << "Your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	return 0;
}

inline int radiation(int health) {
	return (health / 2);
}*/

/*string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main() {
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new stroy.\n";

	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

string askText(string prompt) {
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb) {
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life - long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The normal of the story? Be careful what you ";
	cout << verb;
	cout << " for.";
}*/