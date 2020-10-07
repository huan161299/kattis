#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while (n--) {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        int total = 0;

        for (unsigned i = 0; i < s.size(); i++) {
            int d = s[i] - '0';
            if (i & 1) {
                d *= 2;
            }
            if (d >= 10) d -= 9;
            total += d;
        }

		if (total % 10 == 0) cout << "PASS\n";
		else cout << "FAIL\n";
	}

	return 0;
}