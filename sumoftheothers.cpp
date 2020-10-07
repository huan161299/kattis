#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	while (getline(cin, s)) {
		istringstream input(s);
		int n, sum = 0;

		while (input >> n) sum += n;

		cout << sum / 2 << '\n';
	}

	return 0;
}