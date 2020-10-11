#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	srand(time(0));

	char door[3] = { 'A', 'B', 'C' };

	int n = 1000;


	while (n--) {
		char myChoice;
		char mySecondChoice;
		char doorPick;
		int bottle;

		myChoice = door[rand() % 3];
		cout << myChoice << '\n';
		cout.flush();

		cin >> doorPick >> bottle;

		if (bottle >= 1) mySecondChoice = doorPick;
		else do { mySecondChoice = door[rand() % 3]; } while (mySecondChoice == doorPick || mySecondChoice == myChoice);

		cout << mySecondChoice << '\n';
		cout.flush();

		cin >> bottle >> doorPick;
	}

	return 0;
}