#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p;
	cin >> p;

	while (p--) {
		int k, b;
		unsigned int n;
		cin >> k >> b >> n;

		unsigned sum = 0;

		while (n > 0) {
			sum += (n % b) * (n % b);
			n /= b;
		}

		cout << k << ' ' << sum << '\n';
	}

	return 0;
}