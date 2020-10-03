#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char input[501];
	char key[501];
	int inputLent = 0;
	int keyLent = 0;

	input[inputLent] = getchar();
	while (input[inputLent] != '\n') {
		++inputLent;
		input[inputLent] = getchar();
	}
	input[inputLent] = 0;

	key[keyLent] = getchar();
	while (key[keyLent] != '\n') {
		++keyLent;
		key[keyLent] = getchar();
	}
	key[keyLent] = 0;

	int pos = -1;

	while (++pos < keyLent && pos < inputLent) {
		input[pos] -= key[pos] - 65;
		if (input[pos] < 65) input[pos] += 26;
	}

	--pos;
	if (pos < inputLent)
		while (++pos < inputLent) {
			input[pos] -= input[pos-keyLent] - 65;
			if (input[pos] < 65) input[pos] += 26;
		}

	cout << input;

	return 0;
}

