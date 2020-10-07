#include <iostream>
#include <string>
#include <map>
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

		map <int, string> people;

		while (n--) {
			string s1, s2, s3;
			cin >> s1 >> s2 >> s3;
			s1.pop_back();

			string data;
			int value = 0;

			for (auto i = s2.rbegin(); i != s2.rend(); ++i) {
				if (*i == '-' || *i == ' ') {

					if (data.compare("reppu") == 0) value = value * 10 + 3;
					else if (data.compare("elddim") == 0) value = value * 10 + 2;
					else if (data.compare("rewol") == 0) value = value * 10 + 1;
					data = "";
				}
				else data += *i;
			}
			if (data.compare("reppu") == 0) value = value * 10 + 3;
			else if (data.compare("elddim") == 0) value = value * 10 + 2;
			else if (data.compare("rewol") == 0) value = value * 10 + 1;
			people[value] = s1;
		}

		for (auto i = people.rbegin(); i != people.rend(); ++i)
			cout << i->second << '\n';

		cout << "==============================\n";
	}
}