#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//number of cases
	unsigned inputCase;
	cin >> inputCase;

	while (inputCase--) {
		int n;
		cin >> n;

		map<string, int> attr;

		for (int i = 0; i < n; ++i) {
			string s1, s2;
			cin >> s1 >> s2;

			attr[s2]++;
		}


		int sum = 1;
		for (auto i : attr)
			sum *= i.second + 1;

		cout << sum - 1 << '\n';
	}

	return 0;
}