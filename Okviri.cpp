#include <iostream>
#include <string>

using namespace std;

int main() {
	char inputChar[15];

	unsigned short pos = 0;
	char character = getchar();
	while (character != '\n') {
		inputChar[pos] = character;
		++pos;
		character = getchar();
	}

	string first = "";
	string second = "";
	string third = "";

	for (unsigned short i = 0; i < pos; ++i) {
		if ((i + 1) % 3 == 0) character = '*';
		else character = '#';

		first += "..";
		first += character;
		first += '.';
 	}

	first += '.';

	for (unsigned short i = 0; i < pos; ++i) {
		if ((i + 1) % 3 == 0) character = '*';
		else character = '#';

		second += '.';
		second += character;
		second += '.';
		second += character;

	}

	second += '.';

	character = '#';

	third += character;

	for (unsigned short i = 0; i < pos; ++i) {
		if ((i + 1) % 3 == 0) {
			character = '*';
			third.replace(third.length() - 1, 1, "*");
		}
		else character = '#';

		third += '.';
		third += inputChar[i];
		third += '.';
		third += character;
	}


	cout << first << '\n' << second << '\n' << third << '\n' << second << '\n' << first;

	return 0;
}