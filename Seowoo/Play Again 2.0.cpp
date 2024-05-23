//Play Again 2.0
//do loops

#include <iostream>
using namespace std;

int main(void)
{
	char again;
	do
	{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you wnat to play again? (y/n):";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye.";

	return 0;
}