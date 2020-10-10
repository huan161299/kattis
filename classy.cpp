#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		unordered_map <string, string> people;

		while (n--) {
			string s1, s2, s3;
			cin >> s1 >> s2 >> s3;
			s1.pop_back();

			string data;
			string value = "";

			for (auto i = s2.begin(); i < s2.end(); ++i) {
				if (*i == 'u') {
					value += 'a';
					++++++++++i;
					if (i == s2.end()) break;
				}

				else if (*i == 'm') {
					value += 'b';
					++++++++++++i;
					if (i == s2.end()) break;
				}

				else if (*i == 'l') {
					value += 'c';
					++++++++++i;
					if (i == s2.end()) break;
				}
			}

			reverse(value.begin(), value.end());

			while (value.size() < 10) value += 'b';

			people[value + ' ' + s1] = s1;
			value = "";
		}

		vector<string> keys;
		for (auto& it : people) {
			keys.push_back(it.first);
		}

		sort(keys.begin(), keys.end());

		for (auto& it: keys) cout << people[it] << '\n';

		cout << "==============================\n";
	}
}