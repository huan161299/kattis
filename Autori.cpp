#include <iostream>

using namespace std;

int main() {
	char input;

	input = getchar();
	printf("%c", input);

	while (input != '\n') {
		if (input == 45) {
			input = getchar();
			printf("%c", input);
		}
		input = getchar();
	}

	return 0;
}