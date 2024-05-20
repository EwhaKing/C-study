//game over

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	/*cout << "Game Over!" << endl;//endline std=½ºÅÄ´Ùµå*/

	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "alienKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "bonus: " << bonus << endl;

	_getch();
	return 0;
}