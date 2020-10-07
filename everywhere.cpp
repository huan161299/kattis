#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map <string, int> location;
	int n, T;

	cin >> n;

	while (n--) {
		cin >> T;
		string s1;
		map <string, int> location;

		while (T--) {
			cin >> s1;
			location[s1]++;
		}

		cout << location.size() << '\n';
	}
	return 0;
}