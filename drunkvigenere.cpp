#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char text[201], key[201];
	unsigned lent = 0;
	
	text[lent] = getchar();

	while (text[lent] != '\n') {
		++lent;
		text[lent] = getchar();
	}

	text[lent] = 0;

	for (unsigned i = 0; i < lent; ++i) {
		key[i] = getchar();
	}

	key[lent] = 0;

	unsigned pos = -1;


	while (++pos < lent) {
		if (pos & 1) {
			text[pos] += key[pos] - 65;
			if (text[pos] > 90) text[pos] -= 26;
		}

		else {
			text[pos] -= key[pos] - 65;
			if (text[pos] < 65) text[pos] += 26;
		}
	}

	cout << text;

	return 0;
}