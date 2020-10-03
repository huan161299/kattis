#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while (--n >= 0) {
		string mess;
		cin >> mess;
		int messLen = mess.length();

		int astersicks = (int)sqrt(messLen);
		if (astersicks * astersicks < messLen) ++astersicks;

		int column = messLen / astersicks;
		if (messLen % astersicks != 0) ++column;
		

		for (int i = 0; i < column; ++i) {
			int row = i;
			while (row + column < messLen) row += column;

			while (row >= i) {
				cout << mess[row];
				row -= column;
			}
		}

		cout << '\n';
	}

	return 0;
}