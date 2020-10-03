#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	unsigned short a, b;
	a = 0;
	b = 0;

	char input;
	while ((input = getchar()) != '\n') {
		if (input == 65) {
			input = getchar();
			a += input - '0';
		}

		else if (input == 66) {
			input = getchar();
			b += input - '0';
		}

		if ((a >= 10) && (b >= 10)) {
			if (a - b >= 2) {
				cout << "A";
				return 0;
			}
			else if (b - a >= 2) {
				cout << "B";
				return 0;
			}
		}

		else if (a > 10) {
			cout << "A";
			return 0;
		}

		else if (b > 10) {
			cout << "B";
			return 0;
		}
	}

	return 0;
}