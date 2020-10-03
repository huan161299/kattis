#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	string text, decrypt;
	cin >> text >> decrypt;

	int count = 0;

	for (auto itr = decrypt.rbegin(); itr != decrypt.rend(); ++itr) {
		char temp = (int)*itr - (int)text.at(n - 1) + 97;
		if (temp < 97) temp += 26;
		text = temp + text;
		++count;
		if ((count + n) == m) break;
	}

	cout << text;


	return 0;
}